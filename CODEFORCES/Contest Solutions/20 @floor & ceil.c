#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) 
    {
        long long x, n, m;
        scanf("%lld %lld %lld", &x, &n, &m);
        
        // shifting can be done only upto 64 bits
        if (m > 60) m = 60;  
        if (n > 60) n = 60;  
       
        long long minX = (x + (1LL << m) - 1) >> m;  // Equivalent to ceil(x / 2^m)
                  minX >>= n;                        // Equivalent to floor(minX / 2^n)
 
       
        long long maxX = x >> n;                         // Equivalent to floor(x / 2^n)
                  maxX = (maxX + (1LL << m) - 1) >> m;  // Equivalent to ceil(maxX / 2^m)
 
        printf("%lld %lld\n", minX, maxX);
    }
 
    return 0;
}