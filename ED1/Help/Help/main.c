//
//  main.c
//  Help
//
//  Created by Leonardo Alejandro González López on 31/08/22.
//  Copyright © 2022 UASLP. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>


float Captura(float *anguloA, float *anguloB);
float Calcula(float suma);
void imprime(float anguloC);
int main()
{
    float *anguloA = NULL, *anguloB = NULL, anguloC, suma;
    suma = Captura(anguloA,anguloB);
anguloC = Calcula(suma);
imprime(anguloC);
}
float Captura(float *anguloA, float *anguloB)
{
    float suma=0;
printf("Introduzca el angulo A: ");
    scanf("%f", &anguloA);
        printf("Introduzca el angulo B: ");
            scanf("%f", &anguloB);
                suma = *anguloA + *anguloB;
return (suma);
}
float Calcula(float suma)
{
    float anguloC=0;
    anguloC = 180 - suma ;

    return (anguloC);
}

void imprime(float anguloC)
{
    printf("El ultimo anuglo tiene un grado con valor de: %f.2", anguloC);
}
