#!/bin/bash
echo "file >"
read file
touch $file
echo "#include <stdio.h>" > $file
chmod 764 $file
bash dirgit.sh
gedit $file
