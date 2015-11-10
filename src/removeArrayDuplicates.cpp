/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *Arr, int len)
{
	int i, j, k;
	if (Arr == NULL || len < 0)
		return NULL;
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len;)
		{
			if (Arr[i] == Arr[j])    // Compares each element with all the remaining elements on right side and if any duplicate found then delete by moving all other values to one position ahead.
			{
				for (k = j; k < len; k++)
				{
					Arr[k] = Arr[k + 1];
				}
				len--;    // decrease the length of array if the element is deleted
			}
			else
			{
				j++;  // the new element shifted to left after deletion of duplicate may be duplicate so increment only if they are not equal
			}
		}
	}
}