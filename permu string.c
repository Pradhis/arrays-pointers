#include <stdio.h>
#include <string.h>
void poschange(char *ch1, char *ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void permutation(char *cht, int startno, int endno)
{
   int i;
   if (startno == endno)
     printf("%s  ", cht);
   else
   {
       for (i = startno; i <= endno; i++)
       {
          poschange((cht+startno), (cht+i));
          permutation(cht, startno+1, endno);
          poschange((cht+startno), (cht+i));
       }
   }
}

int main()
{
    char str[] = "abcd";
    int n = strlen(str);
    printf("permutations of the string are : \n");
    permutation(str, 0, n-1);
    printf("\n\n");
    return 0;
}
