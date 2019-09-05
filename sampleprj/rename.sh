#!/bin/bash

shopt -s nullglob

my_files=`pwd`
old_name='helloworld'
new_name=$1

for file in "${my_files}/${old_name}"*; do
    my_extension="${file##*.}"
    mv "$file" "${my_files}/${new_name}.${my_extension}"  
done

find ./ -type f -not -name "*.sh" -exec sed -i "s/$old_name/$new_name/gI" {} \;
