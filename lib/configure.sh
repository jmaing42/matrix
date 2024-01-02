#!/bin/sh

cd "$(dirname "$0")" || exit

cmake -B build/none -DTARGET_ARCH=none -DCMAKE_BUILD_TYPE=Release
cmake -B build/SSE -DTARGET_ARCH=SSE -DCMAKE_BUILD_TYPE=Release
cmake -B build/SSE2 -DTARGET_ARCH=SSE2 -DCMAKE_BUILD_TYPE=Release
cmake -B build/SSE3 -DTARGET_ARCH=SSE3 -DCMAKE_BUILD_TYPE=Release
cmake -B build/SSE3 -DTARGET_ARCH=SSE3 -DCMAKE_BUILD_TYPE=Release
cmake -B build/SSSE3 -DTARGET_ARCH=SSSE3 -DCMAKE_BUILD_TYPE=Release
cmake -B build/SSE4.1 -DTARGET_ARCH=SSE4.1 -DCMAKE_BUILD_TYPE=Release
cmake -B build/SSE4.2 -DTARGET_ARCH=SSE4.2 -DCMAKE_BUILD_TYPE=Release
cmake -B build/AVX -DTARGET_ARCH=AVX -DCMAKE_BUILD_TYPE=Release
cmake -B build/AVX2 -DTARGET_ARCH=AVX2 -DCMAKE_BUILD_TYPE=Release
cmake -B build/AVX512 -DTARGET_ARCH=AVX512 -DCMAKE_BUILD_TYPE=Release
cmake -B build/ARMv7-A -DTARGET_ARCH=ARMv7-A -DCMAKE_BUILD_TYPE=Release
cmake -B build/ARMv8-A -DTARGET_ARCH=ARMv8-A -DCMAKE_BUILD_TYPE=Release
cmake -B build/ARMv8.1-A -DTARGET_ARCH=ARMv8.1-A -DCMAKE_BUILD_TYPE=Release
cmake -B build/ARMv8.2-A -DTARGET_ARCH=ARMv8.2-A -DCMAKE_BUILD_TYPE=Release
cmake -B build/ARMv8.3-A -DTARGET_ARCH=ARMv8.3-A -DCMAKE_BUILD_TYPE=Release
cmake -B build/ARMv8.4-A -DTARGET_ARCH=ARMv8.4-A -DCMAKE_BUILD_TYPE=Release
cmake -B build/ARMv8.5-A -DTARGET_ARCH=ARMv8.5-A -DCMAKE_BUILD_TYPE=Release
cmake -B build/ARMv8.6-A -DTARGET_ARCH=ARMv8.6-A -DCMAKE_BUILD_TYPE=Release
cmake -B build/ARMv9.0-A -DTARGET_ARCH=ARMv9.0-A -DCMAKE_BUILD_TYPE=Release
cmake -B build/ARMv9.2-A -DTARGET_ARCH=ARMv9.2-A -DCMAKE_BUILD_TYPE=Release
