#include <stdio.h>
#include <string.h>

struct Livros
{
    int codigo;
    char titulo[50];
    char autor[30];
    char area[30];
    int ano;
    char editora[30];
};

#define TAMANHO_DO_ACERVO 20

void cadastrarLivros(struct Livros acervo[], int *tamanho);
void imprimirLivros(struct Livros acervo[], int tamanho);
void pesquisarLivro(struct Livros acervo[], int tamanho, int codigoBusca);
void ordenarLivros(struct Livros acervo[], int tamanho);

int main(void) {

    struct Livros acervo[TAMANHO_DO_ACERVO];

    int tamanho = 0;
    int opcao, codigobusca;

    do {
        printf("\n====== MENU ======\n");
        printf("1 - Cadastrar livros\n");
        printf("2 - Imprimir todos os livros\n");
        printf("3 - Pesquisar livro por código\n");
        printf("4 - Ordenar livros por ano de publicação\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
            case 1:
                cadastrarLivros(acervo, &tamanho);
                break;

            case 2:
                imprimirLivros(acervo, tamanho);
                break;

            case 3:
                printf("Digite o código do livro: ");
                scanf("%d", &codigobusca);
                pesquisarLivro(acervo, tamanho, codigobusca);
                break;

            case 4:
                ordenarLivros(acervo, tamanho);
                break;
        }

    } while(opcao != 5);

    return 0;
}