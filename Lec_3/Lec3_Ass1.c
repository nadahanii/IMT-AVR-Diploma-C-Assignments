#include <stdio.h>

void main()
{
	int num1,num2;
	
	while(1) //infinite loop
	{
		printf("Please enter the first number ");
		scanf("%d",&num1);
		printf("Please enter the second number ");
		scanf("%d",&num2);
	
		printf("The result is %d\n",num1+num2);
	}
}