#include <stdio.h>
 
int main() {
    int n;
    scanf("%d",&n);
    
    int sumX=0, sumY=0, sumZ=0;
    
    while (n--) {
        int x, y, z;
        scanf("%d %d %d", &x,&y,&z);
        
        sumX +=x;
        sumY +=y;
        sumZ +=z;
    }
    
    if (sumX==0 && sumY==0 && sumZ==0)
        printf("YES\n");
    else
        printf("NO\n");
 
    return 0;
}