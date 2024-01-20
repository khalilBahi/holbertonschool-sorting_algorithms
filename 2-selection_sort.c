#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, cap, k;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		cap = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[cap])
			{
				cap = j;
				continue;
			}
		}
		if (cap != i)
		{
			temp = array[i];
			array[i] = array[cap];
			array[cap] = temp;
			for (k = 0; k < size && array; k++)
			{
				if (k != size && k != 0)
					printf(", ");
				printf("%d", array[k]);
			}
			printf("\n");
		}
	}
}
