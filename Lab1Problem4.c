#include <stdio.h>
#include <math.h>
int main(void)
{
	char c;
	float calc, volume;
	printf("What would you like to know the area of? Cube(C) or Sphere(S) [C/S]: ");
	scanf("%c", &c);
	if(c=='C'||c=='c')
	{
	printf("What is the length of one side: ");
	scanf("%f", &calc);
	volume = (calc*calc*calc);
	printf("The volume of the cube is %f units cubed", volume);
	}
	else if (c=='S'|| c=='s')
	{
	printf("What is the length of the radius: ");
	scanf("%f", &calc);
	volume = ((4/3)*M_PI*(calc*calc*calc));
	printf("The volume of the sphere is %f units cubed", volume);
	}
	else
	{
	printf("Fine, no shapes for you!");
	}
	return 0;
}
