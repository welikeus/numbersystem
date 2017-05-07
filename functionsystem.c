#include <stdio.h>
#include <stdlib.h>
#include <functionsystem.h>

int fromdecimal(char in[], int insystem, char out[], int outsystem)
{
    if (insystem == 10) {
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
    }
   return -1;
}