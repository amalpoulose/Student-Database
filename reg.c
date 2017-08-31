#include"database.h"
void reg()
{
	char j;
	FILE *fp;
	ST *s;
        s=malloc(sizeof(ST));
	fp=fopen("database","r+");
	system("clear");
	printf("\t\t New Candidate Registration \n\n");
	printf("enter the roll number : ");
	scanf("%d",&s->roll);
	printf("enter name : ");
	scanf("%s",s->name);
	printf("enter the total marks : ");
	scanf("%f",&s->mark);
	fseek(fp,0,SEEK_END);
	if(!match(s->roll)){
		fprintf(fp,"%d %s %f\n",s->roll,s->name,s->mark);
		printf("\n\n\tSuccess\n");}
	else
		printf("\n\n The candidate already exists\n");
	fclose(fp);
        free(s);
	printf("\npress any key to return back ");
	scanf(" %c",&j); 
}
