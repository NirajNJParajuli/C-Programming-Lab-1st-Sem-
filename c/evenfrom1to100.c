// Write a program to print all the even numbers from 1 to N.take N from user as an input. Also display the sum
#include<stdio.h>
int main()
{
	int i , n , sum = 0;
	printf("Enter the value of N : ");
	scanf("%d", &n);
	printf("The even numbers between 1 and %d are : ", n);
	for(i = 1 ; i <=n ; i++)
	{
		if(i%2==0)
		{
			printf("%d ", i,);
			sum = sum+i;
		}
	}
	printf("The sum of even numbers from 1 to %d is %d", n,sum);
	return(0);
	
}