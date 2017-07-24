/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 2>

  This program computes combinatories
*/#include <stdio.h>
int main()
{
	int n, k, n_factorial=1, k_factorial=1, kmn, kmn_factorial=1, answer;
	printf("Please input values for n and k in C(n, k): ");
	scanf("%d %d", &n, &k);
	kmn=(n-k);
	if(n>=k)
	{
		for(int i=n;i>0;i--)//Computes n!
		{
			n_factorial*=i;
		}
		for(int i=k;i>0;i--)//Computes k!
		{
			k_factorial*=i;
		}
		for(int i=kmn;i>0;i--)//Computes (k-n)!
		{
			kmn_factorial*=i;
		}
		printf("%d, %d, %d", n_factorial, k_factorial, kmn_factorial);
		answer=(n_factorial)/ ((k_factorial)*(kmn_factorial));
		printf("C(%d, %d) = %d \n", n, k, answer);
	}
	else
	{
		printf("C(%d, %d) does not compute", n, k);
	}
}
