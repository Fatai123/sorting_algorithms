#include "sort.h"
/**
 * swap_int- a function who swap two int
 * @a: first int
 * @b: second int
 */
static void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *b;
	*b = *a;
	*a = temp;
}

/**
 * bubble_sort- a function that sorts an array of integers
 * in ascending order
 * @array: array to sort
 * @size: the length of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (*(array + j) > *(array + j + 1))
			{
				swap_int(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
