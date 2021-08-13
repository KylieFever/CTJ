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
    /*--------------*/
    printf("Part #1");
    int integerA, integerB;
    float floatA = 23.53;
    double doubleA = 66.458;
    bool boolA; boolA = true;
    
    printf("f%f, d%f\n", floatA, doubleA);
    
    printf("A's value?: ");
    scanf(" %f", &integerA);
        //  ^pointer
    
    printf("A = %f", integerA);
    
    /*--------------*/
    printf("Part #2");
    float floatVarA, floatVarB;
    printf("fp A?: ");
    scanf(" %f", &floatVarA);
    printf("fp B? ");
    scanf(" %f", &floatVarB);
    float holdVarAB = 0;
    float holdVarBA = 0;
    holdVarAB += floatVarA;
    holdVarBA += floatVarB;
    floatVarA = holdVarBA;
    floatVarB = holdVarAB;
    printf("%f, %f -> %f, %f\n", floatVarB, floatVarA, floatVarA, floatVarB);
    floatVarA = 0;
    floatVarB = 0;
    holdVarBA = 0;
    holdVarAB = 0;
    
    /*--------------*/
    printf("Part #3");
    //  no
    
    /*--------------*/
    printf("Part #4");
    float diam;
    printf("diameter?: ");
    scanf(" %f", &diam);
    float radius;
    radius = diam / 2;
    printf("A %f-wide cylinder's radius is %f\n", diam, radius);
    diam = 0;
    radius = 0;
    
    /*--------------*/
    printf("Part #5");
    float fp = 1.2345678;
    float sumFP = 9.8765432;
    float subtrFP = 9.8765432;
    float multFP = 9.8765432;
    float divFP = 9.8765432;
    int int_P5 = 9;
    int modulo = 46;
    sumFP += fp; printf("9.8765432+1.2345678 = %f\n", sumFP);
    subtrFP -= fp; printf("9.8765432—1.2345678 = %f\n", subtrFP);
    multFP *= fp; printf("9.8765432✕1.2345678 = %f\n", multFP);
    divFP /= fp; printf("9.8765432÷1.2345678 = %f\n", divFP);
    modulo %= int_P5; printf("9.8765432%%1.2345678 = %f\n", modulo);
    multFP = 0;
    divFP = 0;
    
    /*--------------*/
    printf("Part #7\n");
    float sumFPAddOp;
    float subtrFPTakeAwayOp;
    sumFPAddOp = (sumFP ++);
    subtrFPTakeAwayOp = (subtrFP --);
    printf("%f ++ = %f\n", sumFP, sumFPAddOp);
    printf("%f -- = %f\n", subtrFP, subtrFPTakeAwayOp);
    
    /*--------------*/
    printf("Part #8\n");
    int x = 10;
    x += x + x;
    printf("x + 2x = %i\n", x);
    x = 0;
    
    /*--------------*/
    printf("Part #9\n");
    x = 34;
    x %= 5;
    x ++;
    printf("%i\n", x);
    x = 0;
    
    return 0;
}
