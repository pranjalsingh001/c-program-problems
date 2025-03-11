#include <stdio.h>

int minMovesToOne(int n) {
    int count = 0;

    while (n != 1) {
        if (n % 6 == 0) {
            n /= 6;
        } else if (n % 3 == 0) {
            n *= 2;
        } else {
            return -1;
        }
        count++;
    }
    
    return count;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", minMovesToOne(n));
    }

    return 0;
}
