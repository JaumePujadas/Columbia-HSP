/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 7>

  This program catalogs book information
*/
#include <stdio.h>
char *scanline(char *dest, int dest_len);
int main()
{
	int x;
	struct catalog_entry_t
	{
		char author[100];
		char title[100];
		char publisher[100];
		int year;
	};
	printf("How many books would you like to catalog?\n");
	scanf("%d", &x);
	struct catalog_entry_t book[x];
	for(int i=0;i<x;i++)
	{
		printf("Enter the book's author, title, publisher, and the year that the book was published:\n");
		scanline(book[i].author, 100);
		scanline(book[i].title, 100);
		scanline(book[i].publisher, 100);
		do
			ignore = getchar();
			while(ignore !='\n');
		scanf(" %d", &book[i].year);
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
