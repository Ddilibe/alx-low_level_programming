#include <stdio.h>

int *replace(int *a[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			puts(*((a + i) + j));
		}
		printf("\n");
	}
}

int main(void) 
{
	int array[8][8] = {
		{1,2,3,4,5,6,7,8},
		{2,3,4,5,6,7,8,1},
		{3,4,5,6,7,8,1,2},
		{4,5,6,7,8,1,2,3},
		{5,6,7,8,1,2,3,4},
		{6,7,8,1,2,3,4,5},
		{7,8,1,2,3,3,4,5},
		{8,1,2,3,4,5,6,7}
	};
	int *y;

	y = replace(array);
	return 0;
}

