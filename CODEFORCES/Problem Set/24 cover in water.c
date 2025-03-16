#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        
        int n;
        scanf("%d", &n);
        
        char s[n+1];
        scanf("%s", s);
        
        int count_dot=0, total_count=0,found=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='.')
            {
               count_dot++;
               total_count++;
            }
            else count_dot=0; 
            
            if(count_dot==3)
            {
                found=1;
                break;
            }
        }
        
        if(found) printf("2\n");
        else printf("%d\n",total_count);
        
        
        
    }

    return 0;
}
