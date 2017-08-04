/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 8>

  This program processes words in a file
*/
#include <stdio.h>
#include <string.h>
FILE *in;
int main()
{
	in = fopen("words.txt", "r");
	char temp[100];
	int x=1;
	int wcount=0;
	while(x==1)
	{
		int lcount=0;
		fscanf(in, "%s", &temp);
		x=0;
		for(int i=0;i<4;i++)
		{
			if(temp[i]!='!')
			{
				x=1;
			}
		}
		if(x==1)
		{
			for(int i=0;i<strlen(temp);i++)
			{
				int c=temp[i];
				if((c>=65&&c<=90)||(c>=97&&c<=122))
				{
					lcount++;
				}
				else
				{
					for(int j=i;j<strlen(temp)-1;j++)
					{
						temp[j]=temp[j+1];
					}
					temp[strlen(temp)-1]=' ';
				}
			}
			printf("%s\t%d\n", temp, lcount);
			wcount++;
		}
	}
	printf("There are %d words in the file.\n", wcount);
}
