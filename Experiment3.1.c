#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void display();
void push(int);
void pop();
int main()
{
	int n, ch;
	for(;;)
	{
		printf("\n STACK MENU\n");
		printf("1. Push \n");
		printf("2. Pop \n");
		printf("3. Display \n");
		printf("4. Exit \n");
		printf("Enter the choice: \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("ENTER NUMBER: \n");
					scanf("%d",&n);
					push(n);
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: exit(0);
			        break;
			default: printf("INVALID CHOICE.\n");
					break;
		}
	}
}
void push(int item)
{
	struct node*nptr=(struct node*)malloc(sizeof(struct node));
	nptr->data=item;
	nptr->next=top;
	top=nptr;
}
void display()
{
	struct node*temp;
	temp=top;
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->next;
	}
}
void pop()
{
	if(top==NULL)
	{
		printf("\n Stack is empty.");
	}
	else
	{
		struct node*temp;
		temp=top;
		top=top->next;
		printf("\n %d deleted",temp->data);
	}
}
