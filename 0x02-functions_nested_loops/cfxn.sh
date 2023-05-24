#!/bin/bash
echo "file>"
read file
touch $file
echo "#include \"main.h\"" > $file
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
echo " $proto
{
	
} " >> $file
main0=$(mktemp)
head -n -1 main.h > $main0
echo $proto >> $main0
mv main0 main.h
bash dirgit.sh
gedit $file

