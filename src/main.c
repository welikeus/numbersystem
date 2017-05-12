#include <fsys.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char data[100], dataout[100];
    int sys, outsys;
    int save;
    do {
        save = 1;
        printf("Enter the number system: ");
        scanf("%d\n", &sys);
        if (sys < 2 || sys > 16) {
            printf("Incorrect number system.\n");
            save = 0;
        }
    } while (save == 0);

    do {
        save = 1;
        printf("Enter value: ");
        fgets(data, 100, stdin);
        if (sys >= 2 && sys <= 10) {
            for (int i = 0; i < strlen(data); i++) {
                if ((data[i] - '0') >= sys) {
                    printf("Incorrect value.\n");
                    save = 0;
                    break;
                }
            }
        } else {
            for (int i = 0; i < strlen(data); i++) {
                if ((data[i] - '7') >= sys) {
                    printf("Incorrect value.\n");
                    save = 0;
                    break;
                }
            }
        }
    } while (save == 0);

    do {
        save = 1;
        printf("Enter the output number system: ");
        scanf("%d", &outsys);
        if (outsys < 2 || outsys > 16) {
            printf("Incorrect out system.\n");
            save = 0;
        }
    } while (save == 0);
    bonds(data, dataout, sys, outsys);
    printf("%s", dataout);
    return 0;
}