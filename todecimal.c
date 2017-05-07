#include <stdio.h>
#include <math.h>
#include <string.h>

int lowtohight(char insystem, int innum)
{
	//char *insystem;
	int size, sum;
	size = strlen(insystem);
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
