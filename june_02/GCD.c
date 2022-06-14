//finding the GCD of the two numbers
#include<stdio.h>
int main() {
	int a,b,max,gcd;
	printf("Enter the two numbers :");
	scanf("%d %d",&a,&b);
	max=(a>b)?a:b;
	for(int i=1;i<max;i++) {
		if (a%i==0 && b%i==0){
			gcd=i;
			}
		}
	printf("The gcd of %d and %d are %d",a,b,gcd);
	return 0;
}
