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

    float totalGeral = 0;

    int maiorIndice = 0;

    printf("\n%-15s %-10s %-10s %-10s\n",
           "Produto", "Preco", "Qtd", "Total");

    printf("--------------------------------------------------\n");

    for(int i = 0; i < n; i++){

        float valorEstoque =
            estoque[i].preco *
            estoque[i].quantidade;

        printf("%-15s R$%-8.2f %-10d R$%-8.2f\n",
               estoque[i].nome,
               estoque[i].preco,
               estoque[i].quantidade,
               valorEstoque);

        totalGeral += valorEstoque;

        float maiorValor =
            estoque[maiorIndice].preco *
            estoque[maiorIndice].quantidade;

        if(valorEstoque > maiorValor){
            maiorIndice = i;
        }
    }

    float maiorEstoque =
        estoque[maiorIndice].preco *
        estoque[maiorIndice].quantidade;

    printf("--------------------------------------------------\n");

    printf("Total geral: R$%.2f\n",
           totalGeral);

    printf("Maior estoque: %s (R$%.2f)\n",
           estoque[maiorIndice].nome,
           maiorEstoque);

    return 0;
}