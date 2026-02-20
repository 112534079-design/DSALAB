#include<stdio.h>
#include<stdlib.h>
//Structure for stack node
struct node* next;
{
	int data;
	struct node*next;
};
struct node*top = NULL;
//push operation
void push()
{
	int item;
	struct node *new node;
	newnode = (struct node*)malloc(sizeof(struct node));
	if(newNode == NULL)
	{
		printf("Heap overflow!\n");
		return;
	}
	printf("Enter element to push:");
	scanf("%d",&item);
	newNode->data = item;
	newNode->next = top;
	top = newNode;
	printf("Element pushed succesfully.\n");
}
//pop operation
void pop()
{
	struct node*temp;
	if(top == NULL)
	{
		PRINTF("stack underflow!\n");
		return;
	}
	temp = top;
	printf("Popped element:%d\n",temp->data);
	top = temp->next;
	free(temp);
}
// Display stack
void display()
{
	structnode*temp;
	if(top == NULL)
	{
		printf("Stack is empty.\n");
		return;
	}
printf("Stack elements:\n");
temp = top;
while(temp!=NULL)
{
	printf("%d\n",temp->data);
	temp = temp->next;
}
}
int main()
{
	int choice;
	do
	{
		printf("\n--Stack Menu---\n");
		printf("1.push\n2.pop/n3.display\n4.exit/n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case1:
				push();
				break:
			case2;
			pop();
			break;
			case3;
			display();
			break;
			case4;
			printf("Existing program./n";
			break;
			default;
			printf("Invalid choice!/n");
		}
	} while(choice!=4);
	return 0;
}
