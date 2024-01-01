#!/bin/sh

cmake -B build/none -DTARGET_ARCH=none
cmake -B build/SSE -DTARGET_ARCH=SSE
cmake -B build/SSE2 -DTARGET_ARCH=SSE2
cmake -B build/SSE3 -DTARGET_ARCH=SSE3
cmake -B build/SSE3 -DTARGET_ARCH=SSE3
cmake -B build/SSSE3 -DTARGET_ARCH=SSSE3
cmake -B build/SSE4.1 -DTARGET_ARCH=SSE4.1
cmake -B build/SSE4.2 -DTARGET_ARCH=SSE4.2
cmake -B build/AVX -DTARGET_ARCH=AVX
cmake -B build/AVX2 -DTARGET_ARCH=AVX2
cmake -B build/AVX512 -DTARGET_ARCH=AVX512
cmake -B build/ARMv7-A -DTARGET_ARCH=ARMv7-A
cmake -B build/ARMv8-A -DTARGET_ARCH=ARMv8-A
cmake -B build/ARMv8.1-A -DTARGET_ARCH=ARMv8.1-A
cmake -B build/ARMv8.2-A -DTARGET_ARCH=ARMv8.2-A
cmake -B build/ARMv8.3-A -DTARGET_ARCH=ARMv8.3-A
cmake -B build/ARMv8.4-A -DTARGET_ARCH=ARMv8.4-A
cmake -B build/ARMv8.5-A -DTARGET_ARCH=ARMv8.5-A
cmake -B build/ARMv8.6-A -DTARGET_ARCH=ARMv8.6-A
cmake -B build/ARMv9.0-A -DTARGET_ARCH=ARMv9.0-A
cmake -B build/ARMv9.2-A -DTARGET_ARCH=ARMv9.2-A
