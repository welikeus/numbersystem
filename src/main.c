#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <fsys.h>

#define SIZEM 100

int main(int argc, char *argv[])
{
    char systemch[4], outsystemch[4], data[SIZEM], dataout[SIZEM];
    int sys, outsys, save, i;
    do {
        save = 1;
        printf("Enter the number system: ");
        scanf("%s", systemch);
        for (i = 0; i < strlen(systemch); i++) {
            if (!isdigit(systemch[i])) {
                printf("\n|Incorrect number system!\n|Enter the number and not the letter.\n|Enter system from 2 to 16.\n\n");
                save = 0;
                break;
            }
        }
        if (save == 1) {
            sys = atoi(systemch);
            if (sys < 2 || sys > 16) {
                printf("\n|Incorrect number system!\n|Enter system from 2 to 16.\n\n");
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
                    printf("\n|Incorrect value!\n\n");
                    save = 0;
                    break;
                }
            }
        } else {
            for (i = 0; i < strlen(data); i++) {
                if ((data[i] >= 'A' && data[i] <= 'F') || (data[i] >= 'a' && data[i] <= 'f') || isdigit(data[i])) {
                    if (isalpha(data[i]) && islower(data[i])) {
                        data[i] = toupper(data[i]);
                    }
                    if ((data[i] - '7') >= sys) {
                        printf("\n|Incorrect value!\n\n");
                        save = 0;
                        break;
                    }
                } else {
                    printf("\n|Incorrect value.\n\n");
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
        for (i = 0; i < strlen(outsystemch); i++) {
            if (!isdigit(outsystemch[i])) {
                printf("\n|Incorrect number system!\n|Enter the number and not the letter.\n|Enter system from 2 to 16.\n\n");
                save = 0;
                break;
            }
        }
        if (save == 1) {
            outsys = atoi(outsystemch);
            if (outsys < 2 || outsys > 16) {
                printf("\n|Incorrect number system!\n|Enter system from 2 to 16.\n\n");
                save = 0;
            }
        }
    } while (save == 0);

    if (bonds(data, dataout, sys, outsys) == -1) {
        printf("\n|Fatal error.\n");
        return 0;
    }
    printf("Result: %s", dataout);
    getchar();
    getchar();
    return 0;
}