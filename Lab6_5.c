/*
  Author: <Jaume Pujadas>
  Course: <Introduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 6>

  This program evaluates all of the bit strings that have a fixed Hamming distance 
*/
#include <stdio.h>
#include <string.h>
int i=0;
int i2=1;
int p=0, z=0;
int str[4];
char goHam(char nums[4], int ham_dist);
int main()
{
	int x;
	printf("Please input a bit string (A combination of 4 0s or 1s) followed by a Hamming distance(Between 0 and 4):\n");
	scanf("%s %d", &str, &x);
	printf("The following strings have a hamming distance of %d from %s:\n", x, str);
	if(x<=4&&x>=0)
	{
		goHam(str, x);
	}
	else
	{
		printf("The Hamming distance must be between 0 and 4\n");
	}
}
char goHam(char nums[4], int ham_dist)
{
	
	if(ham_dist==0)//Handles a hamming distance of 0
	{
		printf("%s\n", nums); 
	}
	if(ham_dist==1&&i<4)//Handles a hamming distance of 1
	{
		char numstemp[4]={nums[0], nums[1], nums[2], nums[3]};
		if(nums[i]==49)
		{			
			numstemp[i]--;
		}	
		else
		{
			numstemp[i]++;
		}
		
		puts(numstemp);
		i++;
		goHam(nums, ham_dist);
	}	
	
	if(ham_dist==2&&i<4)//Handles a hamming distance of 2
	{
		char out[8][4];
		char numstemp[4]={nums[0], nums[1], nums[2], nums[3]};
		if(nums[i]==49)
		{			
			numstemp[i]--;
		}	
		else
		{
			numstemp[i]++;
		}
		if(nums[i2]==49)
		{
			numstemp[i2]--;
		}
		else 
		{
			numstemp[i2]++;
		}
		if(i2==3)
		{
			i2=-1;
			i++;
		}
		i2++;
		if(i2==i)
		{
			if((i2+1)<=3)
			{
				i2++;
			}
			else
			{
				i=4;
			}
		}
		if(p!=3&&p!=6&&p!=7&&p!=9&&p!=10&&p!=11)
		{
			printf("%s\n", numstemp);	
		}
		p++;
		goHam(nums, ham_dist);
	}
	if(ham_dist==3&&i<4)//Handles a hamming distance of 3
	{
		char numstemp[4]={nums[0], nums[1], nums[2], nums[3]};
		for(int i=0;i<4;i++)
		{
			if(nums[i]==49)
			{
				numstemp[i]--;
			}
			else
			{
				numstemp[i]++;
			}
		}
		if(numstemp[i]==49)
		{			
			numstemp[i]--;
		}	
		else
		{
			numstemp[i]++;
		}
		
		puts(numstemp);
		i++;
		goHam(nums, ham_dist);
	}	
	if(ham_dist==4)//Handles a hamming distance of 4
	{
		char numstemp[4]={nums[0], nums[1], nums[2], nums[3]};
		for(int i=0;i<4;i++)
		{
			if(nums[i]==49)
			{
				numstemp[i]--;
			}
			else
			{
				numstemp[i]++;
			}
		}
		puts(numstemp);
	}
}
