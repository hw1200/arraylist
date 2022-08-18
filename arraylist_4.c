#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max 30

typedef struct sum
{
	int data[max];
	int length;
}stu;

void del_s_t(stu* L, int* s, int* t)
{
	int i,j;
	for (i = 0; i < (*L).length&&(*L).data[i]<=(*s); i++)
	{
		if (i >= (*L).length)
		{
			return false;
		}
	}
	for (j = i; j < (*L).length && (*L).data[j] < (*t); j++)
	{
		if (j >= (*L).length)
		{
			return false;
		}
	}
	for (i,j; j < (*L).length;i++,j++ )
	{
		(*L).data[i] = (*L).data[j];	
	}
	(*L).length = i;
}

int main()
{
	stu L = { {1,2,3,3,3,6,7,7,8,9},10 };

	for (int i = 0; i < L.length; i++)
	{
		printf("%2d", L.data[i]);
	}
	printf("\n");

	int s=0, t=0;
	printf("请输入s的值:");
	scanf("%d", &s);
	printf("请输入t的值:");
	scanf("%d", &t);
	if (s > t || s == t)
	{
		return false;
	}
	del_s_t(&L, &s, &t);
	for (int i = 0; i < L.length; i++)
	{
		printf("%2d", L.data[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}