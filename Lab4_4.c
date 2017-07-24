/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 4>

  This program subtracts matricies
*/#include <stdio.h>
int a1[3][3];
int a2[3][3];
int afinal[3][3];
int main()
{
	printf("Please input 9 numbers: ");
	scanf("%d %d %d %d %d %d %d %d %d", &a1[0][0], &a1[0][1], &a1[0][2], &a1[1][0], &a1[1][1], &a1[1][2], &a1[2][0], &a1[2][1], &a1[2][2]);
	printf("Please input 9 more numbers: ");
	scanf("%d %d %d %d %d %d %d %d %d", &a2[0][0], &a2[0][1], &a2[0][2], &a2[1][0], &a2[1][1], &a2[1][2], &a2[2][0], &a2[2][1], &a2[2][2]);
	for(int i=0;i<3;i++)//Subtracts corresponding elements in arrays
	{
		for(int j=0; j<3;j++)
		{
			afinal[i][j]=((a1[i][j])-(a2[i][j]));
		}
	}
	printf("The difference of those two matricies is: \n"); 
	for(int i=0;i<3;i++)//Prints new array
	{
		for(int j=0; j<3;j++)
		{
			printf("%d ", afinal[i][j]);
		}
		printf("\n");
	}
}
