/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 8>

  This program compresses matricies
*/
#include <stdio.h>
FILE *in, *out;
int scan_matrix(FILE *f, FILE *o);
int write_sparse(FILE *o, int row, int col, int x);
int main()
{
	in = fopen("matrix.txt", "r");
	out = fopen("sparse.txt", "a");
	scan_matrix(in, out);
}
int scan_matrix(FILE *f, FILE *o)
{
	int s1, s2;
	fscanf(f, "%d %d", &s1, &s2);
	int matrix[s1][s2];
	fprintf(o, "%d %d\n", s1, s2);
	for(int i=0;i<s1;i++)
	{
		for(int j=0;j<s2;j++)
		{
			fscanf(f, "%d", &matrix[i][j]);
			write_sparse(o, i, j, matrix[i][j]);
		}
	}
}
int write_sparse(FILE *o, int row, int col, int x)
{
	if(x!=0)
	{
		fprintf(o, "%d %d %d\n", row, col, x);
	}
}
