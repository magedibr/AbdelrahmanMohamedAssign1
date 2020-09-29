#include "Assign1.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 100


int arr[11];
char buffer[BUFFER_SIZE];
//maybe turn the return type into an int array!!!!?????
int input() {

    int ctr =0;
    while(ctr != 9){
        fgets(buffer, sizeof(buffer), stdin);
        ctr = sscanf(buffer, "%d%d%d%d%d%d%d%d%d", arr+1,arr+2,arr+3,arr+4,arr+5,arr+6,arr+7,arr+8,arr+9);
        if(ctr != 9){
            printf("Please try again,must be 9 integers: \n");
            ctr =0;
            continue;
        }

    }
    //Recursion is used for loop till user input is fully validated
    if(dup(arr)==1 || range(arr)==1) return input();
    else return 1;


}

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
                        "Enter nine distinct integers, No duplicates please!\n"
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
                    "One of more entries are outside the range 1 to 9!\n"
                    "Use Space/Tab/Return key to enter the next values\n"
                    "and press ‘Return’ after entering nine integers.\n"
                    "Remember, to make a valid row of Sudoku grid,\n"
                    "all integers should be distinct and range from 1 to 9\n");
            return rngFlag=1;

        }
    }


}