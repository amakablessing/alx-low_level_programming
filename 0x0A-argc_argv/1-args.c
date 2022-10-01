#include <stdio.h>
#include "main.h"

/**
 * main - prints the program's number of param
 *
 * @argc: number of parameters
 *
 * @argv: array of parameters
 *
 * Return: returns (0)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n",argc - 1);
	return (0);
}
