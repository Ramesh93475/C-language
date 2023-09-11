#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *newnode,*head,*temp;
    head=0;
    char a[10]="Yes";
    int n,c=0;
    while(strcmp(a,"Yes")==0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value\n");
        scanf("%d\n",&newnode->data);
        if(head==0)
        {
         head=newnode;
         temp=newnode;   
        }
        else
        {
          temp->next=newnode;
          temp=newnode;
        }
        printf("Do you want to add another node? Type Yes/No\n");
        scanf("%s",a);
    }
    printf("The elements in the linked list are ");
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\nEnter the element to be searched\n");
    scanf("%d\n",&n);
    temp=head;
     while(temp!=0)
    {
         if(temp->data==n)
         {
             c=1;
         }
        temp=temp->next;
    }
    if(c==1)
    {
        printf("%d is present in the linked list",n);
    }
    else
    {
       printf("%d is not present in the linked list",n);
    }
    return 0;
}
