// WAP to input three numbers and find the smallest one
#include <stdio.h>
int main()
{
	int num1, num2, num3, smallest;
	printf("Enter three numbers : ");
	scanf("%d%d%d", &num1 , &num2 , &num3);
	if(num1 < num2 && num1 < num3)
	{
			smallest = num1;
	}
	else if (num2< num1 && num1 < num3)	
	{
			smallest = num2;
	}
	else if (num3 < num1 && num3 < num2)
	{
		smallest = num3;
	}
	else
	{
			printf("Entry Invalid");	return;

	}
	printf("The smallest number is %d", smallest);
}
