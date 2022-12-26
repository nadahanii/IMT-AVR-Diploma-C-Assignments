#include <stdio.h>

//prototype
void bubble_sort(int *arr_ptr);

void main(void)
{
	int arr[10] = {5,30,2,9,11,62,42,7,34,22};
	
	//calling
	bubble_sort(arr);
	
	for(int i =0;i<10;i++){
		printf("%d\n",arr[i]);
	}
	
}

//implementation
void bubble_sort(int *arr_ptr){
	
	for(int i=0;i<10;i++){
		
		for(int j=0;j<9-i;j++){
			
			if(arr_ptr[j]>arr_ptr[j+1]){
				int swap = arr_ptr[j];
				arr_ptr[j] = arr_ptr[j+1];
				arr_ptr[j+1] = swap;
			}
		}
	}
}