#!/usr/bin/python3
""" UTF8 Validation"""


def validUTF8(data):
    """ Checks if it is UTF8 valid """
    byte = 0

    x = 1 << 7
    y = 1 << 6

    for i in data:
        z = 1 << 7
        if byte == 0:
            while z & i:
                byte += 1
                z = z >> 1
            if byte== 0:
                continue
            if byte == 1 or byte > 4:
                return False
        else:
            if not (i & x and not (i & y)):
                return False
        byte -= 1
    return byte == 0
