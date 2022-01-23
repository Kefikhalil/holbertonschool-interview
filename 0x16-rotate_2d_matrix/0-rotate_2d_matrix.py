#!/usr/bin/python3
"""
Rotate a 2d matrix
"""


def rotate_2d_matrix(matrix):
    """
    rotate
    """
    temp = matrix.copy()
    matrix.clear()
    for x in range(len(temp[0])):
        y = []
        for i in reversed(range(len(temp))):
            y.append(temp[i][x])
matrix.append(y)
