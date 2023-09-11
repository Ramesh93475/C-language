#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int l1,l2,i;
    printf("Enter first string:\n");
    fgets(a,20,stdin);
    printf("Enter second string:\n");
    fgets(b,20,stdin);
    l1=strlen(a)-1;
    l2=strlen(b);
    for(i=0;i<=l2;i++)
    {
        a[l1+i]=b[i];
    }printf("After concatenation: ");
    printf("%s",a);
    return 0;
}