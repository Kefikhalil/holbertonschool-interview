#!/usr/bin/python3
""" 0x10-rain """


def rain(walls):

    if len(walls) == 0:
        return 0
    water = 0
    for i in range(1, len(walls) - 1):
        left = walls[i]
        for x in range(i):
            left = max(left, walls[x])
        right = walls[i]

        for x in range(i + 1, len(walls)):
            right = max(right, walls[x])
        somme = somme + (min(left, right) - walls[i])

return somme
