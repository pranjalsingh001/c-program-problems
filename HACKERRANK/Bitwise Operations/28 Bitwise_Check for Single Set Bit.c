#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    int N=n & (n-1);
    
    if(n>0 && N==0)
       printf("1");
    else 
        printf("-1");
    return 0;
}