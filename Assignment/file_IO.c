//Merging the two different files(text & integer files)into one file
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	FILE *fp1;
	char *buff=(char*)malloc(sizeof(char));
	fp=fopen("file1.txt","a");
	fp1=fopen("file2.txt","r");
	while (fscanf(fp1,"%s",buff)!=EOF)
	{
		fprintf(fp,"%s\n",buff);
	}
	
	
	return 0;
}
	
