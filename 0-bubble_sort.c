#include "sort.h"

/**
 * bubble_sort - bubble sort
 *
 * @array: array
 * @size: elements
 */

void bubble_sort(int *array, size_t size)
{

	size_t Rec1, Rec2;
	int Aux;

	if (array == NULL || size < 2)
		return;

	for (Rec1 = 0; Rec1 < size - 1; Rec1++)
	{
		for (Rec2 = 0; Rec2 < size - 1; Rec2++)
		{
			if (array[Rec2] > array[Rec2 + 1])
			{
				Aux = array[Rec2 + 1];
				array[Rec2 + 1] = array[Rec2];
				array[Rec2] = Aux;
				print_array(array, size);
			}
		}
	}
}
