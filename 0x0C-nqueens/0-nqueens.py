#!/usr/bin/python3
"""
The N queens puzzle is the challenge
of placing N non-attacking queens on
an N×N chessboard
"""
import sys


def Board(board, row, col):
    for a in range(col):
        if board[a] is row or abs(board[a] - row) is abs(a - col):
            return False
    return True


def nqueens(board, col):
    b = len(board)
    if col is b:
        print(str([[a, board[a]] for a in range(b)]))
        return

    for row in range(b):
        if Board(board, row, col):
            board[col] = row
            nqueens(board, col + 1)

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
nqueens(board, 0)