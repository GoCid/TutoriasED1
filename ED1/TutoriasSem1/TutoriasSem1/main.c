//
//  main.c
//  TutoriasSem1
//
//  Created by Leonardo Alejandro González López on 31/08/22.
//  Copyright © 2022 UASLP. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //PROBLEMA 1
   /* int a[5],i,mayor,menor;
    for (i=0; i<5; i++) {
        printf("Escribe el numero %i \n", i);
        scanf("%i", &a[i]);
    }
    mayor=menor=a[0];
    for (i=1; i<5; i++) {
        if (a[i]>mayor) {
            mayor=a[i];
        }
        if (a[i]<menor) {
            menor = a[i];
        }
    }
    printf("El mayor es: %i y el menor es %i\n", mayor, menor);
    */
    
    //PROBLEMA 2
    /*int num, a, b, c, d, e;
    printf("Escribe un numero de 5 digitos:");
    scanf("%i", &num);
    if (num>= 10000) {
        if (num<=99999) {
            a = num / 10000;
            b = (num % 10000) / 1000;
            c = (num % 10000) % 1000 / 100;
            d = ((num % 10000) % 1000) % 100 / 10;
            e = (((num % 10000) % 1000) % 100) % 10;
            printf("%i   %i   %i   %i   %i\n", a, b, c, d, e);

        }
    }*/
    
    //PROBLEMA 3
    /*int num, a, b, d, e;
    printf("Escribe un numero de 5 digitos:\n");
    scanf("%i", &num);
    if (num>= 10000) {
        if (num<=99999) {
            a = num / 10000;
            b = (num % 10000) / 1000;
            d = ((num % 10000) % 1000) % 100 / 10;
            e = (((num % 10000) % 1000) % 100) % 10;
            if (a==e && b==d) {
                printf("Es un numero capicua\n");
            }
        }
    }*/
    //PROBLEMA 4
    /*long bin,de;
    int dig,cont;
    
    printf("Ingrese un numero binario:\n");
    scanf("%ld",&bin);
    de=0;
    cont=1;
    
    while (bin!=0) {
        dig=bin%10;
        if (dig==1|dig==0) {
            de=de+(dig*cont);
            bin=bin/10;
            cont=cont*2;
        }else{
            printf("El numero no es binario\n");
            return 0;
        }
    }
    if (cont!=1) {
        printf("El numero en decimal es: %ld\n", de);
    }*/
    
    //Problema 5
    /*
    int a,b,c;
    printf("Escribe 3 enteros separados por un espacio\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a==b && b==c) {
        printf("Todos los numeros son iguales\n");
    }else if (a<=b && b<=c){
        printf("Creciente debil\n");
    }else if (a>=b && b>=c){
        printf("Decreciente debil\n");
    }else{
        printf("No hay un orden aparente\n");
    }*/
    }
