/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 5>

  This program does ...
*/
#include <stdio.h>
#include <string.h>
char *deBlank(char *in, char *out);
char*scanline(char *dest, int dest_len);
char in[1000], out[1000];
int main()
{
	printf("Input a phrase or sentance:");
	scanline(in, 1000);
	deBlank(in, &out);
}
char *deBlank(char *in, char *out)
{
	for(int i=0;i<1000;i++)
	{
		if(in[i]==' ')
		{
			for(int j=0;j<1000;j++)
			{
				in[i+j]=in[i+j+1];
			}
		}
		out[i]=in[i];
	}
	puts(out);
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
