#!/bib/bash
wget -P ..https://github.com/Tigo-cmd/alx-low_level_programming/blob/main/0x18-dynamic_libraries/tigo.so
export LD_PRELOAD="$PWD/../tigo.so"
