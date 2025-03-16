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
          
        
        int min= a[0];  
        int flag = 1;
        for (int i = 1; i < n; i++) 
        {
            if (a[i] < a[i - 1]) 
            {
                flag = 0; 
                break;
            }
        } 
          
        if (k >= 2) printf("YES\n");
        else if (flag)printf("YES\n");
        else printf("NO\n");
        
    }
    
    
    return 0;
}