#!/bin/bash
echo "commit >" 
read txt
git add .
git commit -m $txt
git push
