#include <stdio.h>
 
int main() {
    int t;
    scanf("%d",&t);
    
  
    
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        
        
       while(n%2==0) n/=2;
        
        n>1 ? printf("YES\n"):printf("NO\n");
    }
    
 
    return 0;
}