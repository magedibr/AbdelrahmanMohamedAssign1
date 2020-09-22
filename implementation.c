//
// Created by Abdelrahman Mohamed on 2020-09-22.
//

#include "Assign1.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

int input(){

    int inp1[SIZE];
    int i = 0;
    int flag =0;

    while(i != SIZE){

            i++;
            scanf("%d", (inp1+i));
            printf("%d ", i);
            //printf("%d",inp1[i]);
            flag = 1;

            if(i > SIZE){                                   // maybe take out the print statment an only set the flag value
                printf("Too many digits please try again\n");
                flag=0;
                break;
        }
    }
    printf(" flag %d \n",flag);
    return flag;

}


