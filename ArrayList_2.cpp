#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 10

//void reverse(sqlist L);

typedef struct sum
{
	int data[max];
	int length;
}sqlist,*p;//p µÈ¼ÛÓÚ struct sum

void reverse(sqlist &L)
{
	//sqlist L;
	int temp;
	for (int i = 0; i <L.length/2; i++)
	{
		temp = L.data[i];
		L.data[i] = L.data[L.length -i-1];
		L.data[L.length -i-1] = temp;
	}

}

int main()
{
	sqlist L = { {1,2,3,5,6,7,8,9},8 };
	for (int i = 0; i < L.length; i++)
	{
		printf("%2d", L.data[i]);
	}
	printf("\n");
	reverse(L);

	for (int j = 0; j < L.length; j++)
	{
		printf("%2d", L.data[j]);
	}
	printf("\n");

	system("pause");
	return 0;
}