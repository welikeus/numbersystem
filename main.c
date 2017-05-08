#include <stdio.h>
#include <string.h>
#include <functionsystem.h>

int main()
{
    char data[100], dataout[100];
    fgets(data, 100, stdin);
    int sys;
    scanf("%d", &sys);
    if (fromdecemal(data, dataout, sys) == 0) {
        printf("%s", dataout);
    }
    return 0;
}