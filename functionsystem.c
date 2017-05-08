#include <stdio.h>
#include <math.h>
#include <string.h>
#include "functionsystem.h"

int todecimal(char insystem[], int innum)
{
	int size, sum;
	size = strlen(insystem)-1;
	sum = 0;
	for(int i = 0; i < size; ++i)
	{
		if(insystem[i] <= '9')
			sum += (insystem[i] - '0')*pow(innum, size-i-1);
		else
			sum += (insystem[i] - '7')*pow(innum, size-i-1);
	}
	return sum;
}
