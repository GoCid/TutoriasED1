//
//  main.c
//  tutoSem2
//
//  Created by Leonardo Alejandro González López on 13/09/22.
//  Copyright © 2022 UASLP. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int readN(void);
void problema1(int i);
void problema2(void);
void problema3(int x);

int main() {
    int i=readN();
//    problema1(i);
//    problema2();
    problema3(i);
}

int readN(void){
    int i;
    printf("\nEscribe un numero:\n");
    scanf("%i", &i);
    return i;
}
void problema1(int i){
    printf("%i  ",i);
    while (i!=1) {
        if (i%2==0) {
            i=i/2;
        }else{
            i=3*i+1;
        }
        printf("%i  ",i);
    }
}

void problema2(void){
    int i=1, b=0,c;
    double res;
    res=4/i;
    c=1;
    while (fabs(3.1415-res)>0.0005) {
        i+=2;
        if (b) {
            res+=(double)(4/i);
            b=0;
        }else{
            res-=(double)(4/i);
            b=1;
        }
        c++;
    }
    printf("El numero de iteraciones fue de:%d y pi vale %f",c,res);
}

void problema3(int x){
    for (int i=0; i<x; i++) {
        for (int j=1; j<=i+1; j++) {
            printf("%i ",j);
        }
        printf("\n");
    }
    for (int i=x; i!=0; i--) {
        for (int j=1; j<=i-1; j++) {
            printf("%i ",j);
        }
        printf("\n");
    }
}
