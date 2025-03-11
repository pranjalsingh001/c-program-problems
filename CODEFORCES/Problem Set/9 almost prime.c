#include <stdio.h>
int isprime(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    
    return 1;
}

int primeCountIs2(int n)
{
    int primeCount=0;
    for(int i=2;i<=n/2;i++)
        if(n%i==0)
            if(isprime(i)) primeCount++;
        
    return primeCount==2 ? 1:0;
}
int main() {
    int n;
    scanf("%d",&n);
    
    int almostPrime=0;
    for(int i=1;i<=n;i++)
        if(primeCountIs2(i)) almostPrime++;
        
    printf("%d",almostPrime);
    
    
    return 0;
}