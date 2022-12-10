#include <stdio.h>

void main()
{
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,look_for;
	int c=1;
	
	///taking inputs
	printf("Enter Number %d: ",c);
	scanf("%d",&num1);
	c++;
	
	printf("Enter Number %d: ",c);
	scanf("%d",&num2);
	c++;
	
	printf("Enter Number %d: ",c);
	scanf("%d",&num3);
	c++;
	
	printf("Enter Number %d: ",c);
	scanf("%d",&num4);
	c++;
	
	printf("Enter Number %d: ",c);
	scanf("%d",&num5);
	c++;
	
	printf("Enter Number %d: ",c);
	scanf("%d",&num6);
	c++;
	
	printf("Enter Number %d: ",c);
	scanf("%d",&num7);
	c++;
	
	printf("Enter Number %d: ",c);
	scanf("%d",&num8);
	c++;
	
	printf("Enter Number %d: ",c);
	scanf("%d",&num9);
	c++;
	
	printf("Enter Number %d: ",c);
	scanf("%d",&num10);
	
	///taking number to search for
	printf("Enter the value to search: ");
	scanf("%d",&look_for);
	
	///linear search using if and else if statements
	if(look_for==num1)
		printf("Value does exist at element number 1");
	
	else if(look_for==num2)
		printf("Value does exist at element number 2");
	
	else if(look_for==num3)
		printf("Value does exist at element number 3");
	
	else if(look_for==num4)
		printf("Value does exist at element number 4");
	
	else if(look_for==num5)
		printf("Value does exist at element number 5");
	
	else if(look_for==num6)
		printf("Value does exist at element number 6");
	
	else if(look_for==num7)
		printf("Value does exist at element number 7");
	
	else if(look_for==num8)
		printf("Value does exist at element number 8");
	
	else if(look_for==num9)
		printf("Value does exist at element number 9");
	
	else if(look_for==num10)
		printf("Value does exist at element number 10");
	
	else
		printf("Number does not exist");
	
	
	
}