#include <stdio.h>
#include <stdlib.h>
void main()
{
 int firstno,secondno,*ptr1=&firstno,*ptr2=&secondno;
 printf(" Input the first number : ");
 scanf("%d", ptr1);
 printf(" Input the second  number : ");
 scanf("%d", ptr2);
 if(*ptr1>*ptr2)
 {
  printf("\n%d is the maximum number",*ptr1);
 }
 else
 {
  printf("\n %d is the maximum number",*ptr2);
 }

}
