//To print highest frequency character in the given string
#include<stdio.h>
int main()
{
	char str[1000];
	int arr[1000],count,num,max,max1;
	printf("Enter the string :");
	scanf("%[^\n]%*c",str);
	int i=0;
	while (str[i] != '\0')
	{  	count =1;
		int j=0;
		while (str[j] != '\0')
		{	if (str[i] ==str[j])
			{
				arr[i]=count++;
			}
			j++;
		}
		i++;
	}
	num=i;
	max=arr[0];
	max1=0;
	for (i=1;i<num;i++)
	{
		if (arr[i]>max)
		{
			max1=i;
			max=arr[i];
		}
	}
	printf("The highest frequency character in the string is %c with frequency %d\n",str[max1],arr[max1]);
	return 0;
}
	

