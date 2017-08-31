#include"database.h"
void view()
{
	int no,i;
	FILE *fp;
	ST *s;
        s=malloc(sizeof(ST));
	fp=fopen("database","r");
	printf("\t\t View Candidate Details \n\n");
	printf("enter the roll number : ");
	scanf("%d",&no);
	while((i=fscanf(fp,"%d %s %f\n",&s->roll,s->name,&s->mark))!=-1)
		if(no==s->roll)
		{ printf("Roll no: %d\n Name : %s\nMark :%f\n",s->roll,s->name,s->mark);
			break;
		}
	if(i==-1)
		printf("Doesn't Exist\n");  
	fclose(fp); 
        free(s);
	printf("\npress any key to return back ");
	scanf(" %c",&ch); 
}

