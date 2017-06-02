#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <fsys.h>

int main(int argc, char *argv[])
{
    char systemch[2], outsystemch[2], data[100], dataout[100];
    int sys, outsys, save, i;
    do {
        save = 1;
        printf("Enter the number system: ");
        scanf("%s", systemch);
        for (i = 0; i < 2; i++) {
            if (!isdigit(systemch[i])) {
                printf("Incorrect number system.\nEnter the number and not the letter.\nEnter system from 2 to 16.\n");
                save = 0;
                break;
            }
        }
        if (save == 1) {
            sys = atoi(systemch);
            if (sys < 2 || sys > 16) {
                printf("Incorrect number system.\nEnter system from 2 to 16.\n");
                save = 0;
            }
        }
    } while (save == 0);

    if (argc > 1) {
        strcpy(data, argv[1]);
    }
    do {
        save = 1;
        if (save == 0 || argc < 2) {
            printf("Enter value: ");
            scanf("%s", data);
        }
        if (sys >= 2 && sys <= 10) {
            for (i = 0; i < strlen(data); i++) {
                if ((data[i] - '0') >= sys) {
                    printf("Incorrect value.\n");
                    save = 0;
                    break;
                }
            }
        } else {
            for (i = 0; i < strlen(data); i++) {
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
    } while (save == 0);

    do {
        save = 1;
        printf("Enter the output number system: ");
        scanf("%s", outsystemch);
        for (i = 0; i < 2; i++) {
            if (!isdigit(outsystemch[i])) {
                printf("Incorrect number system.\nEnter the number and not the letter.\nEnter system from 2 to 16.\n");
                save = 0;
                break;
            }
        }
        if (save == 1) {
            outsys = atoi(outsystemch);
            if (outsys < 2 || outsys > 16) {
                printf("Incorrect number system.\nEnter system from 2 to 16.\n");
                save = 0;
            }
        }
    } while (save == 0);

    if (bonds(data, dataout, sys, outsys) == -1) {
        printf("Fatal error.\n");
        return 0;
    }
    printf("Result: %s", dataout);
    getchar();
    getchar();
    return 0;
}