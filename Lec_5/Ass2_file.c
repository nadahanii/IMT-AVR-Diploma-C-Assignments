#include <stdio.h> 


//global arrays to perform sorting on them 
int class_one[10] = {22,50,60,42,95,77,80,63,41,50};
int class_two[10] = {60,43,88,71,56,35,68,70,55,20};
int class_three[10] = {98,53,49,72,66,41,67,83,54,92};


//implementation
int get_passed(){
	int sum=0;
	
	for(int i=0;i<10;i++){
		if(class_one[i] >= 50){
			sum+=1;
		}
		if(class_two[i] >= 50){
			sum+=1;
		}
		if(class_three[i] >= 50){
			sum+=1;
		}
	}
	return sum;
}

int get_failed(){
	int sum=0;
	
	for(int i=0;i<10;i++){
		if(class_one[i] < 50){
			sum+=1;
		}
		if(class_two[i] < 50){
			sum+=1;
		}
		if(class_three[i] < 50){
			sum+=1;
		}
	}
	return sum;
}

int get_max_grade(){
	
	if((class_one[9] > class_two[9]) && (class_one[9] > class_three[9]))
		return class_one[9];
	
	else if((class_two[9] > class_one[9]) && (class_two[9] > class_three[9]))
		return class_two[9];
	
	else
		return class_three[9];
}

int get_min_grade(){
	if((class_one[0] < class_two[0]) && (class_one[0] < class_three[0]))
		return class_one[0];
	
	else if((class_two[0] < class_one[0]) && (class_two[0] < class_three[0]))
		return class_two[0];
	
	else
		return class_three[0];
}

int get_avg_grade(){
	int sum=0;
	for(int i=0 ;i<10 ;i++){
		sum = sum+(class_one[i]+class_two[i]+class_three[i]);
	}
	
	return sum/30;
}

void selection_sort(){
	
	//for class one:
	for(int i=0;i<10;i++){
		
		int temp=class_one[i];
		int index=i;
		for(int j=i+1;j<10;j++){
			
			if(temp > class_one[j]){
				temp = class_one[j];
				index = j;
			}
		}
		
		temp = class_one[i];
		class_one[i] = class_one[index];
		class_one[index] = temp;
	}

	
	//for class two:
	for(int i=0;i<10;i++){
		
		int temp=class_two[i];
		int index=i;
		for(int j=i+1;j<10;j++){
			
			if(temp > class_two[j]){
				temp = class_two[j];
				index = j;
			}
		}
		
		temp = class_two[i];
		class_two[i] = class_two[index];
		class_two[index] = temp;
	}

	
	//for class three:
	for(int i=0;i<10;i++){
		
		int temp=class_three[i];
		int index=i;
		for(int j=i+1;j<10;j++){
			
			if(temp > class_three[j]){
				temp = class_three[j];
				index = j;
			}
		}
		
		temp = class_three[i];
		class_three[i] = class_three[index];
		class_three[index] = temp;
	}
	
}