//Finding the size of the int,float,double,long datatypes
#include<stdio.h>
int main() {
	int a;
	float b;
	long c;
	double d;
	char x;
	printf("The size of the integer is %zu bytes\n",sizeof(a));
	printf("the size of the float is %zu bytes \n",sizeof(b));
	printf("The size of the long is %zu bytes\n",sizeof(c));
	printf("The size of the double is %zu bytes\n",sizeof(d));
	printf("The size of the character is %zu bytes\n",sizeof(x));
	return 0;
}
	
