/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 7>

  This program computes where a bishop can move on a chess board
*/
#include <stdio.h>
int main()
{
	char test[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
	int y;
	struct position
	{
		char c;
		int x;
	}b;
	printf("What square is the bishop on?");
	scanf("%c %d", &b.c, &b.x);
	for(int i=0;i<7;i++)
	{
		if(test[i]==b.c)
		{
			y=i;
		}
	}
	printf("The bishop can move to the following squares from %c%d:\n", b.c, b.x);
	for(int i=1;b.x+i<=8&&y+i<8;i++)
	{
		printf("%c%d\n", test[y+i], b.x+i);
	}
	for(int i=1;b.x-i>=1&&y-i>=0;i++)
	{
		printf("%c%d\n", test[y-i], b.x-i);
	}
	for(int i=1;b.x-i>=1&&y+i<8;i++)
	{
		printf("%c%d\n", test[y+i], b.x-i);
	}
	for(int i=1;b.x+i<=8&&y-i>=0;i++)
	{
		printf("%c%d\n", test[y-i], b.x+i);
	}
}

