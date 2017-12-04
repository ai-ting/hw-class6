#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
int main(void)
{
	char a[100], b[100];
	int i, j, l;

	printf("\n½Ð¿é¤J¦r¦ê :");
	scanf("%s",&a);
	l = strlen(a); 
	i = 0;
	l -= 1; 
	while (l >= 0) 
	{
		b[l--] = a[i++];
	}
	b[i] = '\0';	
	
	printf("ÄA­Ë«á : %s \n\n", b);
	system("pause");
	return 0;
}