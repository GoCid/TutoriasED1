//
//  main.c
//  tutoSem3
//
//  Created by Leonardo Alejandro González López on 14/09/22.
//  Copyright © 2022 UASLP. All rights reserved.
//

#include <stdio.h>
#include <math.h>

float getNumero(void);
float calculaDistancia(float x1, float y1, float x2, float y2);

void ejercicio1(void);
int suma(int n);
void ejercicio2(void);
void ejercicio3(void);


int main() {
//   ejercicio1();
    ejercicio2();
}

float getNumero(){
    float i;
    scanf("%f", &i);
    return i;
}

float calculaDistancia(float x1, float y1, float x2, float y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void ejercicio1(void){
    float x1, y1, x2, y2, res;
    printf("Escribe x1\n");
    x1 =getNumero();
    printf("Escribe y1\n");
    y1 =getNumero();
    printf("Escribe x2\n");
    x2 =getNumero();
    printf("Escribe y2\n");
    y2=getNumero();
    res=calculaDistancia(x1, y1, x2, y2);
    printf("La distancia es: %.2f\n",res);
}
int suma(int n){
    int i;
    int d;
    int c;
    c=0;
    for(i=1;i<n;i++){
        if(n%i==0){
            d=i;
            c+=d;
        }
      }
    return c;
}

void ejercicio2(void){
    int i,m;
    printf("Escribe cuantos numeros perfectos quieres conocer: ");
    m=getNumero();
    for(i=1;i<=m;i++){
        if(suma(i)==i){
            printf("%d\n",i);
        }
    }
}

void ejercicio3(void){
    
}
