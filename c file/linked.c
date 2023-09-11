#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *temp,*newnode,*head;
    head='\0';
    char a[]="Yes";
    while(strcmp(a,"Yes")==0)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter  the value\n");
        scanf("%d",&newnode->data);
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
        printf("Do you want to add another  node?  Type Yes/No\n");
        scanf("%s",&a);
    }
    printf("The elements in the linked list are  ");
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}