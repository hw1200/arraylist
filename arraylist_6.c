#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max 30

typedef struct sum
{
	int data[max];
	int length;
}stu;

void del_same(stu* L)
{
	int i, j, n = 0;
	for (i = 0, j = 1; j < (*L).length; j++)
	{
		if ((*L).data[i] != (*L).data[j])
		{
			(*L).data[++i] = (*L).data[j];
		}
	}
	(L)->length = i + 1;
}


int main()
{
	stu L = { {1,2,2,2,2,3,3,3,4,4,5},11 };
	int i;
	for (i = 0; i < L.length; i++)
	{
		printf("%2d", L.data[i]);
	}
	printf("\n");

	del_same(&L);
	for (i = 0; i < L.length; i++)
	{
		printf("%2d", L.data[i]);
	}

	system("pause");
	return 0;
}