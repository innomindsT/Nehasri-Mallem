//Sorting the array of numbers using bubble sort
#include<stdio.h>
int main() {
	int num;
	printf("Enter the number of elemnets store in arry\n :");
	scanf("%d",&num);
	int arr[num];
	printf("Enter the elements :");
	for (int i=0;i<num;i++) {
		scanf("%d",&arr[i]);
		}
	//Bubble sort
	for (int i=0;i<num;i++){
		for (int j=0;j<(n-1-i);j++) {
			if (arr[j]>a[j+1]) {
				int temp=arr[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				}
			}
		}
		
