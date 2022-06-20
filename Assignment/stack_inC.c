//Implementing stack in c using arrays and linked list
#include<stdio.h>
void push();
void pop();
void display();
void isEmpty();
void isFull();
int arr[100];
int i,max,num;
int main()
{	i=0;
	printf("Enter the maximum size of the stack :\n");
	scanf("%d",&max);
	do
	{
		printf("1 : Push\n2 : Pop\n3 : Display\n4 : Stack empty/not\n5 : stack is full/not\n6 : To exit \n");
		printf("Enter the option :");
		scanf("%d",&num);
		if (num==1)
		{	
			if (i<=max)
				push();
			else
				printf("The stack is full you cannot enter the element\n");
		}
		else if (num==2)
		{	if (i<=0)
				printf("Stack is empty nothing to pop\n");
			else 
				pop();
		}
		else if (num==3)
		{	if (i>0)
			{	printf("The elements in the stack are :\n");
				display();
			}
			else 
				printf("The stack is empty\n");
		}
		else if (num==4)
			isEmpty();
		else if (num==5)
			isFull();
		else if (num==6)
			printf("Exit the loop\n");
		else
			printf("Enter the valid integer\n");
	}
	while (num != 6);
		
	return 0;
}
void push()
{	int n;
	printf("Enter the number to push in the stack :");
	scanf("%d",&n);
	arr[i]=n;
	i=i+1;
}
void pop()
{	arr[i]=0;
	i=i-1;
}
void display()
{	for (int j=i-1;j>=0;j--)
	{	printf("%d\n",arr[j]);
	}
	printf("Press next option\n");
}
void isEmpty()
{	if (i<0)
		printf("The stack is empty\n");
	else
		printf("The stack is not empty\n");
}
void isFull()
{	if (i==max)
		printf("The stack is full\n");
	else
		printf("The stack is not full\n");
}
	
