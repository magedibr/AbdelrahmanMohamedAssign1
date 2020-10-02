#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Assign1.h"
#include "suduko.h"
#define BUFFER_SIZE 100






int main() {
int i,j,k,l;
l=0;
int arr[9][9];

int* col1 ;
int* col2;

col1= input();
col2= input();



    for(int q=1;q<10;q++){
     //   arr[0][q]=*col1+q;
      //  printf(" Col 1 %d: ", col1[q]);
        arr[0][q-1] = col1[q];
        arr[1][q-1] = col2[q];
     //   printf("%d",*col2+q);
        //arr[1][q]=*(col2+q);

        //printf("%d", *(col2));
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

static int arr[9];
static int arr2[9];
int track=0;
char buffer[BUFFER_SIZE];


int* input() {
    ++track;
    printf("Track = %d ",track);
    if(track>1) {
        int ctr = 0;
        while (ctr != 9) {
            fgets(buffer, sizeof(buffer), stdin);
            ctr = sscanf(buffer, "%d%d%d%d%d%d%d%d%d", arr2 + 1, arr2 + 2, arr2 + 3, arr2 + 4, arr2 + 5, arr2 + 6, arr2 + 7,
                         arr2 + 8, arr2 + 9);
            if (ctr != 9) {
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
        if (dup(arr2) == 1 || range(arr2) == 1) return input();printf("%p\n",arr);
        return arr2;

    } else {

        int ctr = 0;
        while (ctr != 9) {
            fgets(buffer, sizeof(buffer), stdin);
            ctr = sscanf(buffer, "%d%d%d%d%d%d%d%d%d", arr + 1, arr + 2, arr + 3, arr + 4, arr + 5, arr + 6, arr + 7,
                         arr + 8, arr + 9);
            if (ctr != 9) {
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