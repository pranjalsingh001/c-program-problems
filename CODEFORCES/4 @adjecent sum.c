#include <stdio.h>


int main() {
    
   int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int x,y;
         scanf("%d %d",&x,&y);
        
        if(x+1==y)printf("Yes\n");
        else if (x-y +1>=0 && (x-y+1)%9==0)printf("Yes\n");
        else printf("No\n");  
    }
    return 0;
}
