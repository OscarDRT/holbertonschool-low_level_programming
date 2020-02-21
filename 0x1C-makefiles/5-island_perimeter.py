#!/usr/bin/python3

def island_perimeter(grid):
    suma = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            perimeter = 4
            if grid[i][j] == 1:
                try:
                    if grid[i][j + 1] == 1:
                        perimeter -= 1
                except IndexError:
                    perimeter -= 1
                try:
                    if grid[i][j - 1] == 1:
                        perimeter -= 1
                except IndexError:
                    perimeter -= 1
                try:
                    if grid[i + 1][j] == 1:
                        perimeter -= 1
                except IndexError:
                    perimeter -= 1
                try:
                    if grid[i - 1][j] == 1:
                        perimeter -= 1
                except IndexError:
                    perimeter -= 1
                suma += perimeter

    return suma