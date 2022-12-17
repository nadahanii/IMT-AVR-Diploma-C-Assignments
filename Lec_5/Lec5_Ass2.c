#include <stdio.h>



//prototype
int get_passed();
int get_failed();
int get_max_grade();
int get_min_grade();
int get_avg_grade();
void selection_sort();

void main()
{
	//function calls
	selection_sort();
	printf("\nNumber of passed students = %d\n",get_passed());
	printf("Number of failed students = %d\n",get_failed());
	printf("Highest grade = %d\n",get_max_grade());
	printf("Lowest grade = %d\n",get_min_grade());
	printf("Average grade = %d\n",get_avg_grade());
	
}

