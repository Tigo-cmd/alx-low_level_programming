#!/bin/bash
echo "file>"
read file
touch $file
echo "#include \"dog.h\"" > $file
echo "/**
* $file - 
* @param
* @param
*
* Decsription: 
* Return: Always(0) success
*/" >> $file
echo "Prototype>"
read proto 
echo $proto >> $file
echo "{
	
}" >> $file
touch main0
head -n -1 dog.h > main0
echo $proto >> main0
echo "#endif" >> main0
mv main0 dog.h
chmod 764 $file
bash dirgit.sh
gedit $file
clear
