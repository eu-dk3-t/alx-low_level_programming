#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island."""
    length = len(grid)
    width = len(grid[0])
    border, size = 0, 0

    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    border += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    border += 1
    return size * 4 - border * 2
