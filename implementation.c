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
    if(dup(arr);

}




int dup(int arr[]){

    for (int i = 0; i<11;i++){

        if (arr[i]==arr[i+1]){
            return 0;
        }
    }
}


