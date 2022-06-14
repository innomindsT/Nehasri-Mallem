//To check the machine belongs to which endian
#include<stdio.h>
int main()
{
	unsigned int i=1;
	char *c=(char*)&i;
	printf("%d\n",*c);
	if (*c)
		printf("Little endian");
	else
		printf("Big endian");
	getchar();
	return 0;
}
