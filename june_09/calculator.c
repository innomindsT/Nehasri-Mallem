//To create a calculator using switch case
#include<stdio.h>
int main()
{
	printf("Enter number 1 for addition of two numbers\nEnter number 2 forsubtraction of two numbers\nEnter number 3 for multiplication of two numbers\nEnter number 4 for division of two numbers\nEnter number 5 for modulus of two numbers\n");
	int a,b,num;
	printf("enter the two numbers :");
	scanf("%d %d",&a,&b);
	printf("Enter the operation :");
	scanf("%d",&num);
	switch(num)
	{
		case 1 :
			printf("the addition of two numbers are %d\n",a+b);
			break;
		case 2 :
			printf("The subtraction of two numbers are %d\n",a-b);
			break;
		case 3 :
			printf("The multiplication of two numbers are %d\n",a*b);
			break;
		case 4 :
			printf("The division of two numbers are %d\n",a/b);
			break;
		case 5 :
			printf("The modulus of the two numbers are %d\n",a%b);
			break;
		default:
			printf("Enter the valid integer\n");
	}
	return 0;
}
