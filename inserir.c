//Arquivo inserir.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h" //inclui os Protótipos

//Implementando a funcao insere_lista_final
int insere_lista_final(Lista* li, struct aluno al){
    li->dados[li->qtd] = al;
    li->qtd++;
    printf("Elemento inserido com sucesso\n\n");
    return 1;
}
//Implementando a funcao insere_lista_inicio
int insere_lista_inicio(Lista* li, struct aluno al){
    int i;
    for(i = li->qtd-1; i>=0; i--)
        li->dados[i+1] = li->dados[i];

    li->dados[0] = al;
    li->qtd++;
    printf("Elemento inserido com sucesso\n\n");
    return 1;
}
//Implementando a funcao insere_lista_ordenada
int insere_lista_ordenada(Lista* li, struct aluno al){
    int k,i = 0;
    while(i<li->qtd && li->dados[i].matricula < al.matricula)
        i++;

    for(k=li->qtd-1; k >= i; k--)
        li->dados[k+1] = li->dados[k];

    li->dados[i] = al;
    li->qtd++;
    printf("Elemento inserido com sucesso\n\n");
    return 1;
}
