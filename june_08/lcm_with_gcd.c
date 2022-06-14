//we are findind th lcm using gcd
#include<stdio.h>
int main() {
	int a,b,max,gcd,lcm;
	printf("Enter the numbers a and b :");
	scanf("%d %d",&a,&b);
	max=(a>b)?a:b;
	for(int i=1;i<=max;i++) {
		if (a%i==0 && b%i==0)
			gcd=i;
		}
	lcm=(a*b)/gcd;
	printf("The LCMof the number are %d ",lcm);
	return 0;
}
