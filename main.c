//main.c : Programa Principal
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSequencial.h"

int main(){
    Lista* li = cria_lista();
    //Declaração de uma Struct para armazenar e inserir os elementos
    //struct aluno dados_aluno;
    int matricula_aluno, posicao;
    int opcao;
	int i = 1;
	do {
	    system("cls");
        menu();
        scanf("%d", &opcao);
		switch(opcao) {
			case 1:
			    if (lista_cheia(li))
                {
                    system("pause");
                    break;
                }
                informar_dados_aluno(&dados_aluno);
                insere_lista_final(li, dados_aluno);
                system("pause");
                break;
            case 2:
				if(lista_cheia(li))
                {
                    system("pause");
                    break;
                }
                informar_dados_aluno(&dados_aluno);
                insere_lista_inicio(li, dados_aluno);
                system("pause");
                break;
            case 3:
				if(lista_cheia(li))
                {
                    system("pause");
                    break;
                }
                informar_dados_aluno(&dados_aluno);
                insere_lista_ordenada(li, dados_aluno);
                system("pause");
                break;
			case 4:
                remove_lista_final(li);
                system("pause");
                break;
            case 5:
                remove_lista_inicio(li);
                system("pause");
                break;
			case 6:
				if(lista_vazia(li))
                {
                    system("pause");
                    break;
                }
                printf("\nDigite a matricula a ser removida: ");
                scanf("%d", &matricula_aluno);
                remove_lista(li, matricula_aluno);
                system("pause");
                break;
			case 7:
				if(lista_vazia(li))
                {
                    system("pause");
                    break;
                }
                printf("\nDigite a posicao a ser buscada: ");
                scanf("%d", &posicao);
                consulta_lista_pos(li, posicao, &dados_aluno);
                system("pause");
                break;
            case 8:
				if(lista_vazia(li))
                {
                    system("pause");
                    break;
                }
                printf("\nDigite a matricula a ser buscada: ");
                scanf("%d", &matricula_aluno);
                consulta_lista_mat(li, matricula_aluno, &dados_aluno);
                system("pause");
                break;
			case 9:
                imprime_lista(li);
                system("pause");
                break;
            case 10:
				if(lista_vazia(li))
                {
                    system("pause");
                    break;
                }
                printf("O tamanho da Lista eh: %d\n", tamanho_lista(li));
                system("pause");
                break;
			case 11:
				printf("\n\n\t\t\Ate logo !!\n\n\n\n\n\n\n\n\n\n");
				i=0;
				break;
            default:
                printf("\n\nOpcao invalida\n\n");
                system ("pause");
                break;
		}
		printf("\n\n");
	} while(i == 1);

	libera_lista(li);
	system ("pause");
    printf("\n\n\n\n");
    return 0;
}
