/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 5>

  This program finds a common suffix
*/
#include <stdio.h>
#include <string.h>
char w1[140];
char w2[140];
char common[140];
int compare(char word1[], char word2[]);
int main()
{
	printf("Please enter two words\n");
	scanf("%s %s", &w1, &w2);
	compare(w1, w2);
}
int compare(char word1[], char word2[])
{
	int x1=-1, x2=-1, y=0;
	for(int i=0;i<140;i++)
	{
		if((word1[i]<65||word1[i]>90)&&(word1[i]<97||word1[i]>122)&&x1==-1)
		{
			x1=i;
		}
		if((word2[i]<65||word2[i]>90)&&(word2[i]<97||word2[i]>122)&&x2==-1)
		{
			x2=i;
		}
	}
	common[0]=' ';
	while(word1[x1-1]==word2[x2-1])
	{
		common[y]=word1[x1-1];
		x1--;
		x2--;
		y++;
	}
	printf("The common suffix of %s and %s is \"", word1, word2);
	for(int i=y;i>=0;i--)
	{
		if(common[0]!=' ')
		{
			printf("%c",common[i]);
		}
		else
		{
			printf("NULL");
		}
	}
	printf("\"\n");
}
