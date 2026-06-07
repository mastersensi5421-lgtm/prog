#include <stdio.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main(){
    struct Produto p;
    float valortotal, valordesconto;

    scanf("%s", p.nome);

    scanf("%f", &p.preco);

    scanf("%d", &p.quantidade);

    valortotal = p.preco * p.quantidade;
    valordesconto = valortotal * 0.9;

    printf("\nProduto: %s\n", p.nome);
    printf("Valor total em estoque: R$ %.2f\n", valortotal);
    printf("Valor com 10%% de desconto: R$ %.2f\n", valordesconto);

    return 0;
}