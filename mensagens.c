//Arquivo mensagens.c
#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

//Implementacao do MENU
void menu()
{
	printf("ACADEMICO: CLAYTON ZAMBON\n\n");
	printf("\n################################################");
	printf("\n#       MENU - Lista Estatica Sequencial       #");
	printf("\n#                                              #");
	printf("\n#	Digite a opcao desejada                #");
	printf("\n#                                              #");
	printf("\n#	 1 = Inserir elemento no Final         #");
	printf("\n#	 2 = Inserir elemento no Inicio        #");
	printf("\n#	 3 = Inserir elemento Ordenado         #");
	printf("\n#	 4 = Remover elemento do Final         #");
	printf("\n#	 5 = Remover elemento do Inicio        #");
	printf("\n#	 6 = Remover elemento                  #");
	printf("\n#	 7 = Consultar elemento pela posicao   #");
	printf("\n#	 8 = Consultar elemento pela Matricula #");
	printf("\n#	 9 = Exibir lista                      #");
	printf("\n#	 10 = Exibir Tamanho da Lista          #");
	printf("\n#	 11 = Sair                             #");
	printf("\n#                                              #");
	printf("\n################################################");
	printf("\n\n");
	printf("\nEscolha uma opcao para continuar >>: ");
}

void msg_digite_matricula(){
    printf("Digite a Matricula: ");
}

void msg_digite_nome(){
    printf("Digite o nome: ");
}

void msg_digite_nota(int nota){
    printf("Digite a Nota %d: ", nota);
}

Lista* informar_dados_aluno(struct aluno *al){
    printf("Digite a Matricula: ");
    scanf("%d", &al->matricula);
    printf("Digite o nome: ");
    scanf("%s", al->nome);
    printf("Digite a Nota 01: ");
    scanf("%f", &al->n1);
    printf("Digite a Nota 02: ");
    scanf("%f", &al->n2);
    return al;
}
