#!/usr/bin/python3
"""
Make a change
"""

def makeChange(coins, total):
    """Coins, total
    """
    coinsCombination = 0
    if total <= 0:
        return 0
    coins.sort()
    coins.reverse()
    for c in coins:
        coinsCombination += total // c
        total = total % c
    if (total != 0):
        return -1
return coinsCombination