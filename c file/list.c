#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *temp,*newnode,*head;
	head=0;
	int a=1;
	while(a!=0)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data");
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
		printf("Do u want to continue(0,1)");
		scanf("%d",&a);
	}
	temp=head;
	printf("The elements in a list  is ");
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	return 0;
}