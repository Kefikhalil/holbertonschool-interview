#!/usr/bin/python3
""" UTF8 Validation """

def validUTF8(data):
    """ Checks if it's UTF8 valide or not"""
        byte = 0
        x = 1 << 7
        y = 1 << 6
    for num in data:
        i = 1 << 7
        if byte == 0:
            while i & num:
                byte += 1
                i = i >> 1
            if byte == 0:
                continue
            if byte == 1 or byte > 4:
                return False
        else:
            if not (num & x and not (num & y)):
                return False
        byte -= 1
    return byte == 0
