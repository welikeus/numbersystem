#include <stdio.h>
#include "func.h"

int lowtohight(char insystem, int innum);

int main()
{
	char insystem[100];
	int innum;
	scanf("Input SS of Number: %d", &innum);
	printf("Input Number: ");
	fgets(insystem, 98, stdin);
	//printf("%c", insystem);
	printf("%d", lowtohight(insystem, innum));
	
}
