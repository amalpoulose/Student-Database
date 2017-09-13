# Student-Database

A database made to manage student details compatible for gcc versions.

The main file is database.c

All function declarations are present in database.h.

For compiling use:
      
       make
For execution try  

     ./outfile

It will create file named database if not present and can manage details of student through it.
  ->This program manages only Name mark Roll number of student which can be extended according to need.
  
  ->This program offer adding of new data, viewing a data and view all, sorting(based on roll number,mark and name also),
     removing one or all data,modifing the data.
     
  ->All functions are created in seperate c files which is linked through makefile.
  
The Static and Dynamic libraries are also included:
   libst.a  and libst.so
To compile using Library:
  
      cc database.c libst.a        (static  library)
      cc database.c ./libst.so     (dynamic library)
To use dynamic library libst.so at runtime only use datalib.c instead of database.c, and to compile use command:
               
       cc datalib.c -ldl
to run program use : 
         
        ./a.out
