#include"database.h"
int line_count()
{ 
	FILE *fp;
	int line_count=0;
	char *s;
	s=malloc(SIZE);
	fp=fopen("database","r");
	while(fgets(s,SIZE,fp))
		line_count++;
	fclose(fp);
	free(s);
	return(line_count);
}





