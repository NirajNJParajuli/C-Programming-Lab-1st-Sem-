// WAP to convert temperature in celcius to fahrenheit
#include<stdio.h>
int main()
{
	float celcius, fahrenheit;
	printf("Enter temperature in celcius: ");
	scanf("%f",&celcius);
	fahrenheit = 1.8 * celcius + 32;
	printf("%f in celcius = %f in fahrenheit", celcius, fahrenheit);

}