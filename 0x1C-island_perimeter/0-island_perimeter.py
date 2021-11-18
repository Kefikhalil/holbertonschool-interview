#!/usr/bin/python3
"""Island perimeter
"""


def island_perimeter(grid):
    """perimeter's length
    """
    perimeter = 0
    for i, row in enumerate(grid):
        for x, c in enumerate(row):
            if c == 1:
                if i == 0 or grid[i - 1][x] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][x] == 0:
                    perimeter += 1
                if x == 0 or grid[i][x - 1] == 0:
                    perimeter += 1
                if x == len(row) - 1 or grid[i][x + 1] == 0:
                    perimeter += 1
return perimeter