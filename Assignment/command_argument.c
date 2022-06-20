//To process bunch of input operations and print them
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int a,b;
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	for (int i=a;i<=b;i++)
	{
		printf("%d ",i);
	}
	return 0;
}
