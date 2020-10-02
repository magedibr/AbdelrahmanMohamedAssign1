#include "Assign1.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//static array so that it is not destroyed after function is called


int dup(int arr[]){
    int i;
    int j;
    int dupFlag=0;

    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(arr[i] == arr[j]){
                puts(
                        "\nEnter nine distinct integers, No duplicates please!\n"
                        "Use Space/Tab/Return key to enter the next values\n"
                        "and press 'Return' after entering nine integers.\n"
                        "Remember, to make a valid row of Sudoku gird,\n"
                        "all integers should be distinct and range from 1 to 9\n");
              return  dupFlag=1;

            }
        }
    }


}



int range(int arr[]){
    int max = 9;
    int min = 1;
    int rngFlag=0;

    for(int i = 1; i < 10; i++)
    {
        if(!(arr[i]>=min) || !(arr[i]<=max)) {
            puts(
                    "\nOne of more entries are outside the range 1 to 9!\n"
                    "Use Space/Tab/Return key to enter the next values\n"
                    "and press ‘Return’ after entering nine integers.\n"
                    "Remember, to make a valid row of Sudoku grid,\n"
                    "all integers should be distinct and range from 1 to 9\n");
            return rngFlag=1;

        }
    }
}

int *arrRet( int* arrs){
        return arrs;
}

void printFinal(int arrs[9][9])

{

    int i, j;

    printf("\n-------------Sudoku Grid-------------");

    for(i = 0; i < 9; i++)

    {

        printf("\n");

        for(j = 0; j < 9; j++)

            printf(" %d", arrs[i][j]);

    }

    printf("\n\n");

}








