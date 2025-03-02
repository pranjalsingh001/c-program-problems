
#include <stdio.h>
#include <string.h>


int main()
{
    char a[100];  
    scanf(" %[^\n]", a);
    
    
    int upper = 0, lower = 0;
    int len = strlen(a);
    for(int i= 0; i< len ; i++)
    {
        if(a[i]>=65 && a[i]<=90) upper++;
        if(a[i]>=97 && a[i]<=122) lower++;
    }
    
    if(lower>=upper)
    {
        for(int i= 0; i<len; i++)
        {
            if(a[i]>=65 && a[i]<=90) a[i]+=32;
            
        }
        
    }
    else
    {
        for(int i= 0; i<len; i++)
        {
            if(a[i]>=97 && a[i]<=122) a[i]-=32;
            
        }
    }
    
    
        printf("%s",a);
    

    return 0;
}