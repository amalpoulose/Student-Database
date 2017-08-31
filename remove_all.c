/* remove_all() will completely remove all data from the database file
   It simply opens the file in write mode then entire data will be gone*/
#include"database.h"
void remove_all()
{
	FILE *fp;
        char ch1;
        while(1)
        {
	system("clear");
        printf("\t\t\tRemove All Data\n\n\n");
        printf("\n\n\n\n\n\n\n\n\nDo you wish to continue?(Y/N) : ");
        scanf(" %c",&ch1);
        if(ch1=='Y' || ch1=='y')
        {
	fp=fopen("database","w");
	system("clear");
	printf("\n\n\n\nRemoving all......\n\n\n");
	sleep(1);
	system("clear");
	fclose(fp);
	printf("\t\t\tSuccess");
	printf("\n\n\n\n\n\n\n\n\nPress any key to go back : ");
	scanf(" %c",&ch);
        }
        else if(ch1=='N'||ch1=='n')
             goto LG;
       }
       LG:;
 }
