//To print the length of the string using pointers
#include<stdio.h>
#include<stdlib.h>
int strlength(char *);
int main()
{
	char *str=(char*)malloc(sizeof(char));
	printf("Enter the string :");
	scanf("%[^\n]%*c",str);
	printf("The length of the string is %d\n",strlength(str));
	return 0;
}
int strlength(char *str)
{
	int count=0;
	while(*str !='\0')
	{
		count++;
		str++;
	}
	return count;
}
