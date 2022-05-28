// Write a program to input three numbers and find the middle one
#include<stdio.h>
int main()
{
	int num1,num2,num3,middle,bigone;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2){
		bigone = num1;
	} else bigone = num2;
	if(bigone < num3){
		middle = bigone;
	} else middle = num3;
	printf("The middle in three numbers is : %d", middle);
	return(0);
	
}