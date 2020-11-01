/*
~Program to solve a sudoku puzzle.
~Sample inputs are availabe in README.md as well as at the end of this script.
~Happy Solving
~Created by: Shlok Kamat (2010110595)
*/

#include<stdio.h>

int sudoku[9][9];
void solve_sudoku(int, int);


int main()
{
    int row, column;
    printf("Enter Sudoku entries separated by spaces.\n");
    printf("Enter 0 for unknown entries.\n");
    for (row = 0; row < 9; row++)
        for (column = 0; column < 9; column++)
            scanf("%d", &sudoku[row][column]);
            printf("\n");

    solve_sudoku(0, 0);
    return 0;
}


int row_check(int row, int num)
{
    int column;
    for (column = 0; column < 9; column++)
    {
        if (sudoku[row][column] == num)
        {
            return 0;
        }
    }

    return 1;
}

int column_check(int column, int num)
{
    int row;
    for (row = 0; row < 9; row++)
    {
        if (sudoku[row][column] == num)
        {
            return 0;
        }
    }
    return 1;
}

int grid_check(int row, int column, int num)
{
    row = (row / 3) * 3;
    column = (column / 3) * 3;

    int r, c;
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (sudoku[row + r][column + c] == num)
            {
                return 0;
            }
        }
    }
    return 1;
}

void skip(int row, int column)
{
    if (column < 8)
        solve_sudoku(row, column + 1);
    else
        solve_sudoku(row + 1, 0);
}

void show()
{
    int row, column;
    printf("THE SOLVED SUDOKU: \n");
    printf("\n");
    for (row = 0; row < 9; row++)
    {
        for (column = 0; column < 9; column++)
            printf("%d ", sudoku[row][column]);
            printf("\n");
    }
}

void solve_sudoku(int row, int column)
{
    if (row > 8)
        show();
    if (sudoku[row][column] != 0)
    {
        skip(row, column);
    }
    else
    {
        int counter;
        for (counter = 1; counter <= 9; counter++)
        {
            if ((row_check(row, counter) == 1) && (column_check(column, counter) == 1) && (grid_check(row, column, counter) == 1))
            {
                sudoku[row][column] = counter;
                skip(row, column);
            }
        }

        sudoku[row][column] = 0;
    }
}
