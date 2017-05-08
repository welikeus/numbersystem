#include <stdio.h>
#include "functionsystem.h"


int main()
{
	char insystem[100];
	int innum, x;
	x =0;
	printf("Enter value: ");
	fgets(insystem, 98, stdin);
	printf("Enter the number system: ");
        scanf("%d", &innum);
	x = todecimal(insystem, innum);
	printf("%d", x);
}
