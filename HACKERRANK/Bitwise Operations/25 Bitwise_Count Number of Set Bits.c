#include <stdio.h>

int main() {

    int n,count;
    scanf("%d",&n);
    count=0;
    if (n&1)
        count++;
     if ((n>>1) &1)
        count++;
     if ((n>>2) &1)
        count++;
     if ((n>>3) &1)
        count++;
    
    printf("%d",count);
    
    return 0;
}