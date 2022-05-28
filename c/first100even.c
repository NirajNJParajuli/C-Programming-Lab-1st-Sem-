//Write a program to print first 100 even numbers and also display the sum
#include<stdio.h>
int main()
{
	int i , counter = 1 , sum = 0;
	printf("The first 100 even numbers are : ");
	for(i = 1; counter <= 100; i++ )
	{
		if(i%2==0)
		{
			printf("%d ", i);
			counter++;
			sum = sum+i;
		}
	}
	printf("The sum of first 100 even numbers is %d", sum);
	return(0);
}