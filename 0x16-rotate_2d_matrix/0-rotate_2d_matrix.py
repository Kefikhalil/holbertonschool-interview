#!/usr/bin/python3
"""
Rotate a 2d matrix
"""


def rotate_2d_matrix(matrix):
    """
    rotate
    """
    dim = len(matrix)
    for x in range(0, int(dim/2)):
        for y in range(x, dim-x-1):
            temp = matrix[x][y]
            matrix[x][y] = matrix[dim-y-1][x]
            matrix[dim-y-1][x] = matrix[dim-x-1][dim-y-1]
            matrix[dim-x-1][dim-y-1] = matrix[y][dim-x-1]
matrix[y][dim-x-1] = temp
