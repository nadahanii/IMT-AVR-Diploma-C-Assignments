#include <stdio.h>

void main()
{
	int a,b;
	
	//taking inputs
	printf("please enter number a: ");
	scanf("%d",&a);
	printf("please enter number b: ");
	scanf("%d",&b);
	
	//printing arithmetic and bit-wise operations on entered values
	printf("a + b = %d",a+b);
	printf("\na - b = %d",a-b);
	printf("\na & b = %d",a&b);
	printf("\na | b = %d",a|b);
	printf("\na ^ b = %d",a^b);
	
	
}