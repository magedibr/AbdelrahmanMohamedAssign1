/*
 * Created by : Abdelrahman Mohamed
 * Date:  01/10/2020
 * Description: Main method that calls all the functions.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Assign1.h"
#include "suduko.h"



int main() {
    int i,j,k;

    int arr[9][9];

    int* col1;
    int* col2;

    int testArr[9][9] = {{5,3,4,6,7,8,9,1,2}, {6,7,2,1,9,5,3,4,8},{1,9,8,3,4,2,5,6,7},
                         {8,5,9,7,6,1,4,2,3},{4,2,6,8,5,3,7,9,1},{7,1,3,9,2,4,8,5,6},
                         {9,6,1,5,3,7,2,8,4},{2,8,7,4,1,9,6,3,5},{3,4,5,2,8,6,1,7,9}};

    printGrid(testArr);

    printResult(isValid(testArr));



    puts("Given Sudoku grid is valid\n"
         "Enter row 1 of your Sudoku grid\n"
         "Use Space/Tab/Return key to enter the next values\n"
         "and press 'Return' after entering nine integers\n"
         "Remember, to make a valid row of Sudoku grid,\n"
         "all integers should be distinct and range from 1 to 9");

    col1= input();
    col2= input();


    //Assign user input
    for(int q=1;q<10;q++){
        arr[0][q-1] = col1[q];
        arr[1][q-1] = col2[q];
    }


//Generate remaining rows

    srand(time(0));

    for(i = 2; i < 9; i++)

        for(j = 0; j < 9; j++)

        {

            arr[i][j] = 1 + rand() % 9;


            for(k = 0; k < j; k++)

                if(arr[i][j] == arr[i][k])

                    j--;

        }

    printGrid(arr);
    printResult(isValid(arr));


}

