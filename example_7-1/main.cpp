// example_7-1

#include <stdio.h>

int main()
{
	int c;

	printf("I'm waiting for a character: ");
	c = getchar();
	printf("I waited for the '%c' character. \n", c);
	return(0);
}

// tested
