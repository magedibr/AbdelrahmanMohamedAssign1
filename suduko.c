//
// Created by Abdelrahman Mohamed on 2020-09-29.
//
//
#include<stdlib.h>
#include <stdio.h>
int validGrid[9][ 9 ] = {{5,3,4,6,7,8,9,1,2}, {6,7,2,1,9,5,3,4,8},{1,9,8,3,4,2,5,6,7},
                       {8,5,9,7,6,1,4,2,3},{4,2,6,8,5,3,7,9,1},{7,1,3,9,2,4,8,5,6},
                         {9,6,1,5,3,7,2,8,4},{2,8,7,4,1,9,6,3,5},{3,4,5,2,8,6,1,7,9}};
/*
#include<time.h>

//Function to return 1 if sudoku grid is valid and 0 otherwise

int checkWin(int b[9][9])

{

    int i, j, k, l, m, n;

//Invalid if any value is not from 1 to 9

    for(i = 0; i < 9; i++)

        for( j = 0; j < 9; j++)

            if(b[i][j] < 1 || b[i][j] > 9)

                return 0;

//Invalid if any value repeats in the row

    for(i = 0; i < 9; i++)

        for( j = 0; j < 9; j++)

            for(k = 1; k < j; k++)

                if(b[i][j] == b[i][k])

                    return 0;

//Invalid if any value repeats in the column

    for(j = 0; j < 9; j++)

        for(i = 0; i < 9; i++)

            for(k = 1; k < i; k++)

                if(b[i][j] == b[k][j])

                    return 0;

//Invalid if any value repeats in the block

    for(i = 0; i < 9; i++)

        for(j = 0; j < 9; j++)

        {

            m = (int)(i / 3) * 3;

            n = (int)(j / 3) * 3;

            for(k = m; k < m + 3; k++)

                for(l = n; l < n + 3; l++)

                    if((i != k || j != l) && (b[i][j] == b[k][l]))

                        return 0;

        }

//Otherwise, valid

    return 1;

}

//Function to print the result accordingly

void printResult(int result)

{

    if(result == 1)

        printf("It is a valid solution.\n");

    else

        printf("It is an invalid solution.\n");

}

//Fucntion to display the grid

void displayGrid(int arr[9][9])

{

    int i, j;

    printf("\n-------------Sudoku Grid-------------");

    for(i = 0; i < 9; i++)

    {

        printf("\n");

        for(j = 0; j < 9; j++)

            printf(" %d", arr[i][j]);

    }

    printf("\n\n");

}

//main() begins

int main(void)

{

    int i, j, k;

//Test case grid

    int arr[9][9] = {{5,3,4,6,7,8,9,1,2}, {6,7,2,1,9,5,3,4,8},{1,9,8,3,4,2,5,6,7},
                     {8,5,9,7,6,1,4,2,3},{4,2,6,8,5,3,7,9,1},{7,1,3,9,2,4,8,5,6},
                     {9,6,1,5,3,7,2,8,4},{2,8,7,4,1,9,6,3,5},{3,4,5,2,8,6,1,7,9}};

    displayGrid(arr);

    printResult(checkWin(arr));

//Get 2 rows of input

    for(i = 0; i < 2; i++)

    {

        printf("Enter row %d of your Sudoku grid\n", i + 1);

        printf("Use Space/Tab/Return key to enter the next values\n");

        printf("and press \'Return\' after entering nine integers.\n");

        printf("Remember, to make a valid row of Sudoku grid,\n");

        printf("all integers should be distinct and range from 1 to 9\n");

        for(j = 0; j < 9; j++)

            scanf("%d", &arr[i][j]);

    }

//Generate remaining rows

    srand(time(0));

    for(i = 2; i < 9; i++)

        for(j = 0; j < 9; j++)

        {

            arr[i][j] = 1 + rand() % 9;

//Repeat the element if it is already present in that row

            for(k = 0; k < j; k++)

                if(arr[i][j] == arr[i][k])

                    j--;

        }

    displayGrid(arr);

    printResult(checkWin(arr));

}*/