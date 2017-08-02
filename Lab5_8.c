/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 5>

  This program stores names in a file
*/
#include <stdio.h>
#include <string.h>
FILE *file;
struct name
{
	char fname[11];
	char lname[16];
	char middle[1];
}d;
int main()
{
	char c;
	printf("Would you like to read or input names? [R or I]:\n");
	scanf("%c", &c);
	if(c=='R')
	{
		file = fopen("Names.txt", "r");
		for(int i=0;i<=10;i++)
		{
			
			fscanf(file, "%s %s %s", &d.lname, &d.fname, &d.middle);
			if(d.middle[0]!='\0')
			{
				printf("%s %s %s.\n", d.lname, d.fname, d.middle);
			}
			d.middle[0]='\0';
		}
	}
	else
	{
		char temp1[100];
		char temp2[100];
		file = fopen("Names.txt", "a");
		printf("Input your name in the following format: Lastname, Firstname MiddleInitial.\n");
		scanf("%s %s %c", &temp1, &temp2, &d.middle);
		char total[80];
		for(int i=0;i<15;i++)
		{
			d.lname[i]=temp1[i];
			if(i<10)
			{
				d.fname[i]=temp2[i];
			}
		}
		d.lname[15]='\0';
		d.fname[10]='\0';
		strcpy(total, d.lname);
		strcat(total, " ");
		strcat(total, d.fname);
		strcat(total, " ");
		strcat(total, d.middle);
		strcat(total, "\n");
		fputs(total, file);
	}
}
