#!/usr/bin/python3
""" 0x10-rain """


def rain(walls):
    a = len(walls)
    if (a <= 0):
        return (0)
    water = 0

    for i in range(1, a - 1):
        cat = walls[i]
        for j in range(i):
            cat = max(cat, walls[j])
        dog = walls[i]
        for j in range(i + 1, a):
            dog = max(dog, walls[j])
        x = min(cat, dog)
        water += x - walls[i]
    return (water)
