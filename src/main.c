#include <fsys.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char data[100], dataout[100];
    int sys, outsys;
    printf("Enter the number system: ");
    scanf("%d", &sys);
    if(sys < 1) {
        printf("Incorrect number system! ");
    }
    printf("Enter value: ");
    fgets(data, 100, stdin);
    if((sys < 10) && (data[i] - '0' >= sys)) {
        printf("Incorrect value! ");
        return 0;
    }
    if((sys > 10) && (data[i] - '7' >= sys)) {
        printf("Incorrect value");
        return 0;
    }
    printf("Enter the output number  system: ");
    scanf("%d", outsys);
    bonds(data, dataout, sys, outsys)
    }
    return 0;
}
