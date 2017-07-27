/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 7>

  This program computes longitude and latitude
*/
#include <stdio.h>
struct long_lat_t
	{
		int degrees;
		int minutes;
		char direction;
	} longitude, latitude;
int scan();
int printCoords(char word[], int x, int y, char c);
int compare(int x, int y, char c, int x2, int y2, char c2);
int main()
{
	scan();
	printCoords("latitude", latitude.degrees, latitude.minutes, latitude.direction);
	compare(longitude.degrees, longitude.minutes, longitude.direction, latitude.degrees, latitude.minutes, latitude.direction);
}
int scan()
{
	printf("Enter your longitude with each term separated by a space (Degrees, Minutes, and Directrion (N, S, E, W)):\n");
	scanf("%d %d %c", &longitude.degrees, &longitude.minutes, &longitude.direction);
		printf("Enter your latitude with each term separated by a space (Degrees, Minutes, and Directrion (N, S, E, W)):\n");
	scanf("%d %d %c", &latitude.degrees, &latitude.minutes, &latitude.direction);
	printCoords("longitude", longitude.degrees, longitude.minutes, longitude.direction);
}
int printCoords(char word[], int x, int y, char c)
{
	printf("Your %s is %d, %d, %c\n", word, x, y, c);
}
int compare(int x, int y, char c, int x2, int y2, char c2)
{
	if(x==x2&&y==y2&&c==c2)
	{
		printf("Your longitude and latitude are equal\n");
	}
	else
	{
		printf("Your longitude and latitude are not equal\n");
	}
		
}
