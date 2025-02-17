#include <stdio.h>

int main() {

    int n,i;
    scanf( "%d %d",&n,&i);
    int N=(n>>i & 1);
    printf("%d",N);
    
        
        
        
    return 0;
}