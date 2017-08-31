#include"database.h"
int match(int r)
{
	FILE *fp;
        ST *s;
        s=malloc(sizeof(ST));
	int  i,pos;
	fp=fopen("database","r");
	while((i=fscanf(fp,"%d %s %f\n",&s->roll,s->name,&s->mark))!=-1)
		if(r==s->roll)
		{
			pos=ftell(fp); fclose(fp); return pos;}
        free(s);
	fclose(fp);
        return 0;
}      
