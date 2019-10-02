#include "cmake-build-debug/StackLib.h"
#include "cmake-build-debug/Torture.h"

int main () {
    Torture_t torture;
    torture.stk = StackInit ();
    StackPtrDump (&torture.stk, "Pointer Dump Test", LOCATION);

    //FirstParkourChange (&torture);
    //SecondParkourChange (&torture);
    //FirstParkourNULL (&torture);
    //SecondParkourNULL (&torture);
    //HashChange (&torture);
    //ExtraPop (&torture);
    //StackPtrNULL (&torture);

    size_t sz = StackGetSize (&torture.stk);
    StackDump (&torture.stk, "End Program", LOCATION);
    StackDestruct (&torture.stk);
}