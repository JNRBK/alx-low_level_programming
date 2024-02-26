#!/usr/bin/python3
"""
5-island_perimeter
"""
def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
# perimeter of rectangle p = (l + w) * 2
    if not isinstance(grid, int):
        raise ValueError
    for i in range(len(grid + 1)):
        grid[0] = 0