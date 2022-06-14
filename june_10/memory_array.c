//To find the amount of memory allocated for integer array in the program
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	printf("the amount of memory allocated for an int array is %lu bytes\n",sizeof(arr));
	return 0;
}
