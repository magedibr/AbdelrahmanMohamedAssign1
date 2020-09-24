//
// Created by Abdelrahman Mohamed on 2020-09-22.
//

#include "Assign1.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 9
int i = 0;
int flag =0;

int input() {

    int inp1[SIZE];
    char ter = "";

    while (1) {

        i++;
        scanf("%c", &ter);               //printf("%d ", i);
        printf(" %d", i);

        if (ter == 0x0A)
            break;

    }

    if (i/2 != 9) flag = 1;
    return flag;
    printf("%d",flag);
}