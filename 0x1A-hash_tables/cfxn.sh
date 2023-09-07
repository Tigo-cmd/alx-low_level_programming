#!/bin/bash
echo "file>"
read file
touch $file
echo "#include \"hash_tables.h\"" > $file
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
	
} " >> $file
touch hash_tables0
head -n -1 hash_tables.h > hash_tables0
echo $proto >> hash_tables0
echo "#endif" >> hash_tables0
mv hash_tables0 hash_tables.h
chmod 764 $file
bash dirgit.sh
gedit $file

