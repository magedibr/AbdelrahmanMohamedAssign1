/*
 * Created by : Abdelrahman Mohamed
 * Date:  01/10/2020
 * Description: Holds all functions that are used to validate the result of any given Sudoku grid.
 */

#include <stdio.h>


int isValid(int b[9][9]){

    int j,m,i,n,k,l;


    //Checking range

    for(i = 0; i < 9; i++)

        for( j = 0; j < 9; j++)

            if(b[i][j] < 1 || b[i][j] > 9)

                return 0;

//Checking for repeated values in rows and box's

    for(i = 0; i < 9; i++)

        for( j = 0; j < 9; j++)

            for(k = 1; k < j; k++)

                if(b[i][j] == b[i][k])

                    return 0;

    for(j = 0; j < 9; j++)

        for(i = 0; i < 9; i++)

            for(k = 1; k < i; k++)

                if(b[i][j] == b[k][j])

                    return 0;

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


//If valid
    return 1;

}



void printResult(int result){

    if(result == 1)
        printf("It is a valid solution.\n");
    else
        printf("It is an invalid solution.\n");
}


//Fucntion to display the grid

void displayGrid(int arr[9][9]){
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

