#!/usr/bin/python3
for iz in range(97, 123):
    if chr(iz) == 'q' or chr(iz) == 'e':
        continue
    print(chr(iz).format(iz), end='')
