#!/usr/bin/python3
"""Rotate 2D Matrix
"""


def rotate_2d_matrix(matrix):
    """ Rotate 90° matrix
    """
    temp = matrix.copy()
    matrix.clear()
    for i in range(len(temp[0])):
        t = []
        for z in reversed(range(len(temp))):
            t.append(temp[z][i])
        matrix.append(t)
