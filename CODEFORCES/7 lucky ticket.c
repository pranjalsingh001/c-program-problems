#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);  
    
    char a[n + 1];  
    scanf("%s", a); 
    
    int lastsum = 0, startsum = 0;

    for (int i = 0; i < n / 2; i++)
    {
        if ((a[i] == '7' || a[i] == '4') && (a[n - 1 - i] == '7' || a[n - 1 - i] == '4'))
        {
            startsum += a[i] - '0';
            lastsum += a[n - 1 - i] - '0'; 
        }
        else 
        {
            printf("NO\n");
            return 0;
        }
    }

    if (startsum == lastsum)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
