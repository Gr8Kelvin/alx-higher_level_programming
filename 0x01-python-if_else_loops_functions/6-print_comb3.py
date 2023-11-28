#!/usr/bin/python3
for iz in range(0, 8):
    for jz in range(iz + 1, 10):
        print("{:d}{:d}".format(iz, jz), end=', ')
print("{:d}{:d}".format(iz + 1, jz))
