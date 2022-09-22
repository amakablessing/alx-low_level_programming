#include "main.h"

/**
 * _strcat -concatenates the string pointed to by @scr to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @scr: String to be concatenated upon
 *
 * Return: returns the pointer to @dest
 */

char *_strcat(char *dest, char *scr)
{

	int index = 0, dest_len + 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; scr[index];index++)
		dest[dest_len++] = scr[index];

	return (dest);
}
