#include <stdio.h>

typedef struct{
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main(){

    Produto p;

    printf("Nome: ");
    scanf("%49s", p.nome);

    printf("Preco: ");
    scanf("%f", &p.preco);

    printf("Quantidade: ");
    scanf("%d", &p.quantidade);

    float valorTotal =
        p.preco * p.quantidade;

    printf("\nNome: %s\n", p.nome);

    printf("Preco: R$ %.2f\n",
           p.preco);

    printf("Quantidade: %d\n",
           p.quantidade);

    printf("---------------------------------\n");

    printf("Valor total em estoque: R$ %.2f\n",
           valorTotal);

    return 0;
}