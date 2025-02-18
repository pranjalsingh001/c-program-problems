#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
     if (n == 0) {
        printf("No");
        return 0;
    }
    int N=n&(n+1);
    if(N)
        printf("No");
    else
        printf("Yes");
    return 0;
}