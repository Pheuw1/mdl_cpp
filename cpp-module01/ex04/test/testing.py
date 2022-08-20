#!/usr/bin/env python3
import sys
import fileinput
 
file = input("Enter filename:\n")
x = input("Enter s1:\n")
y = input("Enter s2:\n")
for l in fileinput.input(files = file):
    l = l.replace(x, y)
    sys.stdout.write(l+"\n")