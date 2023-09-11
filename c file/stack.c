#include<stdio.h>
#include<stdlib.h>
int top=-1;
int n;
int stack[20];
void push();
void pop();
void peek();
void display();
int main()
{
	int ch;
	printf("Enter n  value\n");	
	scanf("%d\n",&n);
	while(1)
	{
	printf("Enter choice 1.push\t2.pop\t3.peek\t4.display\t5.end\n");
	scanf("%d\n",&ch);
	switch (ch)
	{
		case 1:
			push();
			break;
		case 2:
		    pop();
			break;
		case 3:
		    peek();
			break;
		case 4:
		    display();
			break;	
		case 5:
		   exit(0);	
	}
  }
	return 0;
}
void push()
{
	int x;
	if(top==n-1)
	{
		printf("Stack overflow");
	}
	else
	{
		printf("Enter data\n");
        scanf("%d\n");
		top++;
		stack[top]=x;
	}
}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		item=stack[top];
		printf("%d\n",stack[top]);
		top=top-1;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("Stack underflow\n");
	}
	else
	{
		printf("%d\n",stack[top]);
	}
}
void display()
{
	printf("The elments in stack are");
	for(int i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
}