#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) 
    {
        int n;
        scanf("%d", &n);
        
         
        char s[n + 1];  
        scanf(" %[^\n]", s);
        
        
        int flag=0;
        if(n%2!=0)
        {
            n--;
            flag = 1;
        }
        for (int i = 0; i < n ; i+=2)
        {
            int temp = s[i];
            s[i] = s[i+1];
            s[i+1] = temp;
        }
        
        if(flag) n++;
        for (int i = 0; i < n; i++)
        {
           int a = s[i]-97;
           s[i] = 122 - a;
            
        } 
        
        
        
      printf("%s\n", s);
        
        
          

    }
    return 0;
}
