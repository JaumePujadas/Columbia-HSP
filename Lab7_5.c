/*
  Author: <Jaume Pujadas>
  Course: <floatroduction to Programming: Fundamentals of C>
  Instructor: <Mr. Gilbert Pajela>
  Assignment: <Lab 7>

  This program handles data about transformers
*/
#include <stdio.h>
struct transformer
{
	float wraps1;
	float wraps2;
	float inVolt;
	float inCurrent;
	float outVolt;
	float outCurrent;
}t;
float outV(float w1, float w2, float V);
float outC(float w1, float w2, float C);
float setN1(float w2, float inV, float outV);
float setN2(float w1, float inV, float outV);
float setV1(float w1, float w2, float outV);
float setI1(float w1, float w2, float outC); 
char ignore;
int main()
{
	char c;
	char c2[2];
	printf("Would you like to calculate an input or an output? [I/O]:\n");
	scanf("%c", &c);
	if(c=='O')
	{
		printf("Please input the amount of coils for wire one, the amount of coils for wire two, the input voltage, and the input current in AC:\n");
		scanf("%f %f %f %f", &t.wraps1, &t.wraps2, &t.inVolt, &t.inCurrent);
		printf("Your output voltage is %f and your out put current is %f.\n", outV(t.wraps1, t.wraps2, t.inVolt), outC(t.wraps1, t.wraps2, t.inCurrent));
	}
	else if(c=='I')
	{
		printf("Which setting would you like to calculate? [N1, N2, V1 or I1]:\n");
		do
		ignore = getchar();
		while(ignore !='\n');

		scanf("%s", &c2);
		if(c2[0]=='N'&&c2[1]=='1')
		{
			printf("Please enter N2, V1, and V2\n");
			scanf("%f %f %f", &t.wraps2, &t.inVolt, &t.outVolt);
			printf("The amount of wraps for wire 2 for your desired setup and output would be %f", setN2(t.wraps2, t.inVolt, t.outVolt));	
		}
		else if(c2[0]=='N'&&c2[1]=='2')
		{
			printf("Please enter N1, V1, and V2\n");
			scanf("%f %f %f", &t.wraps1, &t.inVolt, &t.outVolt);
			printf("The amount of wraps for wire 2 for your desired setup and output would be %f", setN2(t.wraps1, t.inVolt, t.outVolt));	
		}
		else if(c2[0]=='V'&&c2[1]=='1')
		{
			printf("Please enter N1, N2, and V2\n");
			scanf("%f %f %f", &t.wraps1, &t.wraps2, &t.outVolt);	
			printf("The input voltage for your desired setup and output would be %f", setV1(t.wraps1, t.wraps2, t.outVolt));		
		}
		else if(c2[0]=='I'&&c2[1]=='1')
		{
			printf("Please enter N1, N2, and I2\n");
			scanf("%f %f %f", &t.wraps1, &t.wraps2, &t.outCurrent);
			printf("The input current for your desired setup and output would be %f", setI1(t.wraps1, t.wraps2, t.outCurrent));		
		}
		else
		{
			printf("Fine then.\n");
		}
	}
	else
	{
		printf("Fine then.\n");
	}
}
float outV(float w1, float w2, float V)
{
	float oV=((V*w2)/w1);
	return oV;
}
float outC(float w1, float w2, float C)
{
	float oC=((C*w2)/w1);
	return oC;
}
float setN1(float w2, float inV, float outV)
{
	float N1=((inV*w2)/outV);
	return N1;
}
float setN2(float w1, float inV, float outV)
{
	float N2=((outV*w1)/inV);
	return N2;
}
float setV1(float w1, float w2, float outV)
{
	float inV=((outV*w1)/w2);
	return inV;
}
float setI1(float w1, float w2, float outC)
{
	float I1=((w1*outC)/w2);
	return I1;
}
