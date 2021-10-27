#!/usr/bin/python3
"""
Make a change
"""


def makeChange(coins, total):
    """Coins, total
    """
    if (total <= 0):
        return (0)
    coins = reversed(sorted(coins))
    sm = 0
    for i in coins:
        sm += int(total / i)
        total -= int(total / i) * i
        if (total == 0):
            return (sm)
return (-1)
