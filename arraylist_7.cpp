#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max 30

typedef struct sum
{
	int data[max];
	int length;
}stu;

void merge(stu* L_1, stu* L_2,stu* L)
{
	int i = 0, j = 0, k = 0;
	while (i < (*L_1).length && j < (*L_2).length)
	{
		if ((*L_1).data[i] <= (*L_2).data[j])
		{
			(*L).data[k++] = (*L_1).data[i++];
		}
		else
		{
			(*L).data[k++] = (*L_2).data[j++];
		}
	}
	while (i < (*L_1).length)
	{
		(*L).data[k++] = (*L_1).data[i++];
	}
	while (j < (*L_2).length)
	{
		(*L).data[k++] = (*L_2).data[j++];
	}
	(*L).length = k;
}

int main()
{
	stu L_1 = { {1,3,5,7,9},5 };
	stu L_2 = { {2,4,6,8},4 };
	int i, j;
	for (i = 0; i < L_1.length; i++)
	{
		printf("%2d", L_1.data[i]);
	}
	for (j = 0; j < L_2.length; j++)
	{
		printf("%2d", L_2.data[j]);
	}
	printf("\n");

	stu L;
	merge(&L_1,&L_2,&L);

	for (int k = 0; k < L.length; k++)
	{
		printf("%2d", L.data[k]);
	}


	system("pause");
	return 0;
}