/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 5>

  This program checks if a chemical has hydroxide in it
*/
#include <stdio.h>
#include <string.h>
int hydroxide(char c[]);
char *scanline(char*dest, int dest_len);
char str[100];
int main()
{
	printf("Input a chemical formula:\n");
	scanline(str, 100);
	if(hydroxide(str)==1)
	{
		printf("Your chemical has hydroxide in it!\n");
	}
	else
	{
		printf("Your chemical does not have any hydroxide in it.\n");
	}
}
int hydroxide(char c[])
{
		if((strrchr(c, 'O')+1==strrchr(c, 'H'))&&(strrchr(c, 'H')+1==strrchr(c, '\0')))
		{
			return 1;
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
