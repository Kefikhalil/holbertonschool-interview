#!/usr/bin/python3
"""
Make change
"""


def makeChange(coins, total):
    """mage change
    """
    coinsum = 0
    if total <= 0:
        return 0
    coins.sort()
    coins.reverse()
    for x in coins:
        coinsum += total // x
        total = total % x
    if (total != 0):
        return -1
return coinsum
