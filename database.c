/*                 *******************************************STUDENT DATABASE********************************************
BY - Amal Poulose  amalpoulose95@hotmail.com   +919446047003
*/
#include "database.h"	
int main(void)
{
	FILE *fp;
	fp=fopen("database","a+");
	fclose(fp);
	char choice,cho;
	while(1)
	{       start:
		system("clear");
		printf("\t\tStudent Database\n\n");
		printf("1. New Entry\n2. View Entry\n3. Sort\n4. Modify\n5. Remove\n6. Remove all\n7. View list\n8. Exit");
		printf("\n\nEnter the chocie : ");
		scanf(" %c",&choice);
		system("clear");
		switch(choice)
		{
			case '1':reg();
				 break;
			case '2':view();
				 break;
			case '3': opt_sort();
				  break;
			case '4': modify();
				  break;
			case '5':remove_entry();
				 break;
			case '6':remove_all();
				 break;
			case '7':list();
				 break;
			case '8':return;
			default:
				 printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\tInvalid Choice\n");
				 sleep(2);
		}
	}
}
