#include"database.h"
void roll_sort()
{     
	FILE *fp;
	int i,j,l;
	ST **p,*temp;
	l=line_count();
	p=malloc(sizeof(ST *)*l);
	allocate(&p);	
	printf("\t\t\tSorting By Rollnumber\n\n");
	if(l)
	{
		for(i=0;i<l-1;i++)
			for(j=i+1;j<l;j++)
				if(p[i]->roll>p[j]->roll)
				{ 
                                 temp=p[i];
                                 p[i]=p[j];
                                 p[j]=temp;
				}
		put_file(p);
                free(p);p=NULL;
                free(temp);temp=NULL;
		printf("\n\n\tSuccess");
	}
	else
		printf("\n\n\tFailed");
	printf("\n\nPress any key to go back : ");
	scanf(" %c",&ch);
}


