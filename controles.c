//Arquivo controles.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

//Implementando a função criar lista
Lista* cria_lista(){
    Lista *li; //Declara ponteiro
    li = (Lista*)malloc(sizeof(struct lista));
    if(li != NULL)
        li->qtd = 0;
    return li;
}
//Implementando a função libera lista
void libera_lista(Lista* li){
    free(li);
}
//Implementando a funcao Tamanho da lista
int tamanho_lista(Lista* li){
    if(li == NULL)
        return -1;
    else
        return li->qtd;
}
//Implementando a funcao lista Cheia
int lista_cheia(Lista* li){
    if(li == NULL)
    {
        printf("\nLista invalida\n\n");
        return -1;
    }
    if (li->qtd == MAX)
    {
        printf("\nLista Cheia\n\n");
        return (li->qtd == MAX);
    }
    return 0;
}
//Implementando a funcao lista Vazia
int lista_vazia(Lista* li){
    if(li == NULL)
    {
        printf("\nLista Invalida\n\n");
        return -1;
    }
    if(li->qtd == 0)
    {
        printf("\nLista Vazia\n\n");
        return (li->qtd == 0);
    }
    return 0;
}

