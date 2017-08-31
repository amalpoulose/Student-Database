#include"database.h"
void allocate(ST ***p)
{
	FILE *fp;
	int l,i;
	ST *temp;
	l=line_count();
	for(i=0;i<l;i++){
    	      p[0][i]=malloc(sizeof(ST *));
        }         
                
	i=0;
	fp=fopen("database","r");
        temp = malloc(sizeof(ST));
	while(fscanf(fp,"%d %s %f",&temp->roll,temp->name,&temp->mark)!=-1)
         { 
            p[0][i]=temp;i++;
            temp = malloc(sizeof(ST));
	 }
        temp=NULL;
	fclose(fp);
}



