//
// Created by Abdelrahman Mohamed on 2020-09-22.
//

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
   puts("yep");
    if (dup(arr) == 1) input();else return 0;
    if (range(arr) == 1) input();else return 0;



}

int dup(int arr[]){
    int i;
    int j;
    int flag=0;

    for(i = 0; i < 10; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(arr[i] == arr[j])
            {
                flag=1;
                printf("enter 9 distinct integers please, no duplicates\n");
            }
        }
    }
    return flag;

}



int range(int arr[]){
    int max = 9;
    int min = 1;
    int flag=0;

    for(int i = 0; i < 10; i++)
    {
        if(!(arr[i]>=min && arr[i]<=max)) {
            flag=1;
        }
    }
    return flag;

}

