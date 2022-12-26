#include <stdio.h>

void main(void)
{

	int x=10,y=20,z=30;
	
	int *p = &x;
	int *q = &y;
	int *r = &z;
	
	printf("value of x: %d\n",x);
	printf("value of y: %d\n",y);
	printf("value of z: %d\n",z);
	
	printf("value of pointer p: %d\n",p);
	printf("value of pointer q: %d\n",q);
	printf("value of pointer r: %d\n",r);
	
	printf("value of *p: %d\n",*p);
	printf("value of *q: %d\n",*q);
	printf("value of *r: %d\n",*r);
	
	printf("\n\n");
	printf("------- swapping pointers -------\n\n");
	
	r=p;
	p=q;
	q=r; //now q and r both are pointing to the same value as p 
	
	printf("\n\n");
	printf("------- after swapping pointers -------\n\n");
	
	printf("value of x: %d\n",x);
	printf("value of y: %d\n",y);
	printf("value of z: %d\n",z);
	
	printf("value of pointer p: %d\n",p);
	printf("value of pointer q: %d\n",q);
	printf("value of pointer r: %d\n",r);
	
	printf("value of *p: %d\n",*p);
	printf("value of *q: %d\n",*q);
	printf("value of *r: %d\n",*r);
}