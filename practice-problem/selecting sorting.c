

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
   
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(int i=0;i<n;i++)
    {
        int min=a[i];
        int minIdnex=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<min)
            {
               min=a[j];
               minIdnex=j;
            }
        }
        a[minIdnex]=a[i];
        a[i]=min;
    }
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);

    return 0;
}