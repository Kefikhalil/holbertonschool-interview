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

    coins = sorted(coins)
    coins = coins[::-1]

    coins = 0
    x = total
    for y in coins:
        while (x - y >= 0):
            x = x - y
            coins = coins + 1

    if x != 0 and x - coins[-1] < 0:
        return -1
return coins