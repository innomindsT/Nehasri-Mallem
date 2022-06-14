//printing the lcm of the entered number
#include<stdio.h>
int main() {
	int a,b;
	printf("Enter the two numbers :");
	scanf("%d %d ",&a,&b);
	int max=(a>b)?a:b;
	while (1){
	if(max%a==0 && max%b==0){
		printf("The LCM of %d and %d are %d\n",a,b,max);
		break;
		}
	max++;
	}
	return 0;
}
		
