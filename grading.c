#include<stdio.h>
main()
{
	char grade;
	int marks;
	printf("Enter your marks,\n");
	scanf("%d",&marks);
	
	if(marks >= 85){
		printf(" grade A\n");
	}
	else
	{
		if(marks >= 70)
		{printf("grade B\n");
		}
		else
		{
			if(marks >= 55)
			{printf("grade C\n");
			}
			else
			{
				if(marks >= 40)
				{printf("grade D\n");
				}
				else{
					if(marks <40){
						printf("grade F\n");
					}
				}
			}
		}
	 } 
	
	
		
} 	



