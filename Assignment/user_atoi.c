//To print the string of numbers into integer form where the string number is positive
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int user_atoi(char *);					//Initializing the function user_atoi
int main()
{
	char *str=(char*)malloc(sizeof(char));	//Initalizing the size of string
	char *str1;
	int len,res;
	printf("Enter the string :");
	scanf("%[^\n]%*c",str);
	len=strlen(str);
	str=realloc(str,len*sizeof(str));		//Reallocting the string size with required memory
	res=user_atoi(str);				//Calling the function
	printf("%d\n",res);
	return 0;
}
int user_atoi(char *str)
{	int x,res=0;
	while (*str != '\0')				//Looping untill the string is empty
	{
		x=*str-'0';
		if (x>=1 && x<=9)			//Checking whether the entered string elements are intergers or characters
		{	res=(res*10)+x;
			
		}
		else
			break;
		str++;
	}
	return res;
}
		
