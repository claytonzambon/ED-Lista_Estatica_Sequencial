//Arquivo ListaSequencial.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h" //inclui os Protótipos

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

