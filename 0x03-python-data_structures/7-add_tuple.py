#!/usr/bin/python3

def add_tuple(tuple_a=(), tuple_b=()):
    lenx = len(tuple_a)
    leny = len(tuple_b)
# check for tuple_a
    if lenx < 1:
        tuple_a = (0, 0)
    elif lenx < 2:
        tuple_a = (tuple_a[0], 0)

# check for tuple_b
    if leny < 1:
        tuple_b = (0, 0)
    elif leny < 2:
        tuple_b = (tuple_b[0], 0)

    result = (tuple_a[0] + tuple_b[0], tuple_a[1] + tuple_b[1])
    return result
