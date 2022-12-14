//
//  main.c
//  tutoSem8
//
//  Created by Leonardo Alejandro González López on 19/10/22.
//  Copyright © 2022 UASLP. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 100

int ejercicio2(char namae[N][N],int i);
void printTabla(int calif[N], char namae[N][N], int i);
void ejercicio3(int calif[N], char namae[N][N], int i);
int ejercicio4(char busqueda[N], char namae[N][N], int izquierda, int derecha);

int main() {
    int calif[N], b=0, i=0, j,a;
    char namae[N][N];
    
    while (b!=1) {
        printf("Escriba el nombre del alumno:\n");
        fpurge(stdin);
        scanf("%s",namae[i]);
        printf("Escriba la calificacion de %s\n", namae[i]);
        scanf("%d", &calif[i]);
        
        assertion:
        printf("Desea agregar otra calificacion? 1.- SI 2.- NO\n");
        scanf("%d",&j);
        
        switch (j) {
            case 1:
                i++;
                break;
            case 2:
                b=1;
                break;
            default:
                printf("Comando desconocido\n");
                fpurge(stdin);
                goto assertion;
        }
    }
    ejercicio3(calif, namae,i);
assertion2:
    printf("\n\n\n");
    printf("Elija una opcion:\n 1.- Imprimir tabla\n 2.- Buscar alumno\n 3.- Busqueda Binaria\n 4.- Salir del programa\n");
    scanf("%d", &j);
    switch (j) {
        case 1:
            printTabla(calif, namae, i);
            break;
        case 2:
            a=ejercicio2(namae, i);
            if (a!=-1) {
                printf("%s tiene %d de calificacion\n", namae[a], calif[a]);
            }else{
                printf("No se ha encontro al alumno\n");
            }
            break;
        case 3:
            printf("Ingrese el nombre del alumno:\n");
            char nam[N];
            fpurge(stdin);
            scanf("%s", nam);
            a=ejercicio4(nam, namae, 0, i);
            if (a!=-1) {
                printf("%s tiene %d de calificacion\n", namae[a],calif[a]);
            }else{
                printf("No se ha encontro al alumno\n");
            }
            break;
        case 4:
            return 0;
        default:
            printf("Comando desconocido\n");
            goto assertion2;
    }
    goto assertion2;
}

void printTabla(int calif[N], char namae[N][N], int i){
    for (int k = 0; k<=i; k++) {
        printf("|%*s  ",10,namae[k]);
    }
    printf("|\n");
    for (int k = 0; k<=i; k++) {
        printf("|%*d  ", 10,calif[k]);
    }
    printf("|\n");
}
//busqueda lineal
int ejercicio2(char namae[N][N], int i){
    char s[N];
    printf("Escriba el nombre del alumno a buscar:");
    fpurge(stdin);
    scanf("%s", s);
    for (int j=0; j<=i; j++) {
        if (strcmp(s, namae[j])==0) {
            return j;
        }
    }
    return -1;
}

void ejercicio3(int calif[N], char namae[N][N], int i){
    char aux[N];
    int x, index,aux2;
    for (x=0; x<i; x++) {
        for (index=0; index<=i-1; index++) {
            int nextElement = index +1;
            if (strcmp(namae[index], namae[nextElement])>0) {
                memcpy(aux, namae[index], N);
                memcpy(namae[index], namae[nextElement], N);
                memcpy(namae[nextElement], aux, N);
                aux2= calif[index];
                calif[index]= calif[nextElement];
                calif[nextElement]= aux2;
            }else if (strcmp(namae[index], namae[nextElement])==0){
                if (calif[index]<calif[nextElement]) {
                    memcpy(aux, namae[index], N);
                    memcpy(namae[index], namae[nextElement], N);
                    memcpy(namae[nextElement], aux, N);
                    aux2 = calif[index];
                    calif[index]=calif[nextElement];
                    calif[nextElement]=aux2;
                }
            }
        }
    }
}

//busqueda binaria
int ejercicio4(char busqueda[N], char namae[N][N], int izquierda, int derecha){
    if (izquierda>derecha) {
        return -1;
    }
    int midIndex =floor((izquierda+derecha)/2);
    char *midElement = namae[midIndex];
    int result = strcmp(busqueda, midElement);
    if (result == 0) {
        return midIndex;
    }
    if (result<1) {
        derecha = midIndex-1;
    }else{
        izquierda = midIndex+1;
    }
    return ejercicio4(busqueda, namae, izquierda, derecha);
}

