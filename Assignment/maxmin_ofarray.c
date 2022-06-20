//To print the maximum and minimum in the given array
#include<stdio.h>
void max_min(int[],int);		//Declaring the function
int main()
{
	int arr[100],num;
	printf("Enter the number of elements in the array :");
	scanf("%d",&num);
	printf("Enter the elements :");
	for (int i=0 ; i<num ; i++)	//Storing the elements in the array
	{
		scanf("%d",&arr[i]);
	}
	max_min(arr,num);		//Calling the function to find maximum and minimum in the array
	return 0;
}
void max_min(int arr[],int num)
{	int max=arr[0];
	int min=arr[0];
	for (int i=1;i<num;i++)		//Comparing the maximum number in the array 
	{
		if (arr[i]>max)
			max=arr[i];
		else if (arr[i]<min)
			min=arr[i];
	}
	
	printf("The maximum number in the given array is %d\n",max);
	printf("The minimum number in the given array is %d\n",min);
}
				

