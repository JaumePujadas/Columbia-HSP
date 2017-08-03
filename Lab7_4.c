/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 7>

  This program makes word lists
*/
#include <stdio.h>
#include <string.h>
struct list_info
{
	char lang[13];
	int list_len;
	char words[][20];
};
int x, len;
char loadList(struct list_info l);
char addWords(struct list_info l);
int contains(char word[], struct list_info l);
int main()
{
	printf("How many word lists would you like to input?\n");
	scanf("%d", &len);
	struct list_info l[len];
	for(int i=0;i<len;i++)
	{
		loadList(l[i]);
		addWords(l[i]);
	}
}
char loadList(struct list_info l)
{
	printf("What language are the words you would like to input in?\n");
	scanf("%s", &l.lang);
	printf("How many words would you like to put in?\n");
	scanf("%d", &x);
	printf("Please enter %d words in %s\n", x, l.lang);
}
char addWords(struct list_info l)
{
	char temp[100];
	for(l.list_len=0;l.list_len<x;l.list_len++)
	{
		scanf("%s", &temp);
		for(int i=0;i<=100;i++)
		{
			if(temp[i]=='\0'&&i<=21)
			{
				strcpy(l.words[l.list_len], temp);
				i=101;
				printf("%s <--\n", l.words[l.list_len]);
				if(contains(l.words[l.list_len], l)==1)
				{
					l.list_len--;
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
int contains(char word[], struct list_info l)
{
	char c, ignore;
	for(int i=0;i<l.list_len;i++)
	{
		printf("-->%s\n", l.words[0]);
		if(strcmp(l.words[i], word)==0)
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
