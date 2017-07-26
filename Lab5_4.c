/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 5>

  This program makes nouns plural
*/
#include <stdio.h>
#include <string.h>
char str[100];
int x=0;
char *scanline(char*dest, int dest_len);
int main()
{
	printf("Input your noun:\n");
	scanline(str, 100);
	for(int i=0;i<100;i++)
	{
		if(str[i]==0&&x==0)
		{
			x=(i-1);
		}
	}
	if(str[x]=='y')
	{
		str[x]='i';
		str[x+1]='e';
		str[x+2]='s';
		str[x+3]='\0';
	}
	else if((str[x]=='h'&&(str[x-1]=='c'||str[x-1]=='s'))||(str[x]=='s'))
	{
		str[x+1]='e';
		str[x+2]='s';
		str[x+3]='\0';
	}
	else
	{
		str[x+1]='s';
		str[x+2]='\0';
	}
	puts(str);
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
