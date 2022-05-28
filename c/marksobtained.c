// Write a program to input name and marks in three subjects.
// Display the entire details along with total,percentage and division.
// if the student has passed in all three subjects (pass mark = 45)

#include<stdio.h>
int main()
{
	int java , python , kotlin;
	char division;
	printf("Enter 3 marks : ");
	scanf("%d%d%d", &java, &python , &kotlin);
	if(java || python || kotlin > 100){
		printf("Invalid marks");
	}
	if(java || python || kotlin < 45 ){
		printf("Fail");
	}
	int obtained = java + python + kotlin;
	int total = 300;
	double percentage = (obtained/total)*100;
	if(percentage >= 80){
		division = "Distinction" ;
	}
	else if(percentage < 80 && percentage >=
	 60){
		division = "1st division";
	}
	else if(percentage < 60 && percentage >= 50 ){
		division = "2nd division";
		
	} else if(percentage < 50 && percentage >= 45){
		division = "3rd division";
	}else 
	division = "fail";
	printf("Percentage = %d\n", percentage);
	printf("Divison = %d \n", division);
	
}

