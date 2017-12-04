#include<stdio.h>
#include<stdlib.h>

int Bsearch(int *A, int n, int key);
int list[10] = { 5,12,34,56,76,81,99,123,145,168 };
int key;

int main(void)
{
	printf("數字排列為 5,12,34,56,76,81,99,123,145,168 \n");
	printf("請輸入要搜尋的key:\n");
	scanf("%d", &key);
	printf("key:%d在第%d個位置(以0為開頭)\n", key, Bsearch(list,10 , key));

	system("pause");
	return 0;
}

int Bsearch(int *A, int n, int key)
{
	int low = 0, up = n - 1, mid;
	while (low <= up) {
		mid = (low + up) / 2;
		if (A[mid] == key) return mid;
		else if (A[mid]>key) up = mid - 1;
		else low = mid + 1;
	}
	return -1;
}
