
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define SIZE 30
#define LINE 50

typedef struct student
{
	int roll;
	char name[SIZE];
	float mark;
}ST;

void reg();
void view();
int match(int);
int opt_sort();
int line_count();
void capitalize();
void allocate(ST ***);
void put_file(ST **);
void roll_sort();
void name_sot();
void mark_sort();
void modify();
void list();
void remove_entry();
void remove_all();

char ch;
int x;

