#include <stdio.h>

//prototypes
int get_max(int a, int b, int c, int d);
int get_min(int a, int b, int c, int d);

void main()
{
	int a,b,c,d;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("Enter third number: ");
	scanf("%d",&c);
	printf("Enter fourth number: ");
	scanf("%d",&d);
	
	//functions calling
	int max = get_max(a,b,c,d);
	int min = get_min(a,b,c,d);
	
	printf("\nThe maximum number is: %d\n",max);
	printf("The minimum number is: %d\n",min);
	
}

//implementation
int get_max(int a, int b, int c, int d)
{
	if(a>b && a>c && a>d)
		return a;
	
	else if(b>a && b>c && b>d)
		return b;
	
	else if(c>a && c>b && c>d)
		return c;
	
	else
		return d;
}

int get_min(int a, int b, int c, int d)
{
	if(a<b && a<c && a<d)
		return a;
	
	else if(b<a && b<c && b<d)
		return b;
	
	else if(c<a && c<b && c<d)
		return c;
	
	else
		return d;
}