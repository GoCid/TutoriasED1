//
//  main.c
//  help3
//
//  Created by Leonardo Alejandro González López on 05/10/22.
//  Copyright © 2022 UASLP. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100

void leer_cadena(int,char[][MAX]);
void imprimir_cadena(int, char[][MAX]);

int main(void){
    int line;
    printf("Cuantas lioneas quieres leer?");
    scanf("%d",&line);
    char cadenas[line][MAX];
    leer_cadena(line,cadenas);
    imprimir_cadena(line,cadenas);
}

void leer_cadena(int filas,char texto[][MAX]){
    for(int i=0;i<filas;i++){
//        fflush(stdin);
        fpurge(stdin);
        printf("Escribe la linea %i", i+1);
        scanf("%s",texto[i]);
    }
}
void imprimir_cadena(int filas, char texto[][MAX]){
    int cont=0;
    for(int i=0;i<filas;i++){
        for(int j=0;texto[i][j]!='\0';j++){
            printf("%c",texto[i][j]);
            cont++;
        }
        printf("\ntiene %d caracteres\n",cont);
        cont=0;
    }
}
