#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <fsys.h>

int bonds(char *in, char *out, int insystem, int outsystem)
{
    if (outsystem >= 2 && outsystem <= 16 && insystem >= 2 && insystem <= 16) {
        int intin;
        intin = todecimal(in, insystem);
        fromdecimal(intin, out, outsystem);
        return 0;
    }
    return -1;
}

int fromdecimal(int in, char *out, int outsystem)
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
        } while (in != 0);
        save[i--] = '\0';
        while (i >= 0) {
            out[j++] = save[i--];
        } 
        out[j] = '\0';
        return 0;
    }
    return -1;
}

int todecimal(char *in, int insystem)
{
    if (insystem >= 2 && insystem <= 16) {
        int size, sum;
        size = strlen(in)-1;
        sum = 0;
        for (int i = 0; i < size; ++i) {
            if (in[i] <= '9') {
                sum += (in[i] - '0') * pow(insystem, size-i-1);
            } else {
                sum += (in[i] - '7') * pow(insystem, size-i-1);
            }
        }
        return sum;
    }
    return -1;
}