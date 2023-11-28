#!/usr/bin/python3
def fizzbuzz():
    for neez in range(1, 101):
        if neez % 3 == 0 and neez % 5 != 0:
            print('Fizz', end=' ')
        elif neez % 5 == 0 and neez % 3 != 0:
            print('Buzz', end=' ')
        elif neez % 3 == 0 and neez % 5 == 0:
            print('FizzBuzz', end=' ')
        else:
            print(neez, end=' ')
