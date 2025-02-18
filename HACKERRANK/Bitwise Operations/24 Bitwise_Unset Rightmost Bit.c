#include <stdio.h>

int main() {
    int n;
  
    scanf("%d", &n);
   
    int N = n & (n - 1);
  
    printf("%d", N);

    return 0;
}