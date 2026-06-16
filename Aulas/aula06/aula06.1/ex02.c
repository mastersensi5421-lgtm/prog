#include <stdio.h>

typedef struct{
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main(){

    int n;

    printf("Quantos produtos? ");
    scanf("%d", &n);

    Produto estoque[n];

    for(int i = 0; i < n; i++){

        printf("Nome: ");
        scanf("%49s", estoque[i].nome);

        printf("Preco: ");
        scanf("%f", &estoque[i].preco);

        printf("Quantidade: ");
        scanf("%d", &estoque[i].quantidade);
    }

    float valorTotalGeral = 0;

    int maiorValorIndice = 0;
    int menorPrecoIndice = 0;

    printf("\n%-20s %-10s %-10s %-15s\n",
           "NOME", "PRECO", "QTD", "VALOR ESTOQUE");

    printf("-------------------------------------------------------------\n");

    for(int i = 0; i < n; i++){

        float valorEstoque =
            estoque[i].preco * estoque[i].quantidade;

        printf("%-20s %-10.2f %-10d %-15.2f\n",
               estoque[i].nome,
               estoque[i].preco,
               estoque[i].quantidade,
               valorEstoque);

        valorTotalGeral += valorEstoque;

        float maiorValorAtual =
            estoque[maiorValorIndice].preco *
            estoque[maiorValorIndice].quantidade;

        if(valorEstoque > maiorValorAtual){
            maiorValorIndice = i;
        }

        if(estoque[i].preco <
           estoque[menorPrecoIndice].preco){

            menorPrecoIndice = i;
        }
    }

    float maiorValor =
        estoque[maiorValorIndice].preco *
        estoque[maiorValorIndice].quantidade;

    printf("\nProduto com maior valor em estoque: %s\n",
           estoque[maiorValorIndice].nome);

    printf("Valor: %.2f\n", maiorValor);

    printf("\nProduto com menor preco unitario: %s\n",
           estoque[menorPrecoIndice].nome);

    printf("Preco: %.2f\n",
           estoque[menorPrecoIndice].preco);

    printf("\nValor total geral do estoque: %.2f\n",
           valorTotalGeral);

    return 0;
}