#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp function
 * does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, val;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			val = cmp(array[i]);

			if (val != 0)
				return (i);
		}
	}
	return (-1);
}
