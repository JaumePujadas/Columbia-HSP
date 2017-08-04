/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 8>

  This program is a database for planes
*/
#include <stdio.h>
#include <string.h>
struct data
{
	char name[25];
	int speed;
	float wingspan;
	float length;
	char type[3];
	char desc[80];
}d;
FILE *fileout;
int main()
{
	char c;
	fileout=fopen("planes.bin", "a+");
	printf("Would you like to input or access data? [I/A]");
	scanf("%c", &c);
	if(c=='I')
	{
		printf("Please enter the following information for your aircraft: Name, Speed(km/h), Wingspan, Length, Type - Military(M) or Civilian(C), and a brief description for the craft that is no more than 80 characters long\n");
		scanf("%s %d %f %f %s %s", &d.name, &d.speed, &d.wingspan, &d.length, &d.type, &d.desc);
		char temp[10];
		snprintf(temp, 10, "%d", d.speed);
		char temp2[10];
		snprintf(temp2, 10, "%f", d.wingspan);
		char temp3[10];
		snprintf(temp3, 10, "%f", d.length);
		fwrite(d.name, 1, sizeof(d.name), fileout);
		fwrite(temp, 1, sizeof(temp), fileout);
		fwrite(temp2, 1, sizeof(temp2), fileout);		
		fwrite(temp3, 1, sizeof(temp3), fileout);		
		fwrite(d.type, 1, sizeof(d.type), fileout);		
		fwrite(d.desc, 1, sizeof(d.desc), fileout);
	}
	else if (c=='A')
	{
		int z=1;
		char temp[10];
		char temp2[10];
		char temp3[10];
		char temptest[10]="          ";
		while(z==1)
		{
			fread(&d.name, 25, 1, fileout);
			fread(temp, 10, 1, fileout);
			fread(temp2, 10, 1, fileout);
			fread(temp3, 10, 1, fileout);
			fread(&d.type, 3, 1, fileout);
			fread(&d.desc, 80, 1, fileout);
			z=0;
			for(int i=0;i<10;i++)
			{
				if(temptest[i]!=temp[i])
				{
					z=1;
				}
			}
			for(int i=0;i<10;i++)
			{
				temptest[i]=temp[i];
			}
			if(z==1)
			{
				printf("\n%s", d.name);
				printf("\n%s", temp);
				printf("\n%s", temp2);
				printf("\n%s", temp3);
				printf("\n%s", d.type);
				printf("\n%s\n", d.desc);
			}
		}
	}
	else
	{
		printf("I guess neither...");
	}
}
