#include <stdio.h>

/**
 *  main - Enty point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char achar;
	int aint;
	long alng;
	long long alnglng;
	float afloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(achar));
	printf("Size of an int: %lu byte(s)\n", sizeof(aint));
	printf("Size of a long int: %lu byte(s)\n", sizeof(alng));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alnglng));
	printf("Size of a float: %lu byte(s)\n", sizeof(afloat));

	return (0);

}
