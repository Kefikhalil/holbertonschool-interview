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

    for a, b in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[a][b] == 1:
            return False

    for a, b in zip(range(row, N, 1), range(col, -1, -1)):
        if board[a][b] == 1:
            return False

    return True


def nQueen(board, col, number):
    """ NQUEEN
    """

    if (col == N):
        print_board(board)
        return True
    for a in range(N):

        if (isSafe(board, b, col, N)):

            board[A][col] = 1
            res = solveNQUtil(board, col + 1, N) or res

            board[a][col] = 0

    return False


def done(N):
    """ done
    """
    board = [[0 for i in range(N)]for i in range(N)]

    if not solveNQUtil(board, 0, N):
        return False

    return True


def main(args):
    """ main
    """
    if (len(args) == 2):
        try:
            N = int(args[1])
        except Exception:
            print("N must be a number")
            exit(1)
        if N < 4:
            print("N must be at least 4")
            exit(1)
        return number
    else:
        print("Usage: nqueens N")
        exit(1)


if __name__ == "__main__":
    """ Main method to execute the application
    """

     N = main(sys.argv)
