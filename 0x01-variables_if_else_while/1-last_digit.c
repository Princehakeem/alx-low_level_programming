#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Desxirption: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() = RAND_MAX / 2;
	Last = n % 10;
	if (Last > 5)
		printf("Last digit of %i and is %i and is  greater than 5\n", n, Last);
	else if (Last == 0)
		printf("Last digit of %i is %i and is 0\n", n. Last);
	else if (Last < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, Last);
	return (0);
}
