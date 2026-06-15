#include <stdio.h>

typedef struct{
    char nome[50];
    float preco;
    int quantidade;
}produto;

int main(){
    
    int n;
    
    printf("Quantos produtos?");
    scanf("%d", &n);
    
    produto estoque[n];
    
    for(int i = 0; i < n; i++){
        
        printf("Nome: ");
        scanf("%49s", estoque[i].nome);
        
        printf("Preco: ");
        scanf("%f", &estoque[i].preco);
        
        printf("Quantidade: ");
        scanf("%d", &estoque[i].quantidade);
    }
    
    float valortotalgeral = 0;
    
    int maiorindice = 0;
    float maiorvalor = 0;
    
    printf("\n%-20s %-10s %-10s %-15s\n", "NOME", "PRECO", "QTD", "VALOR ESTOQUE");
    
    printf("-------------------------------------------------------------\n");
    
    for(int i = 0; i < n; i ++){
        
        float valorestoque = estoque[i].preco * estoque[i].quantidade;
        
        printf("%-20s %-10.2f %-10d %-15.2f\n", estoque[i].nome, estoque[i].preco, estoque[i].quantidade, valorestoque);
        
        valortotalgeral = valortotalgeral + valorestoque;
        
        if(valorestoque > maiorvalor){
            maiorvalor = valorestoque;
            maiorindice = i;
        }
    }
    
    printf("\nValor total geral: R$ %.2f\n", valortotalgeral);

    printf("Produto com maior valor em estoque: %s\n",
           estoque[maiorindice].nome);

    printf("Valor: R$ %.2f\n", maiorvalor);

    return 0;
}