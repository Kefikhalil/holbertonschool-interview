#!/usr/bin/python3
"""Island perimeter
"""


def island_perimeter(grid):
    """perimeter's length
    """
    p = 0
    x = len(grid)
    y = len(grid[0])
    for i in range(x):
        for z in range(y):
            if(grid[i][z] == 1):
                if(i == 0 or grid[i-1][z] == 0):
                    p = p + 1
                if(i == x-1 or grid[i+1][z] == 0):
                    p = p + 1
                if(z == 0 or grid[i][z-1] == 0):
                    p = p + 1
                if(z == y-1 or grid[i][z+1] == 0):
                    p = p + 1
return p
