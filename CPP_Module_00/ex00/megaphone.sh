#!/bin/bash

make && clear

EXE="./megaphone"

echo "Test 1:"
$EXE "shhhhh... I think the students are asleep..."
echo "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
echo

echo "Test 2:"
$EXE "Damnit" " ! " "Sorry students, I thought this thing was off."
echo "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
echo

echo "Test 3:"
$EXE
echo "* LOUD AND UNBEARABLE FEEDBACK NOISE *"

make fclean &>/dev/null
