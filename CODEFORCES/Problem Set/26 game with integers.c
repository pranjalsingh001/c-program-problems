#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        int x;
        scanf("%d",&x);
        
        if(x%3==1 || x%3==2)
            printf("First\n");
        
        else
            printf("Second\n");
        
    }
    return 0;
}