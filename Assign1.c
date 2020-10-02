#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Assign1.h"
#include "suduko.h"







int main() {
int i,j,k,l;


    int arr[9][9];

int *col1 = input();
int* col2 = input();


    for(int q=0;q<9;q++){
        arr[0][q]=*col1+q;
       printf("%d", *col1);
        arr[1][q]=*(col2+q);
        printf("%d", *(col2));
        //col1++;
    }







//Generate remaining rows

    srand(time(0));

    for(i = 2; i < 9; i++)

        for(j = 0; j < 9; j++)

        {
// put arr i as 1 arr[1]
            arr[i][j] = 1 + rand() % 9;

//Repeat the element if it is already present in that row

            for(k = 0; k < j; k++)

                if(arr[i][j] == arr[i][k])

                    j--;

        }

printFinal(arr);









}


























/*


    puts("Given Sudoku grid is valid\n"
         "Enter row 1 of your Sudoku grid\n"
         "Use Space/Tab/Return key to enter the next values\n"
         "and press 'Return' after entering nine integers\n"
         "Remember, to make a valid row of Sudoku grid,\n"
         "all integers should be distinct and range from 1 to 9");
    int* pt = input();




   while(l<9){
       l++;
       printf("%d",*pt+l);

   }*/