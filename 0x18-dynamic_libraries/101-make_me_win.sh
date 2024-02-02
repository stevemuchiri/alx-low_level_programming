#!/bin/bash
wget -P .. https://raw.githubusercontent.com/stevemuchiri/alx-low_level_programming/master/0x18-dynamic_libraries/libheck.so
export LD_PRELOAD="$PWD/../libheck.so"
