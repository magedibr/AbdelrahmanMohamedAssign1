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

    while(i!=SIZE+1){
        i++;
        if(i<SIZE) {

            scanf("%d", (inp1 + i));               //printf("%d ", i);
          //  printf("%d",inp1[5]);

        }else if(i > SIZE -1){                        // maybe take out the print statment an only set the flag value
            flag=1;
           break;
        }
    }
/*
 * see if flipping the if statments so that
 * larger than is on the top and i++ is in the second if statment
 */
    printf(" flag %d \n",inp1[i]);
    return flag;

}

