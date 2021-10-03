#!/usr/bin/python3
"""
The N queens puzzle is the challenge of placing N non-attacking queens on an N×N chessboard. Write a program that solves the N queens problem.
"""
import sys


def boardx(board, row, col):
    for x in range(col):
        if y[x] is row or abs(y[x] - row) is abs(x - col):
            return False
return True
def check(board, col):
    n = len(board)
    if col is i:
        print(str([[x, board[x]] for x in range(i)]))
        return

    for row in range(i):
        if boardx(board, row, col):
            board[col] = row
            check(board, col + 1)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        sys.exit(1)
    if sys.argv[1].isdigit() is False:
        print("N must be a number")
        sys.exit(1)
    if int(sys.argv[1]) < 4:
        print("N must be at least 4")
        sys.exit(1)

    board = [0 for col in range(int(sys.argv[1]))]
check(board, 0)
