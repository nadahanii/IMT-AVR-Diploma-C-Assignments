#include <stdio.h>

void main()
{
	int height,stars_count=1,spaces_count;
	
	printf("Please enter the height of the pyramid: ");
	scanf("%d",&height);
	
	spaces_count=height-1; //to count number of spaces left before each row of stars
	
	for(int i=0;i<height;i++)
	{
		//printing suitable spaces
		for(int k=0;k<spaces_count;k++)
		{
			printf(" ");
		}
		
		//printing stars
		for(int j=0;j<stars_count;j++)
		{
			printf("*");
		}
		printf("\n"); 
		
		//update counters
		stars_count+=2;
		spaces_count--;
	}
}