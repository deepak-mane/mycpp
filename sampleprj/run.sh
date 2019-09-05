#!/bin/bash
export filename=$1
printf "\nRunning JavaScript $filename.js\n"
node $filename.js

printf "\nRunning Python Script $filename.py\n"
PATH="$PATH:/d/App/Anaconda3"
python $filename.py

printf "\nRunning CplusPlus Program - Executable ./$filename.exe\n"
./$filename.exe
