#include <stdio.h>

int main() {
    int t;
    scanf("%d\n",&t);
    
   for(int i=1;i<=t;i++)
   {
       int n,k;
       scanf("%d %d\n",&n,&k);
       
       for(int j=1;j<=n;j++)
       {
           
           int a;
           scanf("%d",&a);
           
          if(k>=a)
          {
            printf("1");
            k -= a;
            
          }
          else printf("0");
       }
       printf("\n");
   }
    return 0;
}

