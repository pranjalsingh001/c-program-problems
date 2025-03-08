#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int n;
         scanf("%d",&n);
         
        int num=((n/15)+1)* 3;
        
        if(n%15==1)
        printf("%d\n",num - 1);
        else if(n%15==0)
        printf("%d\n",num - 2);
        else 
        printf("%d\n",num );
        
        
    }
    return 0;
}