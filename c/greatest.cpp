// Write a program to input two numbers and print the greatest one
#include<stdio.h>
int main()
{
	int num1, num2, greatest;
	printf("Enter num1 : ");
	scanf("%d",&num1);
	printf("Enter num2 : ");
	scanf("%d",&num2);
	if(num1 > num2){
		greatest = num1;
	} else {
	greatest = num2;
	}
	printf("The greatest number is %d.",greatest);
	return(0);
}