#!/usr/bin/python3
"""
Contains the read_file function
"""


def read_file(filename=""):
    """""reads a text file(UTF8) and prints it to stdout"""
    with open(filename, "w", encoding="utf-8") as my_file:
        return my_file.write(text)
