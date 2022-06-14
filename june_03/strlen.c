//to print he length of the string
#include<stdio.h>
#include<stdlib.h>
/* we can get output like this without storing the string
int main() {
	
	int len;
	char c;
	printf("Enter the string :");
	
	while (c!='\n') {
		c=getc(stdin);
		len++;
		}
	printf("the length of the string is %d\n",len);
	return 0;
}*/

int main() {
	int len=0;
	char *str=(char*)malloc(sizeof(char));
	printf("Enter the string :");
	scanf("%[^\n]%*c",str);
	while(*str !='\0') {
		len++;
		*str++;
	}
	printf("The length of the string is %d",len);
	return 0;
}
