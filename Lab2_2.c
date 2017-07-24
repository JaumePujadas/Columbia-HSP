/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 2>

  This program makes shapes
*/

#include <stdio.h>
int indent=0;
int main()
{
	char choice;
	printf("Choose a shape: Rectangle(r), X(x), Triangle(t), Inverted Triangle(i), Trapezoid(T), or Circle(c) ");
	scanf("%c", &choice);
	if(choice=='r')//makes rectangle
	{

		int w, h, x1=0, x2=0, x3=0;
		printf("What would you like the dimensions of the border to be? (x and y)" );
		scanf("%d %d", &w, &h);
		while(x1 < w)
		{
			printf("*");
			x1++;
		}
		x1=0;
		while(x2<h-2)
		{
			printf("\n*");
			while(x3<w-2)
		{
				printf(" "); 
				x3++;
		}
			printf("*");
			x2++;
			x3=0;
		}
		printf("\n");
		while(x1 < w)
		{
			printf("*");
			x1++;
		}
		printf("\n");
	}
	else if(choice=='x')//makes x
	{
		int length;
		printf("How long would you like each stroke to be(input a number)?" );
		scanf("%d", &length);
		for(int j=0;j<length;j++)
		{
			for(int i=0;i<length;i++)
			{
				if(i==indent||i==(length-indent-1))
				{
					printf("*");
				}
				else
				{
				printf(" ");
				}
			}
			printf("\n");
			indent++;
		}
	}
	else if (choice=='t')//makes triangle
	{
		int length, inc=1;
		printf("How tall should the triangle be(input a number)?" );
		scanf("%d", &length);
		for(int i=0;i<length;i++)
		{
			for(int j=0;j<inc;j++)
			{
				printf("*");
			}
			inc++;
			printf("\n");
		}
	}
	else if (choice=='i')//makes inverted triangle
	{
		int length, inc=1;
		printf("How tall should the triangle be(input a number)?" );
		scanf("%d", &length);
		for(int i=0;i<=length;i++)
		{
			for(int j=0;j<=inc;j++)
			{
				printf(" ");
			}
			for(int j=length;j>=inc;j--)
			{
				printf("*");
			}
			inc++;
			printf("\n");
		}
	}
	else if (choice=='T')//makes trapezoids
	{
		int l1, l2, inc;
		printf("How tall and wide should the trapezoid be(input a two numbers- side then height)?" );
		scanf("%d %d", &l1, &l2);
		inc=l1-l2;
		for(int i=0;i<l2;i++)
		{
			for(int j=0;j<l1-inc;j++)
			{
				printf("*");
			}
			inc--;
			printf("\n");
		}
	}
	else if(choice=='c')//makes circles
	{
			int r;
		printf("What is the radius of the circle?(input a number)?" );
		scanf("%d", &r);
		for(int i=-30;i<r;i++)
		{
			for(int j=-30;j<r;j++)
			{
				if(((i*i)+(j*j))<(r*r))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}
