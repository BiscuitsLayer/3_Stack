#include "cmake-build-debug/StackLib.h"

int main () {
    Stack_t stk = StackInit ();

    StackPush(&stk, 'a');
    StackPush(&stk, 'b');
    StackPush(&stk, 'c');
    StackPush(&stk, 'd');
    StackPush(&stk, 'e');

    Elem_t ans = StackPop (&stk);

    StackDump (&stk, "End Program", LOCATION);

    StackDestruct (&stk);
}