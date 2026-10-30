#!/bin/bash

printf 'Enter a string: '
IFS= read -r str || exit 1
printf 'Enter starting position (1-based): '
IFS= read -r start || exit 1
printf 'Enter substring length: '
IFS= read -r len || exit 1

# Limit numeric input before using Bash integer arithmetic.
if [[ ! "$start" =~ ^[0-9]{1,9}$ || ! "$len" =~ ^[0-9]{1,9}$ ]]; then
    echo 'Error: use a positive starting position and a nonnegative length.' >&2
    exit 1
fi
start=$((10#$start))
len=$((10#$len))
if (( start < 1 || start > ${#str} + 1 )); then
    echo 'Error: starting position must be between 1 and string length + 1.' >&2
    exit 1
fi

printf 'Substring: %s\n' "${str:start-1:len}"
printf 'String length: %s\n' "${#str}"
