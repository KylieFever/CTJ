//
//  main.c
//  CTJ
//
//  Created by luink on 8/10/21.
//  Copyright © 2021 Luinkx. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// import math.h for sqrt() funcs.

int main() {
    int x = 10, integerA = 54, integerB = 66, int_P5 = 9, modulo = 46;
    float floatA = 23.53, floatVarA, floatVarB, holdVarAB = 0, holdVarBA = 0, diam, radius, fp, sumFP = 9.8765432, subtrFP = 9.8765432, multFP = 9.8765432, divFP = 9.8765432, sumFPAddOp, subtrFPTakeAwayOp
    double doubleA = 66.458;
    bool boolA = true;
    /*--------------*/
    printf("Part #1");
    printf("f%f, d%f\n", floatA, doubleA);
    printf("A's value?: ");
    scanf(" %f", &integerA);
        //  ^pointer
    printf("A = %f", integerA);
    
    /*--------------*/
    printf("Part #2");
    printf("fp A?: ");
    scanf(" %f", &floatVarA);
    printf("fp B? ");
    scanf(" %f", &floatVarB);
    holdVarAB += floatVarA;
    holdVarBA += floatVarB;
    floatVarA = holdVarBA;
    floatVarB = holdVarAB;
    printf("%f, %f -> %f, %f\n", floatVarB, floatVarA, floatVarA, floatVarB);
    
    /*--------------*/
    printf("Part #3");
        //  no
    
    /*--------------*/
    printf("Part #4");
    printf("diameter?: ");
    scanf(" %f", &diam);
    radius = diam / 2;
    printf("A %f-wide cylinder's radius is %f\n", diam, radius);
    
    /*--------------*/
    printf("Part #5");
    fp = 1.2345678;
    sumFP = 9.8765432;
    subtrFP = 9.8765432;
    multFP = 9.8765432;
    divFP = 9.8765432;
    sumFP += fp; printf("9.8765432+1.2345678 = %f\n", sumFP);
    subtrFP -= fp; printf("9.8765432—1.2345678 = %f\n", subtrFP);
    multFP *= fp; printf("9.8765432✕1.2345678 = %f\n", multFP);
    divFP /= fp; printf("9.8765432÷1.2345678 = %f\n", divFP);
    modulo %= int_P5; printf("9.8765432%%1.2345678 = %f\n", modulo);
    
    /*--------------*/
    printf("Part #7\n");
    sumFPAddOp = (sumFP ++);
    subtrFPTakeAwayOp = (subtrFP --);
    printf("%f ++ = %f\n", sumFP, sumFPAddOp);
    printf("%f -- = %f\n", subtrFP, subtrFPTakeAwayOp);
    
    /*--------------*/
    printf("Part #8\n");
    x += x + x;
    printf("x + 2x = %i\n", x);
    x = 0;
    
    /*--------------*/
    printf("Part #9\n");
    x = 34;
    x %= 5;
    x ++;
    printf("%i\n", x);
    
    return 0;
}
