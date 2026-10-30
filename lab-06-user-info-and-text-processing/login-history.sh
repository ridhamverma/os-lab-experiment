#!/bin/bash

printf 'Recent Login History:\n'
last -n 5
printf '\nCurrent User:\n'
whoami
