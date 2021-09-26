#!/usr/bin/python3
"""
The N queens puzzle is the challenge of placing N non-attacking queens on an N×N chessboard. Write a program that solves the N queens problem.
"""


import sys


def printBoard(board):
    """print board
    Args:
        boardtype
    """
    list = []
    for a, row in enumerate(board):
        value = []
        for b, col in enumerate(row):
            if col == 1:
                value.append(a)
                value.append(b)
        list.append(value)

print(list)
def isSafe(board, row, col, N):
    """ isSafe
    """

    for a in range(col):
        if board[row][a] == 1:
            return False

    for a, b in zip(range
