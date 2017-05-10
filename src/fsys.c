#include <fsys.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int bonds(char in[], char out[], int innum, int outsystem)
{
    int intin;
    intin = todecimal(insystem, innum);
    fromdecimal(intin, out, outsystem);
}

int fromdecimal(int in, char out[], int outsystem)
{
    if (outsystem >= 2 && outsystem <= 16) {
        int i = 0, j = 0;
        char save[100];
        do {
            if (((in % outsystem) + '0') < '9') {
                save[i++] = (in % outsystem) + '0';
            } else {
                save[i++] = (in % outsystem) + '7';
            }
            in /= outsystem;
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
