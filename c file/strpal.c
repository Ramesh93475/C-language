#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   char a[20];
    printf("Enter string:\n");
    fgets(a,50,stdin);
    int i=0,c=1;
    int j=strlen(a)-1;
        if(a[i++]!=a[j--])
        {
            c=0;
            
        }
            if(c==1)
            {
                printf("%s is palindrome",a);
            }
            else
            {
               printf("%s is not palindrome",a); 
            }
    return 0;
}
