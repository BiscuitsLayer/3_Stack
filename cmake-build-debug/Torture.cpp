#pragma once
#include "StackLib.h"
#include "Torture.h"

void FirstParkourChange (Torture_t *torture) {
    torture->pk1 = torture->stk.pk1 - 1;
    torture->pk1 [1] = 0xBEDAB0DA;
}

void SecondParkourChange (Torture_t *torture) {
    torture->pk2 = torture->stk.pk2 + 1;
    torture->pk2 [-1] = 0xBEDAB0DA;
}

void FirstParkourNULL (Torture_t *torture) {
    torture->stk.pk1 = nullptr;
}

void SecondParkourNULL (Torture_t *torture) {
    torture->stk.pk2 = nullptr;
}

void HashChange (Torture_t *torture) {
    torture->stk.hashcode = 0;
}

void ExtraPop (Torture_t *torture) {
    StackPush(&torture->stk, 10);
    StackPush(&torture->stk, 20);
    StackPush(&torture->stk, 30);
    StackPush(&torture->stk, 40);
    StackPush(&torture->stk, 50);

    Elem_t ans = 0;
    for (int i = 0; i < 6; ++i)
        ans = StackPop(&torture->stk);
}

void StackPtrNULL () {
    StackGetSize(nullptr);
}
