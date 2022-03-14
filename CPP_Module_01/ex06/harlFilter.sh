#!/bin/bash

make && clear
# Replace with the name of your binary
BIN=harlFilter

echo -e "\e[1;32mTest 1: DEBUG\e[0m"
./$BIN DEBUG
echo

echo -e "\e[1;34mTest 2: INFO\e[0m"
./$BIN INFO
echo

echo -e "\e[1;33mTest 3: WARNING\e[0m"
./$BIN WARNING
echo

echo -e "\e[1;31mTest 4: ERROR\e[0m"
./$BIN ERROR
echo

echo -e "\e[1;35mTest 5: No argument\e[0m"
./$BIN
echo

echo -e "\e[1;35mTest 6: Two arguments\e[0m"
./$BIN "DEBUG" "INFO"
echo

echo -e "\e[1;35mTest 7: Invalid argument\e[0m"
./$BIN "INVALID"
echo

make fclean &>/dev/null
