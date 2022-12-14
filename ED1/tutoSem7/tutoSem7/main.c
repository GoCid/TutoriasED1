//
//  main.c
//  tutoSem7
//
//  Created by Leonardo Alejandro González López on 12/10/22.
//  Copyright © 2022 UASLP. All rights reserved.
//

#include <stdio.h>
void ejercicio1(void);
int sumatoria(int);
void ejercicio2(void);
void separaNum(int);
void ejercicio3(void);
int findMajor(int a[], int tam, int);
int max(int,int);
void ejercicio4(void);
int potencia(int,int);
void ejercicio5(void);
int multp(int, int);

int main(int argc, const char * argv[]) {
//    ejercicio1();
//    ejercicio2();
    ejercicio3();
//    ejercicio4();
//    ejercicio5();
}

int sumatoria(int valor){
    if (valor <= 1) {
        return valor;
    }
    return valor + sumatoria(valor-1);
}

void ejercicio1(void){
    int n, res;
    printf("Escribe un numero entero:\n");
    scanf("%i", &n);
    res=sumatoria(n);
    printf("La sumatoria es: %d\n",res);
}

void separaNum(int n){
    if (n>0) {
        printf("%d\n", n%10);
        separaNum(n/10);
    }
}

void ejercicio2(void){
    int n;
    printf("Escribe un numero entero");
    scanf("%d",&n);
    separaNum(n);
}

int findMajor(int a[], int tam, int i){
    if (i==tam-1) {
        return a[i];
    }else{
        return max(a[i], findMajor(a, tam, i+1));
    }
}

int max(int a,int b){
    if (a>b) {
        return a;
    }
    return b;
}

void ejercicio3(void){
    int a[4];
    a[0]=7;
    a[1]=2;
    a[2]=9;
    a[3]=6;
    printf("El elemento mayor del arreglo es:%d\n",findMajor(a, 4, 0));
}

int potencia(int base, int exp){
    int res = 0;
    
    if (exp==0) {
        res=1;
    }
    if (exp>0){
        res=base*potencia(base, exp-1);
    }
    return res;
}

void ejercicio4(void){
    int base, exp;
    printf("Escribe la base y el exponente:\n");
    scanf("%d %d", &base,&exp);
    printf("El resultado es: %d\n", potencia(base, exp));
}

int multp(int a, int b){
    if (a == 0 || b == 0 ) {
        return 0;
    }
    if (b < 0) {
        return -a+multp(a, b+1);
    }
    return a+multp(a, b-1);
}

void ejercicio5(void){
    int a, b;
    printf("Escribe dos numeros enteros:\n");
    scanf("%d %d", &a,&b);
    printf("El producto es: %d\n", multp(a, b));
}
