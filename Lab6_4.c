/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 6>

  This program evaluates a piece wise function that doubles a number
*/
int num;
int func(int x);
int main()
{
	printf("Choose a number:\n");
	scanf("%d", &num);
	printf("%d",func(num));
}
int func(int x)
{
	if(x<=0)
	{
		return 0;
	}
	else
	{
		return (func(x-1)+2);
	}
}
