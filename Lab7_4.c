/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 7>

  This program makes word lists
*/
#include <stdio.h>
#include <string.h>
struct list
{
	char lang[13];
	int list_len;
	char words[][20];
}l1;
int x;
char loadList();
char addWords();
int contains(char word[]);
int main()
{
	char c;
	int lnum1, lnum2;
	loadList();
	addWords();
}
char loadList()
{
	printf("What language are the words you would like to input in?\n");
	scanf("%s", &l1.lang);
	printf("How many words would you like to put in?\n");
	scanf("%d", &x);
	printf("Please enter %d words in %s\n", x, l1.lang);
}
char addWords()
{
	char temp[100];
	for(l1.list_len=0;l1.list_len<x;l1.list_len++)
	{
		scanf("%s", &temp);
		for(int i=0;i<=100;i++)
		{
			if(temp[i]=='\0'&&i<=21)
			{
				strcpy(l1.words[l1.list_len], temp);
				i=101;
				if(contains(l1.words[l1.list_len])==1)
				{
					l1.list_len--;
				}
			}
			else if (i>21)
			{
				i=0;
				printf("That word is too big!\n");
				scanf("%s", &temp);
			}
		}
	}
}
int contains(char word[])
{
	char c, ignore;
	for(int i=0;i<l1.list_len;i++)
	{

		if(strcmp(l1.words[i], word)==0)
		{
			printf("Are you sure that you would like to add a duplicate word? [Y/N]\n");
			do
			ignore = getchar();
			while(ignore !='\n');
			scanf("%c", &c);
			if(c=='N')
			{
				return 1;
			}
			else if (c=='Y')
			{
				return 0;
			}
			else
			{
				printf("Your answer is unclear... I'll add it just in case\n");
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
}
