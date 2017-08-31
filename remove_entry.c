/*remove_entry() will remove one of the entry from the database file*/
#include"database.h"
void remove_entry()
{
	FILE *fp;
	ST s;
	char *p,*q;
	int l,pos,i=0,j=1;
	fp=fopen("database","r+");
	for(l=0;fgetc(fp)!=-1;l++);            //To find size of file
	printf("\t\t\tRemove an Entry\n\n");
	printf("Enter the Roll number : ");
	scanf("%d",&s.roll);                    //input the roll number which is to be deleted
	if(pos=match(s.roll))
	{
		fseek(fp,pos,SEEK_SET);        //Move the current line indicator to start of the file
		p=malloc(l);                   
		q=malloc(LINE);
		if(!fread(p,sizeof(char),l,fp)) // Backup all data under the line to be deleted in p
                      j=0;                      //Assign 0 to j if line to be deleted is last line
		rewind(fp);                     //move current line indicator to starting of file
		while(fgets(q,LINE,fp))    //find length of the line to be deleted
		{
			sscanf(q,"%d",&x);
			if(x==s.roll)
			{ pos=strlen(q);
				break;
			}
		}
		fseek(fp,-pos,SEEK_CUR);  //current position indicator moves to begining of the line to be deleted
                if(j)                      //cheking whether the line to be deleted is last line or not
		   fputs(p,fp);             //put backup data to file 

		fseek(fp,-1,SEEK_CUR);    
		l=ftell(fp);             //l gives the current size of file
		rewind(fp);
		fread(p,sizeof(char),l,fp); //Backup the current file data in to string p
		fclose(fp);

		fp=fopen("database","w");   //Open the file in write mode so that all data especially the unwanted line is gone 
		fputs(p,fp);                //put all backup data to file
		fclose(fp);
		printf("\n\n\tSuccess");
	}
	else
		printf("\n\tData Not Found\n");
	free(p);
	free(q);
	printf("\n\nPress any key to go back : ");
	scanf(" %c",&ch);
}

