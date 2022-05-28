// WAP to find greatest number between two numbers 
#include<stdio.h>
int main()
{
	int num1, num2, greatest;
	printf("Enter two numbers: ");
	scanf("%d%d",&num1, &num2);
	if (num1 > num2)
	{
		greatest = num1;
	}
	else if (num2 > num1)
	{
		greatest = num2;
	}
	else
	{
		printf("they are equal. ");	
		return;
	}
	printf("The greatest number is %d", greatest);
	
}