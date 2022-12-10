#include <stdio.h>

void main()
{
	int id,password;
	int correct_id=12,correct_password=1234;
	
	printf("Please enter your ID: ");
	scanf("%d",&id);
	
	if(id==correct_id)
	{
		printf("Please enter your password: ");
		scanf("%d",&password);
		
		if(password==correct_password)
		{
			printf("Hello, User.");
		}
		else{
			printf("Incorrect password");
		}
	}
	
	else{
		printf("Incorrect ID");
	}
	
	
}