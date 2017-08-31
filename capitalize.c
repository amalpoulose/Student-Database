#include"database.h"
void capitalize()
{
        FILE *fp;
        fp=fopen("database","r+");
        int check=0;
        while((ch=fgetc(fp))!=-1)               //Loop execute till end of file fgetc read one character from file and assign to ch
        {
                                                // k is a veriable to check whether file is empyty of not
                if(ch==' '|| ch=='\n')          // if a space or rnd of file is read then the variable check is cleared and next character is fetched 
                {     check=0;continue;}
                if(check==0)                    //if check is zero the charcter in ch is the first letter of a word oherwise else part executed
                {
                        if(ch>=97 && ch<=122){  // check whether the letter is lower case 
                                fseek(fp,-1,SEEK_CUR); //Move current position indicator one position backward
                                fputc((ch-32),fp);}    //Make the lower case letter to upper case
                }
                check=1;
        }
       fclose(fp);
}

