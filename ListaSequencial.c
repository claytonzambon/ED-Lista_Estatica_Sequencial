//Arquivo ListaSequencial.c
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
//Implementando a funcao remove_lista_final
int remove_lista_final(Lista* li){
    if (lista_vazia(li))
        return 0;

    li->qtd--;
    printf("\nRemovido elemento do FINAL da lista\n\n");
    return 1;
}
//Implementando a funcao remove_lista_inicio
int remove_lista_inicio(Lista* li){
    if (lista_vazia(li))
        return 0;

    int k = 0;
    for(k=0; k< li->qtd-1; k++)
        li->dados[k] = li->dados[k+1];
    li->qtd--;
    printf("\nRemovido elemento do INICIO da lista\n\n");
    return 1;
}
//Implementando a funcao remove_lista
int remove_lista(Lista* li, int mat){
    int k,i = 0;
    while(i<li->qtd && li->dados[i].matricula != mat)
        i++;
    if(i == li->qtd)//elemento nao encontrado
    {
        printf("\nMatricula >>%d<< nao encontrada \n", mat);
        return 0;
    }
    for(k=i; k< li->qtd-1; k++)
        li->dados[k] = li->dados[k+1];
    li->qtd--;
    printf("\nRemovida a matricula >>%d<< da lista\n\n", mat);
    return 1;
}
//Implementando a funcao consulta_lista_pos
int consulta_lista_pos(Lista* li, int pos, struct aluno *al){
    if(li == NULL || pos <= 0 ||  pos > li->qtd)
    {
        printf("\nPosicao inexistente\n");
        return 0;
    }
    *al = li->dados[pos-1];
    printf("-------------------------------\n");
    printf("Matricula: %d\n", li->dados[pos-1].matricula);
    printf("Nome: %s\n", li->dados[pos-1].nome);
    printf("Nota 01: %.2f\n", li->dados[pos-1].n1);
    printf("Nota 02: %.2f\n", li->dados[pos-1].n2);
    printf("-------------------------------\n");
    return 1;
}
//Implementando a funcao consulta_lista_mat
int consulta_lista_mat(Lista* li, int mat, struct aluno *al){
    if(li == NULL)
        return 0;

    int i = 0;
    while(i<li->qtd && li->dados[i].matricula != mat)
        i++;
    if(i == li->qtd)//elemento nao encontrado
    {
        printf("\nMatricula nao encontrada\n");
        return 0;
    }
    *al = li->dados[i];
    printf("-------------------------------\n");
    printf("Matricula: %d\n", li->dados[i].matricula);
    printf("Nome: %s\n", li->dados[i].nome);
    printf("Nota 01: %.2f\n", li->dados[i].n1);
    printf("Nota 02: %.2f\n", li->dados[i].n2);
    printf("-------------------------------\n");
    return 1;
}
//Implementacao para exibir a lista
void imprime_lista(Lista* li){
    if(li == NULL || li->qtd == 0)
    {
        printf("\nLista Vazia ou invalida\n\n");
        return 0;
    }
    int i;
    printf("-------------------------------\n");
    for(i=0; i< li->qtd; i++){
        printf("Matricula: %d\n", li->dados[i].matricula);
        printf("Nome: %s\n", li->dados[i].nome);
        printf("Nota 01: %.2f\n", li->dados[i].n1);
        printf("Nota 02: %.2f\n", li->dados[i].n2);
        printf("-------------------------------\n");
    }
}
