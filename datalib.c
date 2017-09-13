/*                 *******************************************STUDENT DATABASE********************************************
BY - Amal Poulose  amalpoulose95@hotmail.com   +919446047003
*/
#include<dlfcn.h>
#include "database.h"	
int main(void)
{
	FILE *fp;
	fp=fopen("database","a+");
	fclose(fp);
        void (*p)(),*handler;
	char choice,cho;
	while(1)
	{       start:
		system("clear");
		printf("\t\tStudent Database\n\n");
		printf("1. New Entry\n2. View Entry\n3. Sort\n4. Modify\n5. Remove\n6. Remove all\n7. View list\n8. Exit");
		printf("\n\nEnter the chocie : ");
		scanf(" %c",&choice);
		system("clear");
		switch(choice)
		{
			case '1':
                                 handler=dlopen("./libst.so",RTLD_LAZY);
                                 if(!handler)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 p=dlsym(handler,"reg");
                                 if(!p)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 (*p)();
                                 dlclose(handler);
				 break;
			case '2':
                                 handler=dlopen("./libst.so",RTLD_LAZY);
                                 if(!handler)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 p=dlsym(handler,"view");
                                 if(!p)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 (*p)();
                                 dlclose(handler);
				 break;
			case '3':
                                 handler=dlopen("./libst.so",RTLD_LAZY);
                                 if(!handler)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 p=dlsym(handler,"opt_sort");
                                 if(!p)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 (*p)();
                                 dlclose(handler);
				 break;
			case '4':
                                 handler=dlopen("./libst.so",RTLD_LAZY);
                                 if(!handler)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 p=dlsym(handler,"modify");
                                 if(!p)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 (*p)();
                                 dlclose(handler);
				 break;
			case '5':
                                 handler=dlopen("./libst.so",RTLD_LAZY);
                                 if(!handler)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 p=dlsym(handler,"remove_entry");
                                 if(!p)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 (*p)();
                                 dlclose(handler);
				 break;
			case '6':
                                 handler=dlopen("./libst.so",RTLD_LAZY);
                                 if(!handler)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 p=dlsym(handler,"remove_all");
                                 if(!p)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 (*p)();
                                 dlclose(handler);
				 break;
			case '7':
                                 handler=dlopen("./libst.so",RTLD_LAZY);
                                 if(!handler)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 p=dlsym(handler,"list");
                                 if(!p)
                                  {
				    printf("%s",dlerror());
                                    return;
				  }
                                 (*p)();
                                 dlclose(handler);
				 break;
			case '8':return;
			default:
				 printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\tInvalid Choice\n");
				 sleep(2);
		}
	}
}
