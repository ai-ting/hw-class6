#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(void)
{
	char a[100], b[100];
	int i, j, l;

	printf("\n�п�J�r�� :");
	scanf("%s",&a);
	l = strlen(a); 
	i = 0;
	l -= 1; 
	while (l >= 0) 
	{
		b[l--] = a[i++];
	}
	b[i] = '\0';	
	
	printf("�A�˫� : %s \n\n", b);
	system("pause");
	return 0;
}