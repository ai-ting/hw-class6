#include<stdio.h>
#include<stdlib.h>

int recursiveMaximum(int a[], int n);
int main(void)
{
	int i,y;
	int *a = { 0 };
	printf("輸入5個數字:");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", a[i]);
	}
	y = recursiveMaximum(a, 5);
	printf("最大值為:%d",y);
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