#include <stdio.h>

int main() {

    int path;
    scanf("%d",&path);
    
    if (path == 1)
    {   printf("Player chooses the Left path.\n");
        int leftpathchoice;
        scanf("%d",&leftpathchoice);
     
        if(leftpathchoice== 1)
        {
            printf("Poor choice, Game Over!\n");
            return 0;
        }            
            
     
        else if(leftpathchoice== 2)
        {  printf("Player found a bridge.\n");
         
           int thirdinput;
           scanf("%d",&thirdinput);
         
           if(thirdinput==1)
               printf("Player crosses the bridge safely.\n");
           else if(thirdinput==2)
           {
               printf("Poor luck, Game Over!\n"); 
                return 0;
           }
                   
         }    
    }
    
     else if(path==2)
     {
         printf("Player chooses the Middle path.\n");
         
         int middlepathpuzzle;
         scanf("%d",&middlepathpuzzle);
         
         if (middlepathpuzzle==582)
              printf("Player solved the puzzle.\n");
         else
         {
             printf("Foolish player, Game Over!\n");
             return 0;
         }
             
                  
     }
    
    
    
    else if (path==3)
    {
        printf("Player chooses the Right path.\n");
        
        int rightpathpuzzle;
        scanf("%d",&rightpathpuzzle);
        
        if (rightpathpuzzle==30)
            printf("Player solved the puzzle.\n");
         else
         {
             printf("Foolish player, Game Over!\n");
             return 0;
         }
            
                            
    }
    
    
    int finalroominput;
    scanf("%d",&finalroominput);
    
    if (finalroominput==1)
        printf("All that glitters is not gold, Game Over!");
        
    else if (finalroominput==2)
        printf("All your efforts were for nothing, Game Over!");
        
    else if (finalroominput==3)
        printf("Congratulations!! You won the treasure.");
    
    return 0;
}