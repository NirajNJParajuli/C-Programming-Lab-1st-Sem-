// WAP to find area and perimeter of rectangle (in float)
#include <stdio.h>
int main()
{
	float length, breadth, area, perimeter;
	printf("Enter length: ");
	scanf("%f",&length);
	printf("Enter Breadth: ");
	scanf("%f",&breadth);
	area = length * breadth;
	perimeter = 2 * (length + breadth);
	printf("The area and perimeter of the rectangle is %f and %f respectively",area, perimeter);
	
	
}