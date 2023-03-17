#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
 * main - Compare n values and prints the results.
 *
 * Return: 0 Always success.
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n%10 > 5)
	{
		printf("Last digit of %d is greater than 5\n", n);
	}
	else if(n%10 == 0)
	{
		printf("Last digit of %d is 0\n");
	}
	else if(n%10 < 6 && != 0)
	{
		printf("Last digit of %d is less than 6 and not 0\n");
	}
	return (0);
}
