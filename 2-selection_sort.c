#include "sort.h"

/**
  * selection_sort - selection sort
  * @array: pointer
  * @size: size array
  */

void selection_sort(int *array, size_t size)
{
	size_t Rec1, Rec2, Aux, Min;

	if (!array || size < 2)
		return;

	for (Rec1 = 0; Rec1 < size - 1; Rec1++)
	{
		Min = Rec1;
		for (Rec2 = Rec1 + 1; Rec2 < size; Rec2++)
		{
			if (array[Min] > array[Rec2])
				Min = Rec2;
		}
		if (Min != Rec1)
		{
			Aux = array[Rec1];
			array[Rec1] = array[Min];
			array[Min] = Aux;
			print_array(array, size);
		}
	}
}
