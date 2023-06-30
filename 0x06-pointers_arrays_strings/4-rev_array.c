#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int tmp, first, end;

	first = 0;
	end = n - 1;
	while (first < end)
	{
		tmp = *(a + first);
		*(a + first) = *(a + end);
		*(a + end) = tmp;
		begin++;
		end--;
	}
}
