#include <stdio.h>
int main(void)
{
	char c;
	printf("Please input any key: ");
	scanf("%c", &c);
	if(c>=48&&c<=57)
	{
		printf("You entered a digit! ");
	}
	else if((c>=65&&c<=90)||(c>=97&&c<=122))
	{
		printf("You entered a letter! ");
		if(c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u')
		{
			printf("Your letter is a vowel! ");			
		}
		else
		{
			printf("Your letter is a consonant! ");
		}
	}
	else
	{
	printf("You entered a special character! ");
	}
}
