#include<stdio.h>
#define N 10
void minMax(int a[],int len,int *min,int *max)
{
    *min=*max=a[0];
    int i;
    for(i=1;i<len;i++)
    {
        if(a[i]>*max)
            *max=a[i];
        if(a[i]<*min)
            *min=a[i];
    }
}
int main()
{
   int a[N],i,min,max;
   printf("Enter an array elements\n");
    for(i = 0; i < N; i++)
        {
      scanf("%d", &a[i]);
      }

   int len=sizeof(a)/sizeof(a[0]);
   minMax(a,len,&min,&max);
   printf("Minimum value is :%d\nMax value is :%d",min,max);
   return 0;
}
