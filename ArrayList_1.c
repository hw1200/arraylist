/*��˳�����ɾ��������Сֵ��Ԫ�أ����ɺ������ر�ɾԪ�ص�ֵ��
�ճ���λ�������һ��Ԫ�������˳���Ϊ������ʾ������Ϣ���˳�����*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxSize 10           //�������Ա����󳤶� 

typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];        //˳����Ԫ�� 
	int length;
}SqList;                     //˳�������Ͷ���

int main() {
	SqList L;//����һ�����Ա�
	L.length = 0;
	memset(&(L.data), 0, sizeof(L.data));//��ʼ��
	printf("�����������Ԫ��ֵ:");
	for (int i = 0; i < MaxSize; i++)
	{
		scanf("%d", &L.data[i]);
		L.length++;
	}	

	if (L.length == 0)
		return false;             //��գ���ֹ��������

	int value = L.data[0];
	int pos = 0;              //�ٶ�0��Ԫ�ص�ֵ��С
	for (int i = 1; i < L.length; i++)  //ѭ����Ѱ�Ҿ�����Сֵ��Ԫ�� 
	{
		if (L.data[i] < value) 
		{
			value = L.data[i];       //��valueʼ�ռ��䵱ǰ������Сֵ��Ԫ�� 
			pos = i;
		}
	}
	L.data[pos] = L.data[L.length-1];//�ճ���λ�������һ��Ԫ��� 

	int min = value;//��ʱvalue��Ϊ��Сֵ          
	printf("˳�������СֵΪ:%d\n", min);

	for (int i = 0; i < L.length; i++) {
		printf("%d ", L.data[i]);
	}

	system("pause");
	return 0;
}
