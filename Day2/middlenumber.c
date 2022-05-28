// WAP to find the middle number among 3
#include <stdio.h>
int main()
{
	int num1, num2, num3, middle;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&num1, &num2, &num3);
	if(num1 > num3 && num1 < num2 || num1 > num2 && num1 < num3)
	{
		middle = num1;
	}
	else if (num2 < num1 && num2 > num3 || num2 > num1 && num2 < num3)
	{
		middle = num2;
	}
	else if (num3 > num1 && num3 < num2 || num3 < num1 && num3 > num2)
	{
		middle = num3;
	}
	else
	{
		printf("All are equal.");
		return;
		
		
	}
	printf("The middle number is %d.",middle);
}