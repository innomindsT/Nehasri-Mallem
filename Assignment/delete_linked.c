//program to delete the nth node from the reverse in the singly linked list
#include<stdio.h>
#include<stdlib.h>
int num,cou=1;
struct node
{
	int data;
	struct node *link;
};
void insertion(struct node **head)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node*));
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	temp->data=n;
	temp->link=NULL;
	struct node *p=*head;
	if (p==NULL)
	{
		*head=temp;
	}
	else 
	{
		while (p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
	cou++;
	printf("inserted successfully\n");
}
void deletion(struct node **head)
{
	struct node *p=*head;
	struct node *q=NULL;
	int pos,count=1;
	printf("Enter the position :\n");
	scanf("%d",&pos);
	
	while (p!=NULL)
	{	if (count==(cou-pos))
			break;
		
		q=p;
		p=p->link;
		count++;
	}
	if (p==NULL)
		printf("There is no position exit\n");
	else if (q==NULL)
	{
		*head=p->link;
		p->link=NULL;
		free(p);
		
	}
	else 
	{
		q->link=p->link;
		p->link=NULL;
		free(p);
		
	}
	printf("Deleted successfully \n");
	cou--;
}
void print_list(struct node **head)
{
	struct node *p=*head;
	if (p==NULL)
		printf("No elements are present\n");
	else
	{
	printf("The elements in the linked list :");
	while (p!=NULL)
	{
		printf("%d\t",p->data);
		p=p->link;
	}
	printf("\n");
	}
}

int main()
{
	struct node *head=NULL;
	printf("implementing the singly linked list\n");
	do
	{
	printf("1 : Insertion\n2 : Deletion\n3 : Print the list\n4 : End the execution\n");
	
	printf("Enter the option :");
	scanf("%d",&num);
	switch (num)
	{
		case 1:
			insertion(&head);
			break;
		case 2:
			deletion(&head);
			break;
		case 3:
			print_list(&head);
			break;
		case 4:
			printf("Exit the loop\n");
			break;
		default:
			printf("Enter valid integer\n");
	}
	}while (num !=4);
	return 0;
}
