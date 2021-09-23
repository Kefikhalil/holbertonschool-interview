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
    row = []
    for i in board:
        for y in i:
            if y == 1:
                row.append([board.index(i), i.index(y)])
    print(row)


def isSafe(board, row, col, number):
    """
    check if safe
    """
    for z in range(col):

        if board[row][z] + board[row][z + 1] != 0:
            return False

    for z, q in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[z][q] == 1:
            return False

    for z, q in zip(range(row, number, 1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    return True


def nQueen(board, col, number):
    """
    n Queen
    """

    if (col >= number):
        printBoard(board)

    for i in range(number):
        if isSafe(board, i, col, number):
            board[i][col] = 1
            if nQueen(board, col+1, number):
                return True
            board[i][col] = 0

    return False


def main():
    """
    Main
    """
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        exit(1)
    if sys.argv[1].isnumeric():
        number = int(sys.argv[1])
    else:
        print("N must be a number")
        exit(1)
    if number < 4:
        print("N must be at least 4")
        exit(1)
    board = [[0 for i in range(number)] for a in range(number)]
    nQueen(board, 0, number)


if __name__ == '__main__':
main()
