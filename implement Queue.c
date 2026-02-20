#include<stdio.h>
#define MAX 5
int queue[MAX];
int front =-1,rear=-1;
// Insert element(Enqueue)
void enqueue()
{
	int item;
	if (rear==MAX-1)
	{
		printf("Queue overflow!/n");
		return;
	}
	printf("Enter element to insert:");
	scanf("%d",&item);
	if (front==-1)
	front=0;
	queue[++rear]=item;
	printf("Element inserted successfully./n");
}
//delted element(Dequeue)
void dequeue()
{
	if (front==-1||front>rear)
	{
		printf("Queue underflow!/n");
		return;
	}
	printf("Delted element:%d/n",queue[front++]);
}
//Display queue elements 
void display()
{
	if(front==-1||front>rear)
	{
		printf("Queue is empty./n");
		return;
	}
	printf("Queue elements:\n");
	for(i=front; i<=rear; i++)
	printf("%d",queue[i]);
	printf("/n");
}
int main()
{
	int choice;
	do
	{
		printf("/n---Queue menu---/n");
		printf("1.enqueue/n2.dequeue/n3.display/n4.exit/n");
		printf("Enter your choice");
		scanf("%d",&choice);
		switch (choice)
		{
			case1:
			 enqueue();
			 break;
			case2:
			dequeue();
			break;
			case3:
			display();
			break;
			case4:
			printf("Existing program./n");
			break;
			default:
			printf("Invalid choice!/n"); 
		}
	} while(choice!=4);
	return 0;
}
