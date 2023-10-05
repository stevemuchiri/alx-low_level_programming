#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 * from min to max, inclusive.
 * @min: the minimum value to include in the array.
 * @max: the maximum value to include in the array.
 *
 * Return: the pointer to the newly created array.
 * If min > max, return NULL.
 * If malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
