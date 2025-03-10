#include <stdio.h>
#include <math.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
   
   for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
      
      int sum=0;
      
    for(int i=0;i<=n;i++)
    {
        sum+=a[i];
        a[i]= sum;
    }
    
    for(int i=0;i<=n;i++)
    printf("%d ",a[i]);
   
 
    return 0;
}