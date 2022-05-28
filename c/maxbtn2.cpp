//Write a program to find the maximum number among two entered by user
#include<stdio.h>
int main()
{
	int num1, num2, maximum;
	printf("Enter Num1 : ");
	scanf("%d", &num1);
	printf("Enter Num2 : ");
	scanf("%d", num2);
	if(num1>num2){
		maximum = num1;
	printf("The maximum number between %d and %d is %d." , num1,num2,maximum);
	} 
	else  
			maximum = num2;
				printf("The maximum number between %d and %d is %d." , num1,num2,maximum);

	
	return(0);

}