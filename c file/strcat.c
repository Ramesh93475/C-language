#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	int l1,l2,i;
	printf("Enter string 1\n");
	fgets(a,20,stdin);
	printf("Enter string 2\n");
	fgets(b,20,stdin);
	l1=strlen(a);
	l1=strlen(b);
	for(i=0;i<=l2;i++)
	{
		a[l1+i]=b[i];
	}
	printf("%s",a);
	return 0;
}