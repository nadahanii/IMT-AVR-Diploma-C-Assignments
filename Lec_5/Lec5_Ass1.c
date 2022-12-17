#include <stdio.h>

int arr[10]; //global to perform bubble sort on the array

//prototype
void bubble_sort();

void main()
{
	//input
	for(int i=0;i<10;i++){
		printf("Enter number %d:",i);
		scanf("%d",&arr[i]);
	}
	
	bubble_sort();//function call
	
	printf("\nThe minimum number is: %d\n",arr[0]);
	printf("The maximum number is: %d\n",arr[9]);
	
}

//implementation
void bubble_sort(){
	for(int i=0;i<10;i++){
		
		for(int j=0;j<9;j++){
			
			if(arr[j] > arr[j+1]){
				
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}