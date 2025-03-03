#include <stdio.h>

int main() {
    
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        
        int a[n] ;
        for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
        
        int count = 0;
    
        for (int i = 0; i < n - count - 1; i++)
        {
            if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 != 0 && a[i + 1] % 2 != 0)) 
            {
                a[i] *= a[i + 1];
                
                for (int j = i + 1; j < n - count - 1; j++) 
                    a[j] = a[j + 1];
                    
                count++; 
                i = -1; 
            }
        }
    
        
            printf("%d\n", count);
    }

    return 0;
}
