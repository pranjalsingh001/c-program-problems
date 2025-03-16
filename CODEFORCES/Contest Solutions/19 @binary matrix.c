#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    while (t--) {
        int n, m;
        scanf("%d %d",&n,&m);
 
        int a[n][m];
        int rowXor[n], colXor[m];
 
     
        for (int i=0; i<n; i++) rowXor[i] = 0;
        for (int j=0; j<m; j++) colXor[j] = 0;
 
      
        for (int i=0; i<n; i++) 
        {
            char row[m + 1]; 
            scanf("%s", row);
            
            for (int j = 0; j < m; j++) 
            {
                a[i][j] = row[j] - '0';  
                rowXor[i] ^= a[i][j]; 
                colXor[j] ^= a[i][j];
            }
        }
 
       
        int oddRows = 0, oddCols = 0;
        for (int i = 0; i < n; i++) if (rowXor[i]) oddRows++;
        for (int j = 0; j < m; j++) if (colXor[j]) oddCols++;
 
        
        printf("%d\n", (oddRows > oddCols) ? oddRows : oddCols);
    }
 
    return 0;
}