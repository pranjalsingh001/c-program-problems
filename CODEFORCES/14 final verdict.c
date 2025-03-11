#include <stdio.h>
 
 
int main() {
    
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d", &n ,&k);
        
        int a[n];
        for(int i=0;i<n;i++)
          scanf("%d",&a[i]);
        int sum=0;  
        for(int i=0;i<n;i++)
        {
            sum +=a[i];
            
        }
        
        if(sum == n * k)
        printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
}