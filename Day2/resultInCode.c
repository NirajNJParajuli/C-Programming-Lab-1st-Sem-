// Name and marks in 3 subjects
// total, percentage , grade (pass mark = 45)
#include<stdio.h>
int main()
{
	int marksInJava, marksInPython , marksInKotlin;
	float percentage;
	char name[50];
	
	printf("Enter your first name: ");
	scanf("%s", &name);
	printf("Enter your marks in Java, Python and C : ");
	scanf("%d%d%d", &marksInJava, &marksInPython, &marksInKotlin);
	
	if (marksInJava > 45 && marksInPython > 45 && marksInKotlin > 45)
	{
		printf("Name \t\t Java \t Python  Kotlin  Percentage  Grade \n");
		percentage = ((marksInJava + marksInPython + marksInKotlin) * 0.33 );
		
		if (percentage >= 90)
		{
			printf("%s \t\t %d \t %d \t %d \t %f \t A+", name , marksInJava, marksInPython , marksInKotlin, percentage);
		}
		else if (percentage >=80)
		{
			printf("%s \t\t %d \t %d \t %d \t %f \t A", name , marksInJava, marksInPython , marksInKotlin, percentage);
		}
		else if (percentage >= 70)
		{
						printf("%s \t\t %d \t %d \t %d \t %f \t B+", name , marksInJava, marksInPython , marksInKotlin, percentage);

		}
		else if (percentage >= 60)
		{
						printf("%s \t\t %d \t %d \t %d \t %f \t B", name , marksInJava, marksInPython , marksInKotlin, percentage);

		}
		else 
		{
						printf("%s \t\t %d \t %d \t %d \t %f \t C", name , marksInJava, marksInPython , marksInKotlin, percentage);

		}
	}
	else
	{
		printf("Name \t\t Remarks \n");
		printf("%s \t\t Failed", name);
	}
}