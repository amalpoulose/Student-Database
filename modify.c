#include"database.h"
void modify()
{
	FILE *fp;
	ST s;
	char *p,*q;
	int l,pos,i=0,j=1;
	fp=fopen("database","r+");
	for(l=0;fgetc(fp)!=-1;l++);
	printf("\t\t\tModify an Entry\n\n");
	printf("Enter the Roll number : ");
	scanf("%d",&s.roll);
	if(pos=match(s.roll))
	{
		fseek(fp,pos,SEEK_SET);
		p=malloc(l);
		q=malloc(LINE);
		if(!fread(p,sizeof(char),l,fp)) // Backup all data under the line to be deleted in p
                      j=0;
		rewind(fp);
		while(fgets(q,LINE,fp))
		{
			sscanf(q,"%d",&x);
			if(x==s.roll)
			{ pos=strlen(q);
				break;
			}
		}
		printf("Enter the name  : ");
		scanf("%s",s.name);
		printf("Enter the marks : ");
		scanf("%f",&s.mark);
		fseek(fp,-pos,SEEK_CUR);
                if(j){
		fprintf(fp,"%d %s %f\n",s.roll,s.name,s.mark);
		   fputs(p,fp);}
                else
		  fprintf(fp,"%d %s %f",s.roll,s.name,s.mark);
		printf("\n\n\tSuccess");
                free(p);
                free(q);
		fclose(fp);
	}
	else
		printf("\n\tData Not Found\n");
	printf("\n\nPress any key to go back : ");
	scanf(" %c",&ch);
}  

