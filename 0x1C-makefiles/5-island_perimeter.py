#!/usr/bin/python3


def island_perimeter(grid):
    perimeter = 0
    if len(grid) <= 100:
        for i in range(len(grid)):
            if len(grid[i]) <= 100:
                for j in range(len(grid[i])):
                    if grid[i][j] == 1:
                        if i == 0 or grid[i - 1][j] == 0:
                            perimeter += 1
                        if j == 0 or grid[i][j - 1] == 0:
                            perimeter += 1
                        try:
                            if grid[i][j + 1] == 0:
                                perimeter += 1
                        except IndexError:
                            perimeter += 1
                        try:
                            if grid[i + 1][j] == 0:
                                perimeter += 1
                        except IndexError:
                            perimeter += 1
    return perimeter
