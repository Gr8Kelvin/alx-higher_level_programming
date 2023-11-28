#!/usr/bin/python3

def uppercase(str):
    for chz in str:
        if ord(chz) >= 97 and ord(chz) <= 122:
            chz = chr(ord(chz) - 32)
        print("{:s}".format(chz), end='')

    print('\n', end="")
