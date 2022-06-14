//finding the gcd for negative numbers
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the number a and b :");
	scanf("%d %d",&a,&b);
	a=(a>0)?a:-a;
	b=(b>0)?b:-b;
	while(a!=b){
		if (a>b)
			a-=b;
		else
			b-=a;
		}
		printf("The GCD of two numbers are %d\n",a);
		return 0;
	}
