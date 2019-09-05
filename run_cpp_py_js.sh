#!/bin/bash
export filename=$1
printf "\nRunning JavaScript $1\n"
node $filename.js

printf "\nRunning Python Script $2\n"
PATH="$PATH:/d/App/Anaconda3"
python $filename.py

printf "\Running CplusPlus Program - Executable $3\n"
./$filename.exe
