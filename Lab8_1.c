/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 8>

  This program 
*/
#include <stdio.h>
void merge(FILE *file1, FILE *file2, FILE *fileout);
int main()
{
	FILE *infile1, *infile2, *outfile;
	infile1 = fopen("Chems1.txt", "r");
	infile2 = fopen("Chems2.txt", "r");
	outfile = fopen("Chems3.bin", "w");
	merge(infile1, infile2, outfile);
	//fclose(infile1);
	//fclose(infile2);
	//fprintf(outfile, "%d %s %s %f\n");
}
void merge(FILE *file1, FILE *file2, FILE *fileout)
{
	fwrite(&file1, 1, sizeof(file1), &fileout);
	//fwrite(&file2, 1, sizeof(file2), &fileout);
}
