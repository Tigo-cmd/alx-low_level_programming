#!/bin/bash
# git commands.
echo "Commit >"
read commit
git add . 
git commit -m "$commit"
git push
