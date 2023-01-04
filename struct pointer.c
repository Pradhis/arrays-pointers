#include <stdio.h>
struct Employee
{
char *name;
char secname[20];
int mob;
}
employee={"Jaya Pradhisha","India\n",8248931037},*pt=&employee;

int main()
{
    printf(" %s from %s \n\n",pt->name,(*pt).secname);
	return 0;
}

