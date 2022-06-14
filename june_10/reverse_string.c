//To reverse the given string using pointers
#include<stdio.h>
#include<stdlib.h>
void reverse(char*);
int main()
{
	char *str=(char*)malloc(sizeof(char));
	printf("enter the string :");
	scanf("%[^\n]%*c",str);
	printf("The reverse of the string is :");
	reverse(str);
	return 0;
}
void reverse (char *str)
{	int count=0;
	while (*str !='\0')
	{	
		count++;
		str++;
	}
	str--;
	while (count>0)
	{
		printf("%c",*str);
		str--;
		count--;
	}
}
	
