//
//  main.c
//  tutosem10
//
//  Created by Leonardo Alejandro González López on 16/11/22.
//  Copyright © 2022 UASLP. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define N 6
#define TAM 20

typedef struct
{
char pila[TAM];
int tope;
int tam;
}Pila;

void Captura(char parentesis[N]);
void Compara(char parentesis[N]);
void inicializaPila(Pila * p, int tam);
int push(Pila *p, char d);
int pilaLlena(Pila p);
int pilaVacía(Pila p);
int pop(Pila * p);





int main(){
char parentesis[N];
Captura(parentesis);
Compara(parentesis);

}

void Captura(char parentesis[N]){
    int cont;
    printf("escribe tu cadena\n");
//printf("de que tamaño es tu cadena\n");
//scanf("%d",&i);
for(cont=0;cont<N;cont++){
    scanf("%c",&parentesis[cont]);
}

}

void Compara(char parentesis[N]){
int indice,cont;
Pila p;
indice =0;
inicializaPila(&p, 15);
for(cont=0;cont<N;cont++){
    if(parentesis[cont]=='('){
        push(&p, '(');
        indice++;
        printf("suma\n");
       }
    if(parentesis[cont]==')'){
        pop(&p);
        indice--;
       printf("resta\n");
       }
}
if(indice==0){
    printf("ESTA BALANCEADO\n");
}
else{
    printf("no esta balanceado\n");
}
}

void inicializaPila(Pila * p, int tam)
{
p->tam = tam <= TAM? tam : TAM;
p->tope = 0;
}


int push(Pila *p, char d)
{
int reg = 0; // 2.1
if( ! pilaLlena(*p) ) // 1
{
p->pila[p->tope] = d; // 1.1
p->tope++; // 1.2
reg = 1; // 1.3
}
return(reg); //1.3, 2.1
}

int pilaLlena(Pila p)
{
int reg = 1;
if(p.tope < p.tam)
reg = 0;
return(reg);
}

int pilaVacía(Pila p)
{
int reg = 1;
if(p.tope > 0)
reg = 0;
return(reg);
}

int pop(Pila * p)
{
int reg = 0; // 2.1
if( ! pilaVacía(*p)) // 1
{
p->tope--; // 1.1

reg = 1; // 1.3
}
return(reg); //1.3, 2.1
}

