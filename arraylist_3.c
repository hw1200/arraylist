#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max 50

typedef struct sum
{
	int data[max];
	int length;
}stu;

void del_x(stu* L, int* x)
{
	int n = 0;
	int i = 0;
	while( i < (*L).length)
	{
		if ((*x)==(*L).data[i])
		{
			n++;
		}
		else
		{
			(*L).data[i - n] = (*L).data[i];
			
		}
		i++;	
	}
	(*L).length = (*L).length - n;
}

int main()
{
	stu L = { {3,6,7,8,3,4,3,6,3,2},10 };
	for (int i = 0; i < L.length; i++)
	{
		printf("%2d", L.data[i]);
	}
	printf("\n");

	int x;
	printf("ÇëÊäÈëxµÄÖµ:");
	while (scanf("%d", &x) != EOF)
	{
		del_x(&L, &x);
	}


	for (int j = 0; j < L.length; j++)
	{
		printf("%2d", L.data[j]);
	}
	printf("\n");
	


	system("pause");
	return 0;
}