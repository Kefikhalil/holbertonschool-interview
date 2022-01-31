#!/usr/bin/python3
"""Coins
"""


def makeChange(coins, total):
    """make change
    """
    if total <= 0:
        return 0
    if len(coins) <= 0:
        return -1

    change = sorted(coins)
    change = change[::-1]

    coins = 0
    i = total
    for c in change:
        while (i - c >= 0):
            i = i - c
            coins = coins + 1

    if i != 0 and i - change[-1] < 0:
        return -1
    return coins