#include <stdio.h>
#include <windows.h>

__declspec(dllexport) void nop() {
__asm__ (
        "nop;"
    );
}

__declspec(dllexport) void hlt() {
__asm__ (
        "hlt;"
    );
}

__declspec(dllexport) void cli() {
__asm__ (
        "cli;"
    );
}

__declspec(dllexport) void clc() {
__asm__ (
        "clc;"
    );
}

__declspec(dllexport) void ret() {
__asm__ (
        "ret;"
    );
}