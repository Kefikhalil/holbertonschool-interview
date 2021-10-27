#!/usr/bin/python3
"""
Make a change
"""

def makeChange(coins, total):
    """Coins, total
    """
    if total <= 0:
        return 0
    if len(coins) <= 0:
        return -1

    ct = sorted(coins)
    ct = ct[::-1]

    coins = 0
    x = total
    for y in ct:
        while (x - y >= 0):
            x = x - y
            coins = coins + 1

    if x != 0 and x - ct[-1] < 0:
        return -1
return coins