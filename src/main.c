<<<<<<< HEAD
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
        printf("%s\n", dataout);
    }

    char insystem[100];
    int innum, x;
    x =0;
    printf("Enter value: ");
    fgets(insystem, 98, stdin);
    printf("Enter the number system: ");
    scanf("%d", &innum);
    x = todecimal(insystem, innum);
    printf("%d", x);
    return 0;
}