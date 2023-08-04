#include <stdio.h>
#include "main.h"

/**
 * main - prints name of the program
 * @argc: number of argum.
 * @argv: array of argum.
 *
 * Return:0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
