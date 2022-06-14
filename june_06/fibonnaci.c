//to print the fibonnaci sequence
#include<stdio.h>
int main() {
	int num,a,b,c;
	a=0;
	b=1;
	printf("enter the number :");
	scanf("%d",&num);
	if (num==0)
		printf("%d ",a);
	else if (num==1)
		printf("%d ",b);
	else if (num>1) {
		printf("%d %d ",a,b);
		while (num>2){
			c=a+b;
			a=b;
			b=c;
			printf("%d ",c);
			num--;
		}
	}
	else
		printf("Invalid number\n");
	return 0;
	
}
