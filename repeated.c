#include<stdio.h>
#define N 5
int main()
{
    int a[N];
    printf("Enter elements: ");
    for(int i=0; i<N; i++)
    {
    scanf("%d",&a[i]);
    }

    int n = sizeof(a)/sizeof(a[0]);
    int seen[n];
    for(int i=0; i < n; i++)
        {
        if(seen[i] == 0)
        {
            int count = 1;

            for(int j = i+1; j < n; j++)
            {
				if(a[i] == a[j])
				{
					count++;
					seen[j] = 1;
				}
			}

            if(count > 1)
                printf("%d ",a[i]);
        }
    }
   return 0;
}
