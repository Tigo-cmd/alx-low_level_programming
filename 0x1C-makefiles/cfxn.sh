#!/bin/bash
echo "file>"
read file
touch $file
echo "#include \"variadic_functions.h\"" > $file
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
head -n -1 variadic_functions.h > main0
echo $proto >> main0
echo "#endif" >> main0
mv main0 variadic_functions.h
chmod 764 $file
bash dirgit.sh
gedit $file

