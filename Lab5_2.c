/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 5>

  This program computes factorials
*/
#include <stdio.h>
#include <string.h>
char *fact_calc(int x, char *out);
char out[100];
int x;
int fact=1;
int add=6;
int main()
{
	printf("Please input a number between 0 and 9\n");
	scanf("%d", &x);
	if(x==-1)
	{
		printf("Bye!\n");
	}
	else if(x>9||x<0)
	{
		printf("You clearly can't read directions...\n");
	}
	else 
	{
		out[0]=' ';
		out[1]= (x+'0');
		out[2]='!';
		out[3]= '=';
		out[4]=' ';
	
		for(int i=3;i<x;i++)
		{
			if(i==5)
			{
				
			}
			else
			{
				add++;
			}
		}
		fact_calc(x, out);
	}
}
char *fact_calc(int x, char *out)
{
	for(int i=5;i<(4*x);i+=4)
	{
		out[i]=((x-(i/4)+'0'));
		out[i+1]=' ';
		if((x-(i/4))>1)
		{
			out[i+2]='x';
			out[i+3]=' ';
		}
		else
		{
			out[i+2]='\0';
		}
	}
	for(int i=x;i>0;i--)
	{
		fact*=i;
	}
	for(int i=0;i<(strlen(out)+add);i++)
	{
		printf("*");
	}
	printf("\n*");
	for(int i=0;i<strlen(out);i++)
	{
		printf("%c", out[i]);
	}
	printf("= %d *\n", fact);
	for(int i=0;i<(strlen(out)+add);i++)
	{
		printf("*");
	}
}
