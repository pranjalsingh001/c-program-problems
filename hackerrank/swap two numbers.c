#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    
   
    int z;
    z=b;
    b=a;
    a=z;
   
    printf("a = %d\nb = %d",a,b);

   
    return 0;
}