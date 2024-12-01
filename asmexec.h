#ifndef ASMEXEC_H    // Include guard to prevent multiple inclusions
#define ASMEXEC_H

#include <stdio.h>

// Function definition directly in the header file
static inline void nop() {
    __asm__ (
        "nop;"
    );
}

static inline void hlt() {
    __asm__ (
        "hlt;"
    );
}

static inline void cli() {
    __asm__ (
        "cli;"
    );
}

static inline void clc() {
    __asm__ (
        "clc;"
    );
}

static inline void ret() {
    __asm__ (
        "ret;"
    );
}

#endif // ASMEXEC_H