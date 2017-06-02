#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <fsys.h>

int main(int agrc, char *argv[])
{
    char data[100], dataout[100];
    int sys, outsys, save;
    do {
        save = 1;
        printf("Enter the number system: ");
        scanf("%d\n", &sys);
        if (sys < 2 || sys > 16) {
            printf("Incorrect number system.\nInput system from 2 to 16.\n");
            save = 0;
        }
    } while (save == 0);

    strcpy(data, argv[1]);
    do {
        save = 1;
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
                if (isalpha(data[i]) && islower(data[i])) {
                    data[i] = toupper(data[i]);
                }
                if ((data[i] - '7') >= sys) {
                    printf("Incorrect value.\n");
                    save = 0;
                    break;
                }
            }
        }
        if (save == 0) {
            printf("Enter value: ");
            fgets(data, 100, stdin);
        }
    } while (save == 0);

    do {
        save = 1;
        printf("Enter the output number system: ");
        scanf("%d", &outsys);
        if (outsys < 2 || outsys > 16) {
            printf("Incorrect out system.\nInput system from 2 to 16.\n");
            save = 0;
        }
    } while (save == 0);

    if (bonds(data, dataout, sys, outsys) == -1) {
        printf("Fatal error.\n");
        return 0;
    }
    printf("%s", dataout);
    getchar();
    getchar();
    return 0;
}