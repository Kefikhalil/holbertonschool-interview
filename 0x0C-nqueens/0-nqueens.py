#!/usr/bin/python3
"""
The N queens puzzle is the challenge of placing N non-attacking queens on an N×N chessboard. Write a program that solves the N queens problem.
"""


import sys


def printBoard(board):
    """
print Board
    """
    row = []
    for x in board:
        for y in x:
            if y == 1:
                row.append([board.index(x), x.index(y)])
print(row)


def isSafe(board, row, col, N):
    """
     is safe
    """
    for y in range(col):
	
        if board[row][y] + board[row][y + 1] != 0:
            return False

    for y, z in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[y][z] == 1:
            return False

    for y, z in zip(range(row, number, 1), range(col, -1, -1)):
        if board[y][z] == 1:
            return False

return True


def nQueen(board, col, N):
    """n Queen
    """

    if (col >= N):
        printBoard(board)

    for x in range(N):
        if isSafe(board, x, col, N):
            board[x][col] = 1
            if nQueen(board, col+1, N):
                return True
            board[x][col] = 0

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
    if N < 4:
        print("N must be at least 4")
        exit(1)
    board = [[0 for x in range(N)] for i in range(N)]
    nQueen(board, 0, N)


if __name__ == '__main__':
main()
