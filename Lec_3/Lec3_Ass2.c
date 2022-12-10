#include <stdio.h>

void main()
{
	int ID,pass,password_count=0;
	//regisered users
	int ahmed_id = 1234,amr_id=5678,wael_id=9870;
	int ahmed_pass=7788,amr_pass=5566,wael_pass=1122;
	
	printf("Please enter your ID: ");
	scanf("%d",&ID);
	
	if((ID==ahmed_id) || (ID==amr_id) || (ID==wael_id)) //entered ID belongs to a registered user
	{
		printf("Please enter password: ");
		scanf("%d",&pass);
		
		while(password_count<2)
		{
			 //entered password doesn't belong to any registered user
			if((pass!=ahmed_pass) && (pass!=amr_pass) && (pass!=wael_pass))
			{
				printf("Try again: ");
				scanf("%d",&pass);
				password_count++;
			}
			
			else if(pass==ahmed_pass)
			{
				printf("Welcome Ahmed");
				break;
			}
			
			else if(pass==amr_pass)
			{
				printf("Welcome Amr");
				break;
			}
			
			else if(pass==wael_pass)
			{
				printf("Welcome Wael");
				break;
			}
			
			
		}
		
		//password entry limit was exceeded
		if(password_count>=2)
		{
			printf("Incorrect password for 3 times, no more tries");
		}
		
	}
	
	else
	{
		printf("You are not registered\n");
	}
	
}