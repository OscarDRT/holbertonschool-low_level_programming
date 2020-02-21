#!/usr/bin/python3

def island_perimeter(grid):
    suma = 0
    if len(grid) =< 100:
        for i in range(len(grid)):
            if len(grid[i]) =< 100:
                for j in range(len(grid[i])):
                    if grid[i][j] == 1:
                        perimeter = 4
                        try:
                            if grid[i][j + 1] == 1:
                                perimeter -= 1
                        except IndexError:
                            pass
                        try:
                            if grid[i][j - 1] == 1:
                                perimeter -= 1
                        except IndexError:
                            pass
                        try:
                            if grid[i + 1][j] == 1:
                                perimeter -= 1
                        except IndexError:
                            pass
                        try:
                            if grid[i - 1][j] == 1:
                                perimeter -= 1
                        except IndexError:
                            pass
                        suma += perimeter
    return suma