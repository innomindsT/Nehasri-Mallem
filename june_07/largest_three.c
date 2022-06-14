//To find largest number among three numbers
#include<stdio.h>
int main() {
	int a,b,c;
	printf("ENter the three numbers :");
	scanf("%d %d %d ",&a,&b,&c);
	int x=(a>b)?a:b;
	int y=(x>c)?x:c;
	printf("the largest number among three numbers %d,%d,%d is %d\n",a,b,c,y);
	return 0;
}
