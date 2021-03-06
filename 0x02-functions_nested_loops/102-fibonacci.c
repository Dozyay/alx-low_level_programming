#include <stdio.h>

/**
 * main - first 50 fibonacci
 * starting with 1 and 2, followed by a new line.
 *
 * Return: void
 */
int main(void)
{
	int i;

	long t1 = 1;

	long t2 = 2;

	long nextTerm = t1 + t2;

	printf("%ld, %ld, ", t1, t2);
	for (i = 3; i < 51; i++)
	{
		if (i == 50)
			printf("%ld", nextTerm);
		else
		{
			printf("%ld, ", nextTerm);
			t1 = t2;
			t2 = nextTerm;
			nextTerm = t1 + t2;
		}
	}
	putchar('\n');
	return (0);
}
