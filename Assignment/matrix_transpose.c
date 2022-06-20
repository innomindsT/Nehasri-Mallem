//To print the transpose of the 2-D matrix
#include<stdio.h>
int main()
{
	int arr[10][10];
	int row,col;
	printf("Enter the number of rows and columns :");		//Taking the number of rows and columns as input
	scanf("%d %d",&row,&col);
	printf("Enter the %d number of elements :",row*col);		
	for (int i=0;i<row;i++)
	{	for (int j=0;j<col;j++)
		{	scanf("%d",&arr[i][j]);			//Storing the elements in 2-D array taking from user
		}
	}
	printf("The entered matrix is :\n");
	for (int i=0;i<row;i++)
	{	for (int j=0;j<col;j++)
		{	printf("%d ",arr[i][j]);			//Displaying the 2-D array in normal
		}
		printf("\n");
	}
	printf("The transpose matrix is :\n");
	for (int i=0;i<col;i++)
	{	for (int j=0;j<row;j++)
		{	printf("%d ",arr[j][i]);			//Displaying the transpose 2-D array
		}
		printf("\n");
	}
	return 0;
}
		
