/*
    divide the no. in two parts 
    one should be multiple of 7 
    check the second part (if multiple of 4 print it, if not increase it by 7)
 */


#include <stdio.h>
 
int main()
{
     int n;
    scanf("%d",&n);
    
    
    int count4=0;//
    while (n >= 0) 
    {
        if (n % 7 == 0) 
        { 
            int count7 = n / 7; 
            while(count4--) 
            printf("4");
            
            while(count7--)
            printf("7");
            
            return 0;
        }
        n -= 4;  
        count4++;
    }
    
    printf("-1");
    return 0;
}