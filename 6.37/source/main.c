#include<stdio.h>
#include<stdlib.h>

int recursiveMaximum(int a[], int n);
int main(void)
{
	int i,y;
	int *a = { 0 };
	printf("��J5�ӼƦr:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", a[i]);
	}
	y = recursiveMaximum(a, 5);
	printf("�̤j�Ȭ�:%d",y);
	system("pause");
	return 0;
}

int recursiveMaximum(int a[], int n)
{
	if (n == 1)
	{
		return a[1];
	}
	else
	{
		int x = max(a, n - 1);
		return a[n]>x ? a[n] : x;
	}
}