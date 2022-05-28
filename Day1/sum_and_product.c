//WAP to sum and product two numbers
#include<stdio.h>
int main()
{
	int num1, num2, sum, product;
	printf("Enter two numbers: ");
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	product = num1 * num2;
	printf("Sum = %d and Product = %d", sum , product);
}