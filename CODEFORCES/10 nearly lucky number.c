#include <stdio.h>
 
int main()
{
    long long int n;
    scanf("%lld",&n);
    
    int count=0;
    while(n>0)
    {
      int rem = n%10;
      n/=10;
      if(rem == 4 || rem == 7) count++;
      
    }
    
    (count==4 || count==7) ? printf("YES"):printf("NO");
    
    return 0;
}