/*从顺序表中删除具有最小值的元素，并由函数返回被删元素的值，
空出的位置由最后一个元素填补，若顺序表为空则显示出错信息并退出运行*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxSize 10           //定义线性表的最大长度 

typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];        //顺序表的元素 
	int length;
}SqList;                     //顺序表的类型定义

int main() {
	SqList L;//定义一个线性表
	L.length = 0;
	memset(&(L.data), 0, sizeof(L.data));//初始化
	printf("请输入数组的元素值:");
	for (int i = 0; i < MaxSize; i++)
	{
		scanf("%d", &L.data[i]);
		L.length++;
	}	

	if (L.length == 0)
		return false;             //表空，中止操作返回

	int value = L.data[0];
	int pos = 0;              //假定0号元素的值最小
	for (int i = 1; i < L.length; i++)  //循环，寻找具有最小值的元素 
	{
		if (L.data[i] < value) 
		{
			value = L.data[i];       //让value始终记忆当前具有最小值的元素 
			pos = i;
		}
	}
	L.data[pos] = L.data[L.length-1];//空出的位置由最后一个元素填补 

	int min = value;//此时value即为最小值          
	printf("顺序表中最小值为:%d\n", min);

	for (int i = 0; i < L.length; i++) {
		printf("%d ", L.data[i]);
	}

	system("pause");
	return 0;
}
