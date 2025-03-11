#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    int kth = a[k - 1]; // Score of the k-th place participant
    int count = 0; // Count of qualifiers
    
    for (int i = 0; i < n; i++) {
        if (a[i] >= kth && a[i] > 0)
            count++;
    }
    
    printf("%d", count);
    
    return 0;
}
