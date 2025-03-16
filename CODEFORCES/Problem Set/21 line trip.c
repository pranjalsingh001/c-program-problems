#include <stdio.h>
#include <math.h>


int main() {
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        int n,x;
        scanf("%d %d", &n, &x);
        
        int a[n];
        for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
        
        int res= 2*(x-a[n-1]);
        int prev_element=0;
        for(int i=0; i<n; i++)
        {
            res =  fmax( res, (a[i] - prev_element) ) ;
            prev_element = a[i];
        }
        
        printf("%d\n",res);
    }

    return 0;
}
