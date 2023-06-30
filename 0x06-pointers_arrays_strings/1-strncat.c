#include "main.h"
/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare index to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int first = 0, dest_length = 0;

	while (dest[first++])
		dest_length++;

	for (first = 0; src[first] && first < n; first++)
		dest[dest_length++] = src[first];

	return (dest);

}
