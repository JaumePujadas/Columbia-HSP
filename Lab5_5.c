/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 5>

  This program orders lists in alphabetical order
*/
#include <stdio.h>
#include <string.h>
int x;
char *scanline(char *dest, int dest_len);
int main()
{
	printf("How many names would you like to put in?");
	scanf("%d", &x);
	char str[x][100];
	char fname[20], lname[20];
	int ages[x];
	for(int i=0;i<x;i++)
	{
		printf("Enter name #%d(Lastname, Firstname):\n", (i+1));
		scanf("%s %s", &lname, &fname);
		printf("How old is this person?\n");
		scanf("%d", &ages[i]);
		strcat(str[i], lname);
		printf("\n%d, %c\n", strlen(str[i]), str[i][strlen(str)]);
		str[i][strlen(str)]= ' ';
		strcat(str[i], fname);
		puts(str[i]);
	}
}
char *scanline(char *dest, /* output - destination string */ int dest_len) /* input - space available in dest */
{
  int i, ch;

  /* Gets next line one character at a time. */
  i = 0;
  for (ch = getchar();
       ch != '\n' && ch != EOF && i < dest_len - 1;
       ch = getchar())
    dest[i++] = ch;
  dest[i] = '\0';

  /* Discards any characters that remain on input line */
  while (ch != '\n' && ch != EOF)
    ch = getchar();

  return dest;
}
