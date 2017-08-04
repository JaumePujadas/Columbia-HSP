/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 8>

  This program expands matricies
*/
#include <stdio.h>
FILE *in, *out;
int scan_sparse(FILE *f, FILE *o);
int write_matrix(FILE *o, int x);
int main()
{
	in = fopen("sparse.txt", "r");
	out = fopen("matrix.txt", "a");
	scan_sparse(in, out);
}
int scan_sparse(FILE *f, FILE *o)
{
	int s1, s2;
	fscanf(f, "%d %d", &s1, &s2);
	int matrix[s1][s2];
	fprintf(o, "%d %d\n", s1, s2);
	int r, c, x;
	for(int i=0;i<s1;i++)
	{
		for(int j=0;j<s2;j++)
		{
			matrix[i][j]=0;
		}
	}
	for(int i=0;i<s1*s2;i++)
	{
			fscanf(f, "%d %d %d", &r, &c, &x);
			matrix[r][c]=x;
	}
	for(int i=0;i<s1;i++)
	{
		for(int j=0;j<s2;j++)
		{
			write_matrix(o,matrix[i][j]); 
		}
		fprintf(o, "\n");
	}
}
int write_matrix(FILE *o, int x)
{
	fprintf(o, "%d ", x);
}
