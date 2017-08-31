#include"database.h"
void list()
{
	FILE *fp;
	fp=fopen("database","r");
	ST **p;
	int l,i;
	l=line_count();
	p=malloc(sizeof(ST *)*l);
	allocate(&p);
	printf("\t\t\tView List\n\n");
	if(l==0)
		printf("\tNo Data\n");
	else{
		printf("      Roll No:\t    name         mark\n\n");
		for(i=0;i<l;i++)
		{
			printf("\t%03d\t%-15s\t%4.2f\n",p[i]->roll,p[i]->name,p[i]->mark);
		}
	}
        free(p);p=NULL;
	printf("\n\npress a key to go back : ");
	scanf(" %c",&ch);
}

