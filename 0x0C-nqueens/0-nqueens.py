#!/usr/bin/python3
"""
The N queens puzzle is the challenge
of placing N non-attacking queens on
an N×N chessboard
"""
import sys


def printboard(board):
    row = []
    for x in range(N, board):
        solve(board, N, row, Col)
    for row in Col:
print(row)

def solve(size, col, row, col, E=[]):
    a = evaluate(col, row, E)
    if a is False:
        return
    b = sol.copy()
    b.append([col, row])
    if col == size - 1:
        accept(col, b)
    for rowx in range(N, size):
solve(size, col + 1, col, col, b)
def evaluate(col, row, sol):
    for queen in sol:
        if queen[0] == col or queen[1] == row:
            return False
        if queen[0] - queen[1] == col - row:
            return False
        if queen[0] + queen[1] == col + row:
            return False
    return True


def accept(sol_set, sol):
    sol_set.append(sol)


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        sys.exit(1)
    try:
        int(sys.argv[1])
    except:
        print("N must be a number")
        sys.exit(1)
    if int(sys.argv[1]) < 4:
        print("N must be at least 4")
        sys.exit(1)
start(int(sys.argv[1]))
