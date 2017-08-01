/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 4>

  This program plays a game of hangman
*/
#include <stdio.h>
char word[]="programming";
char guessed[]="___________";
char g, ignore;
int x=5;
int hangman();
int used=0;
int match=1;
int main()
{
	printf("The word you must guess is 11 letters long. ");
	while(x>=0)
	{
		hangman();
	}
	if(match==0)
	{
		printf("Game Over. You Lose. The word was programing\n");
	}
}
int hangman()
{
	puts(guessed);
	printf("You have %d wrong guesses remaining. Please guess a letter:\n", x);
	do
		ignore = getchar();
		while(ignore !='\n');
		scanf("%c", &g);
	for(int i=0;i<11;i++)
	{
		if(g==word[i])
		{
			guessed[i]=g;
			used=1;
		}
		else if (i==10&&used==0)
		{
		x--;
		printf("%c is not in the word\n", g);
		}
	}
	used=0;
	for(int i=0;i<11;i++)
	{
		if(word[i]!=guessed[i])
		{
			match=0;
		}
	}
	if(match==1)
	{
		x=-1;
		printf("You Win! The word was: Programming\n");
	}
	match=1;
}
