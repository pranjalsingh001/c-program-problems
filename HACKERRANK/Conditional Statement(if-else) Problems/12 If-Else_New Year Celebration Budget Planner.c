#include <stdio.h>

int main() {

    int budget,numguests,foodcostperguests,decorationcost,musiccost,extraexpenses;
    scanf("%d\n%d\n%d\n%d\n%d\n%d",&budget,&numguests,&foodcostperguests,&decorationcost,&musiccost,&extraexpenses);
    int totalfoodcost = foodcostperguests*numguests;
    int totalcost = totalfoodcost + decorationcost + musiccost + extraexpenses;
    
    if((totalcost<=budget)
       &&
       (numguests>5 && numguests<=50)
       && 
       ((decorationcost<(0.3*budget) ||  totalfoodcost<(0.5*budget))) )
       
       {
         if(numguests>25 &&  musiccost==0)         
         {
             printf("Celebration Denied");
             return 0;
         }
        printf("Celebration Approved");
             
       }
    else
        printf("Celebration Denied");
        
    return 0;
}