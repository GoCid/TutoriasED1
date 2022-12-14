//
//  main.c
//  tutosem5
//
//  Created by Leonardo Alejandro González López on 05/10/22.
//  Copyright © 2022 UASLP. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void ejercicio1(void);
void ejercicio2(void);
void ejercicio3(void);
void ejercicio4(void);
unsigned long long binarioADecimal(char *cadenaBinaria, int longitud);
void ejercicio5(void);

int main() {
//    ejercicio1();
//    ejercicio2();
//    ejercicio3();
    ejercicio4();
//    ejercicio5();
}

void ejercicio1(void){
    char palabra[80];
    printf( "Teclea una palabra: " );
    fpurge(stdin);
    //fflush(stdin);
    scanf( "%s", palabra );
    printf( "La longitud de %s es %lu \n", palabra, strlen(palabra) );
}

void ejercicio2(void){
    char palabra[80],palabra2[80];
    printf("Teclea algo:\n");
    fpurge(stdin);
    scanf("%s",palabra);
    printf("Teclea algo:\n");
    fpurge(stdin);
    scanf("%s",palabra2);
    if (strcmp(palabra, palabra2)<0) {
        printf("La primer cadena es menor que la segunda cadena lexicográficamente\n");
    }else if (strcmp(palabra, palabra2)>0){
        printf("La primer cadena es mayor que la segunda cadena lexicográficamente\n");
    }else{
        printf("Las cadenas son iguales\n");
    }
}

void ejercicio3(void){
    char palabra[80];
    printf("Escribe una cadena:");
    scanf("%s", palabra);
    unsigned long longitud = strlen(palabra);
    
    if (longitud <=1) {
        printf("Es palindromo\n");
        return;
    }
    unsigned long inicio = 0, fin = longitud - 1;
    
    while (palabra[inicio] == palabra[fin]){
           // Aquí sólo resta un carácter por comparar, eso indica que SÍ es palíndroma
        if (inicio >= fin) {
            printf("Es palindromo\n");
            return;
        }
           // Vamos acortando la cadena
           inicio++;
           fin--;
       }
    printf("No es palindromo\n");
    return;
}

void ejercicio4(){
    char binario[80];
    printf("Introduce un número binario de hasta %d caracteres:\n",79);
    fgets(binario, 80, stdin);
    binario[strcspn(binario, "\r\n")] = 0;
    unsigned long long decimal = binarioADecimal(binario, strlen(binario));
    printf("El binario %s es %llu en decimal\n", binario, decimal);
}

unsigned long long binarioADecimal(char *cadenaBinaria, int longitud) {
  unsigned long long decimal = 0;
  int multiplicador = 1;
  char caracterActual;
  for (int i = longitud - 1; i >= 0; i--) {
    caracterActual = cadenaBinaria[i];
    if (caracterActual == '1') {
      decimal += multiplicador;
    }
    multiplicador = multiplicador * 2;
  }
  return decimal;
}









void ejercicio5(void){
    
}
