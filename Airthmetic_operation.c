//
//  main.c
//  Assignments
//
//  Created by Naseeb Dangi on 2/16/21.
//  Copyright © 2021 Naseeb. All rights reserved.
//

#include<stdio.h>
int main(){
    int a,b,SUM,DIFF,MUL;
    float DIV;
    printf("Enter Numbers \n");
    scanf("%d%d",&a,&b);
    SUM = a+b;
    DIFF = a-b;
    MUL = a*b;
    DIV = (float)a/(float)b;
    printf("SUM=%d\n",SUM);
    printf("DIFF=%d\n",DIFF);
    printf("MUL=%d\n",MUL);
    printf("DIV=%.2f\n",DIV);
    return 0;
}
