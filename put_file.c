#include"database.h"
void put_file(ST **p)
{
	FILE *fp;
	int i,l;
	l=line_count();
	fp=fopen("database","w+");
	for(i=0;i<l;i++)
	{
		fprintf(fp,"%d %s %f\n",p[i]->roll,p[i]->name,p[i]->mark);
	}
	fclose(fp);
}

