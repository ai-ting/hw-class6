#include<stdio.h>
#include<stdlib.h>

int Bsearch(int *A, int n, int key);
int list[10] = { 5,12,34,56,76,81,99,123,145,168 };
int key;

int main(void)
{
	printf("�Ʀr�ƦC�� 5,12,34,56,76,81,99,123,145,168 \n");
	printf("�п�J�n�j�M��key:\n");
	scanf("%d", &key);
	printf("key:%d�b��%d�Ӧ�m(�H0���}�Y)\n", key, Bsearch(list,10 , key));

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
