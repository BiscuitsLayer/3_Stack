#pragma once
#include "StackLib.h"

struct Torture_t {
    Parkour_t *pk1 = nullptr;
    Stack_t stk;
    Parkour_t *pk2 = nullptr;
};

void FirstParkourChange (Torture_t *torture);
void SecondParkourChange (Torture_t *torture);
void FirstParkourNULL (Torture_t *torture);
void SecondParkourNULL (Torture_t *torture);
void HashChange (Torture_t *torture);
void ExtraPop (Torture_t *torture);
void StackPtrNULL (Torture_t *torture);
