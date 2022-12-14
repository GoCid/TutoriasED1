//
//  main.c
//  help2
//
//  Created by Leonardo Alejandro González López on 05/10/22.
//  Copyright © 2022 UASLP. All rights reserved.
//

#include <stdio.h>
#define TAM 1000
void relleno(int tam,int cuadrado[TAM][TAM]);
void simetria(int columnas,int cuadrado[TAM][TAM]);
int main(){
    int matrices,filas;
    int matriz[TAM][TAM];
    printf("Cuantas matrices?");
    scanf("%d",&matrices);
    for(int i=0;i<matrices;i++){
        printf("Cuantas filas?");
        scanf("%d",&filas);
        relleno(filas,matriz);
        simetria(filas,matriz);
    }
}
void relleno(int tam,int cuadrado[TAM][TAM]){
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            printf("Escribe la posicion %i,%i", i,j);
            scanf("%d",&cuadrado[i][j]);
        }
    }
}
void simetria(int columnas,int cuadrado[][TAM]){
    int cont=0;
    for(int i=0;i<columnas;i++){
        for(int j=0;j<columnas;j++){
            if(cuadrado[i][j]==cuadrado[j][i]){
                continue;
            }
            else{
                cont++;
                break;
            }
        }
    }
    if(cont==0){
        puts("Simétrica");
    }
    else{
        puts("No Simétrica");
    }
}
