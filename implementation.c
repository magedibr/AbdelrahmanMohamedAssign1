#include "Assign1.h"
#include <stdio.h>
#define SIZE 9


//static array so that it is not destroyed after function is called
static int arr[9];
static int arr2[9];

int track=0;
char buffer[100];


//input function to validate user entry and return an array type to be used as a pointer later.
int* input() {
    ++track;
    if(track>1) {
        int ctr = 0;
        while (ctr != SIZE) {
            fgets(buffer, sizeof(buffer), stdin);
            ctr = sscanf(buffer, "%d%d%d%d%d%d%d%d%d", arr2 + 1, arr2 + 2, arr2 + 3, arr2 + 4, arr2 + 5, arr2 + 6, arr2 + 7,
                         arr2 + 8, arr2 + 9);
            if (ctr != 9) {
                puts(
                        "\nEnter exactly INTEGERS separated by Space/Tab followed by Enter key to end!\n"
                        "Use Space/Tab/Return key to enter the next values\n"
                        "and press 'Return' after entering nine integers.\n"
                        "Remember, to make a valid row of Sudoku gird,\n"
                        "all integers should be distinct and range from 1 to 9\n");
                ctr = 0;
                continue;
            }
        }
        //Recursion is used for loop till user input is fully validated
        if (dup(arr2) == 1 || range(arr2) == 1) return input();
        return arr2;

    } else {

        int ctr = 0;
        while (ctr != SIZE) {
            fgets(buffer, sizeof(buffer), stdin);
            ctr = sscanf(buffer, "%d%d%d%d%d%d%d%d%d", arr + 1, arr + 2, arr + 3, arr + 4, arr + 5, arr + 6, arr + 7,
                         arr + 8, arr + 9);
            if (ctr != SIZE) {
                puts(
                        "\nEnter exactly INTIGERS separated by Space/Tab followed by Enter key to end!\n"
                        "Use Space/Tab/Return key to enter the next values\n"
                        "and press 'Return' after entering nine integers.\n"
                        "Remember, to make a valid row of Sudoku gird,\n"
                        "all integers should be distinct and range from 1 to 9\n");
                ctr = 0;
                continue;
            }
        }
        //Recursion is used for loop till user input is fully validated
        if (dup(arr) == 1 || range(arr) == 1) return input();
        return arr;

    }

}


//Check for Duplicate values
int dup(int arr[]){
    int i;
    int j;


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
                return 1;

            }
        }
    }


}


//Check the range and type of input
int range(int arr[]){
    int max = 9;
    int min = 1;


    for(int i = 1; i < 10; i++)
    {
        if(!(arr[i]>=min) || !(arr[i]<=max)) {
            puts(
                    "\nOne of more entries are outside the range 1 to 9!\n"
                    "Use Space/Tab/Return key to enter the next values\n"
                    "and press ‘Return’ after entering nine integers.\n"
                    "Remember, to make a valid row of Sudoku grid,\n"
                    "all integers should be distinct and range from 1 to 9\n");
            return 1;

        }
    }
}


//Print Grids
void printGrid(int arrs[9][9])

{
    int i, j;
    printf("\n---------Sudoku Grid---------");
    for(i = 0; i < 9; i++)
    {
        printf("\n");
        for(j = 0; j < 9; j++)
            printf(" %d", arrs[i][j]);
    }
    puts("\n");

}








