//Arquivo ListaSequencial.h
//Tamanho que será nosso vetor
#define MAX 5

/*Definindo um Tipo Aluno
Elementos da Lista: desta forma será possível guardar
vários tipos de dados*/
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2;
};

/*Implementando a Struct do tipo lista
Controlador: ira controlar o tamanho da lista
e a posição dos elementos*/
struct lista{
    int qtd;
    struct aluno dados[MAX];
};

//Definindo uma struct Lista
typedef struct lista Lista;

//Declaração de uma Struct para armazenar e inserir os elementos
struct aluno dados_aluno;

// controles.c
Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);

//inserir.c
int insere_lista_final(Lista* li, struct aluno al);
int insere_lista_inicio(Lista* li, struct aluno al);
int insere_lista_ordenada(Lista* li, struct aluno al);

//remover.c
int remove_lista_final(Lista* li);
int remove_lista_inicio(Lista* li);
int remove_lista(Lista* li, int mat);

//consultas.c
int consulta_lista_pos(Lista* li, int pos, struct aluno *al);
int consulta_lista_mat(Lista* li, int mat, struct aluno *al);
void imprime_lista(Lista* li);
Lista* informar_dados_aluno(struct aluno *al);

//mensagens.c
void menu();
void msg_digite_matricula();
void msg_digite_nome();
void msg_digite_nota(int nota);
Lista* informar_dados_aluno(struct aluno *al);
