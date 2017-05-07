#include "functionsystem.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char data[100], dataout[100];
    fgets(data, 100, stdin);
    int sys;
    scanf("%d", &sys);
    if (fromdecemal(data, dataout, sys) == 0) {
        printf("%s", dataout);
    }

    char insystem[100];
    int innum;
    scanf("Input SS of Number: %d", &innum);
    printf("Input Number: ");
    fgets(insystem, 98, stdin);
    //printf("%c", insystem);
    printf("%d", lowtohight(insystem, innum));
    return 0;
}