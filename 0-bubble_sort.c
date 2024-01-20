#include "sort.h"
/**
 * swap -sawp a and b
 * @a: intiger
 * @b: intiger
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * bubble_sort - function that sorts a doubly linked list of integers
 * @array: array t sort it
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int cap;

	if (!array || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		cap = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				cap = 1;
				print_array(array, size);
			}
		}
		if (cap == 0)
		{
			return;
		}
	}
}
