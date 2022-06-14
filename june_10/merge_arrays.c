//program to merge two arrays using pointers
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr1=(int*)malloc(sizeof(int));
	int *arr2=(int*)malloc(sizeof(int));
	int num1,num2;
	printf("Enter the number of elements of first array :");
	scanf("%d",&num1);
	printf("\nEnter the number of elements of second array :");
	scanf("%d",&num2);
	printf("Enter the elements in the first array :");
	for (int i=0;i<num1;i++)
	{
		scanf("%d",(arr1+i));
	}
	printf("Enter the elements in the second array :");
	for (int i=0;i<num2;i++)
	{
		scanf("%d",(arr2+i));
	}
	for (int i=0;i<num2;i++)
	{
		*(arr1+num1+i)=*(arr2+i);
	}
	printf("The elements after merging are :");
	for (int i=0;i<(num1+num2);i++)
	{
		printf("%d ",*(arr1+i));

	}
	return 0;
}

