#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) 
            scanf("%d", &a[i]);
        
        
        if (a[0] == a[n - 1])
        {
            printf("NO\n");
            continue;
        }
        
        printf("YES\n");
        printf("%d %d ", a[n - 1], a[0]);
        for (int i = 1; i < n - 1; i++) 
            printf("%d ", a[i]);
        
        printf("\n");
                
        
    }
    return 0;
}