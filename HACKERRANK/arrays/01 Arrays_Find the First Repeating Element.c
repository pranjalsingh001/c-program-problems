#include <stdio.h>
#define MAX_VALUE 100000  

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int freq[MAX_VALUE + 1] = {0};  
    
    for (int i = 0; i < n; i++) 
        freq[a[i]]++;

    for (int i = 0; i < n; i++) 
    {
        if (freq[a[i]] > 1) 
        {
            printf("%d", a[i]);
            return 0;
        }
    }
    printf("No Repeating Element");

    return 0;
}