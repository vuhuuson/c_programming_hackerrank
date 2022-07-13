#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   int firstIntVar, secIntVal;
    float fistFloatVar, secFloatVal;
    
    scanf("%d %d", &firstIntVar, &secIntVal);
    scanf("%f %f", &fistFloatVar, &secFloatVal);
	
    printf("%d %d \n", firstIntVar + secIntVal, firstIntVar - secIntVal);
    printf("%0.1f %0.1f \n", fistFloatVar + secFloatVal, fistFloatVar - secFloatVal);
    
    return 0;
}