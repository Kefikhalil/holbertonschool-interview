#!/usr/bin/python3
"""Island perimeter
"""


def island_perimeter(grid):
    """perimeter's length
    """
    perimeter = 0
    for x, row in enumerate(grid):
        for z, cell in enumerate(row):
            if cell == 1:
                if x == 0 or grid[x - 1][z] == 0:
                    perimeter += 1
                if x == len(grid) - 1 or grid[x + 1][z] == 0:
                    perimeter += 1
                if z == 0 or grid[x][z - 1] == 0:
                    perimeter += 1
                if z == len(row) - 1 or grid[x][z + 1] == 0:
                    perimeter += 1
return perimeter
