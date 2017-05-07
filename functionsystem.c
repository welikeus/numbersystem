#include <stdio.h>
#include <stdlib.h>
#include <functionsystem.h>

int fromdecimal(char in[], int insystem, char out[], int outsystem)
{
    if (insystem == 10) {
        if (outsystem >= 2 && outsystem <= 9) {
            int value = atoi(in), i = 0, j = 0;
            char save[100];
            do {
                save[i++] = (value % outsystem) + '0';
                value /= outsystem;
            } while (value != 0);
            save[i--] = '\0';
            while (i >= 0) {
                out[j++] = save[i--];
            } 
            out[j] = '\0';
            return 0;
        }
    }
   return -1;
}