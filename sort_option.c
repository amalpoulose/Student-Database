#include"database.h"
int opt_sort()
{
	FILE *fp;
	char cho; 
	while(1)
	{
		system("clear");
		printf("\t\t\tSort Database\n\n");
		printf("1. Based on roll number\n2. Based on Name\n3. Based on mark\n4. Go back");
		printf("\n\nEnter the chocie : ");
		scanf(" %c",&cho);
		switch(cho)
		{
			case '1': system("clear");
				  roll_sort();
				  break;
			case '2':system("clear");
				 name_sort();
				 break;
			case '3':system("clear");
				 mark_sort();
				 break;
			case '4': return;
			default :
				  printf("Invalid Choice\n");
		}
	}
}

