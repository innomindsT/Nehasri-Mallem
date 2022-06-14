//Printing the LCM of the n numbers
#include<stdio.h>
int main() {
	int arr[100],num,x,max;
	x=1;
	printf("Enter the totl numbers :");
	scanf("%d",&num);
	for (int i=0;i<num;i++) {
		scanf("%d",&arr[i]);
		}
	max=arr[0];
	for (int i=1;i<num;i++) {
		if (arr[i]>max)
			max=arr[i];
		}
	printf("%d",max);
	
	while (x) {
		x=0;
		for(int i=0;i<num;i++) {
			
			if(max%arr[i] != 0)
				x=1;
			
			}
			max++;
			
		}
	printf("The LCM of the %d given numbers are %d\n",num,--max);
	return 0;
}
			
	
