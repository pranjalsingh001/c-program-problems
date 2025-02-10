#include<stdio.h>
int main() {
    int t, a , b , c ;
    scanf("%d", &t);
    
    for (int i = 1; i<=t ; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        
        double avg=(a+b)/2.0;
        
        if (avg>c)
         printf("YES\n");
        else
          printf("NO\n");   
    }
    
    
    
    return 0;
}
