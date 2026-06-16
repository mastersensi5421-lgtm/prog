#include <stdio.h>

typedef struct{
    char nome[50];
    float preco;
    int quantidade;
    float totalEstoque;
} Produto;

void lerProdutos(Produto est[], int n){

    for(int i = 0; i < n; i++){

        printf("\nNome: ");
        scanf("%49s", est[i].nome);

        printf("Preco: ");
        scanf("%f", &est[i].preco);

        printf("Quantidade: ");
        scanf("%d", &est[i].quantidade);
    }
}

void calcularEstoque(Produto est[], int n){

    for(int i = 0; i < n; i++){

        est[i].totalEstoque =
            est[i].preco *
            est[i].quantidade;
    }
}

void imprimirEstoque(Produto est[], int n){

    float totalGeral = 0;

    printf("\n%-15s %-10s %-10s %-15s\n",
           "NOME", "PRECO", "QTD", "TOTAL");

    printf("-----------------------------------------------------\n");

    for(int i = 0; i < n; i++){

        printf("%-15s %-10.2f %-10d %-15.2f\n", est[i].nome, est[i].preco, est[i].quantidade, est[i].totalEstoque);

        totalGeral += est[i].totalEstoque;
    }

    printf("-----------------------------------------------------\n");

    printf("Total geral: %.2f\n", totalGeral);
}

int encontrarMaiorEstoque(Produto est[], int n){

    int maiorIndice = 0;

    for(int i = 1; i < n; i++){

        if(est[i].totalEstoque > est[maiorIndice].totalEstoque){

            maiorIndice = i;
        }
    }

    return maiorIndice;
}

int encontrarMenorPreco(Produto est[], int n){

    int menorIndice = 0;

    for(int i = 1; i < n; i++){

        if(est[i].preco < est[menorIndice].preco){

            menorIndice = i;
        }
    }

    return menorIndice;
}

int main(){

    int n;

    printf("Quantos produtos? ");
    scanf("%d", &n);

    Produto estoque[n];

    lerProdutos(estoque, n);

    calcularEstoque(estoque, n);

    imprimirEstoque(estoque, n);

    int maior =
        encontrarMaiorEstoque(estoque, n);

    int menor =
        encontrarMenorPreco(estoque, n);

    printf("\nMaior valor em estoque: %s\n", estoque[maior].nome);

    printf("Valor: %.2f\n", estoque[maior].totalEstoque);

    printf("\nMenor preco: %s\n", estoque[menor].nome);

    printf("Preco: %.2f\n", estoque[menor].preco);

    return 0;
}