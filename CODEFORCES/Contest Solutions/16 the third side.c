#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int n;
         scanf("%d",&n);
        int a[n];
        for(int i = 0 ; i<n ; i++)
        scanf("%d",&a[i]);
        
        int sum = 0;
         for(int i = 0 ; i<n ; i++)
         {
            sum +=a[i]; 
         }
         
         int result = sum - (n-1);
         printf("%d\n",result);
    }
    return 0;
}