#include <stdio.h>

//prototypes
void print_calculator_guide();
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int and(int a, int b);
int or(int a, int b);
int not(int a);
int xor(int a, int b);
int remainder_of_division(int a, int b);
int increment(int a);
int decrement(int a);




void main()
{
	int choice=0,x=0,y=0;
	//functions calling
	print_calculator_guide();
	printf("Enter the number of the operation you want to perform: ");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			printf("Enter the first number: ");
			scanf("%d",&x);
			printf("Enter the second number: ");
			scanf("%d",&y);
			printf(" %d + %d = %d\n",x,y,add(x,y));
			break;
		
		case 2:
			printf("Enter the first number: ");
			scanf("%d",&x);
			printf("Enter the second number: ");
			scanf("%d",&y);
			printf(" %d - %d = %d\n",x,y,subtract(x,y));
			break;
			
		case 3:
			printf("Enter the first number: ");
			scanf("%d",&x);
			printf("Enter the second number: ");
			scanf("%d",&y);
			printf(" %d * %d = %d\n",x,y,multiply(x,y));
			break;
			
		case 4:
			printf("Enter the first number: ");
			scanf("%d",&x);
			printf("Enter the second number: ");
			scanf("%d",&y);
			printf(" %d / %d = %.2f\n",x,y,divide(x,y));
			break;
			
		case 5:
			printf("Enter the first number: ");
			scanf("%d",&x);
			printf("Enter the second number: ");
			scanf("%d",&y);
			printf(" %d and %d = %d\n",x,y,and(x,y));
			break;
			
		case 6:
			printf("Enter the first number: ");
			scanf("%d",&x);
			printf("Enter the second number: ");
			scanf("%d",&y);
			printf(" %d or %d = %d\n",x,y,or(x,y));
			break;
			
		case 7:
			printf("Enter the number: ");
			scanf("%d",&x);
			printf(" ~ %d = %d\n",x,not(x));
			break;
			
		case 8:
			printf("Enter the first number: ");
			scanf("%d",&x);
			printf("Enter the second number: ");
			scanf("%d",&y);
			printf(" %d xor %d = %d\n",x,y,xor(x,y));
			break;
			
		case 9:
			printf("Enter the first number: ");
			scanf("%d",&x);
			printf("Enter the second number: ");
			scanf("%d",&y);
			printf(" remainder of %d / %d = %d\n",x,y,remainder_of_division(x,y));
			break;
			
		case 10:
			printf("Enter the number: ");
			scanf("%d",&x);
			printf(" %d + 1 = %d\n",x,increment(x));
			break;
			
		case 11:
			printf("Enter the number: ");
			scanf("%d",&x);
			printf(" %d - 1 = %d\n",x,decrement(x));
			break;
			
		default:
			printf("\ninvalid option was chosen.\n");
	}
	
	
	
}

//implementation

void print_calculator_guide()
{
	printf("\n1- Add two numbers (needs two operands)\n");
	printf("2- Subtract two numbers (needs two operands)\n");
	printf("3- Multiply two numbers (needs two operands)\n");
	printf("4- Divide two numbers (needs two operands)\n");
	printf("5- And two numbers (needs two operands)\n");
	printf("6- Or two numbers (needs two operands)\n");
	printf("7- Not a number (needs 1 operand)\n");
	printf("8- Xor two numbers (needs two operands)\n");
	printf("9- Remainder from dividing two numbers (needs two operands)\n");
	printf("10- Increment a number (needs one operand)\n");
	printf("11- Decrement a number (needs one operand)\n\n");
}

int add(int a, int b){
	return a+b;
}

int subtract(int a, int b){
	return a-b;
}

int multiply(int a, int b){
	return a*b;
}

float divide(int a, int b){
	return (a/(b*1.0)); //to deal with float results from division
}

int and(int a, int b){
	return a&b;
}

int or(int a, int b){
	return a|b;
}

int not(int a){
	return ~a;
}

int xor(int a, int b){
	return a^b;
}

int remainder_of_division(int a, int b){
	return a%b;
}

int increment(int a){
	return ++a;
}

int decrement(int a){
	return --a;
}