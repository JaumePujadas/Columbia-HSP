/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 5>

  This program does ...
*/
#include <stdio.h>
char reverse(char values[]);
int x=0;

int main()
{
	printf("How many words are in your phrase?\n");
	scanf("%d", &x);
	char words[x][140];
	printf("Input a phrase\n");
	for(int i=0;i<x;i++)
	{
		scanf("%s", &words[i]);
	}
	for(int i=x-1;i>=0;i--)
	{
		printf("%s ", words[i]);
	}
	

}

