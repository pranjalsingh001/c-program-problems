#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int n;
        scanf("%d\n",&n);
         n%3==1 ? printf("YES") : printf("NO");
    }
    
    

    return 0;
}
