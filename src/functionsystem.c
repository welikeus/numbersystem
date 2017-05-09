#include "functionsystem.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int fromdecimal(char in[], char out[], int outsystem)
{
    if (outsystem >= 2 && outsystem <= 16) {
        int value = atoi(in), i = 0, j = 0;
        char save[100];
        do {
            if (((value % outsystem) + '0') < '9') {
                save[i++] = (value % outsystem) + '0';
            } else {
                save[i++] = (value % outsystem) + '7';
            }
            value /= outsystem;
        } while (value != 0);
        save[i--] = '\0';
        while (i >= 0) {
            out[j++] = save[i--];
        } 
        out[j] = '\0';
        return 0;
    }
    return -1;
}

int todecimal(char insystem[], int innum)
{
    int size, sum;
    size = strlen(insystem)-1;
    sum = 0;
    for (int i = 0; i < size; ++i) {
        if (insystem[i] <= '9') {
            sum += (insystem[i] - '0') * pow(innum, size-i-1);
        } else {
        sum += (insystem[i] - '7') * pow(innum, size-i-1);
        }
    }
    return sum;
}