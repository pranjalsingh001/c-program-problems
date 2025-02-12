#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x;
    scanf("%d",&x);
    
    
    
    if(x%360 == 0 && x!= 0){
        printf("Full Rotation");
        return 0;
    }
        
    
    int angle = x%360;
    if (angle<0)
        angle+=360;
    
    if(angle>=0 && angle<90)
        printf("Acute Angle");
    else if(angle == 90)
        printf("Right Angle");
    else if(angle>90 && angle<180)
        printf("Obtuse Angle");
    else if(angle == 180)
        printf("Straight Angle");    
    else if(angle>180 && angle<360)
        printf("Reflex Angle");
    else if(angle == 360)
        printf("Full Rotation");
    
    return 0;
}
