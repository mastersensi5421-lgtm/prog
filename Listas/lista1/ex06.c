#include <stdio.h>

typedef struct{
    char nome[50];
    int pontos;
}jogador;

int main(){
    
    int n;
    
    printf("Quantos jogadores?");
    scanf("%d", &n);
    
    jogador ranking[n];
    
    for(int i = 0; i < n; i++){
        
        printf("Nome: ");
        scanf("%49s", ranking[i].nome);
        
        printf("Pontos: ");
        scanf("%d", &ranking[i].pontos);
    }
    
    int maiorindice = 0;
    int menorindice = 0;
    
    for(int i = 1; i < n; i++){

        if(ranking[i].pontos > ranking[maiorindice].pontos){
            maiorindice = i;
        }

        if(ranking[i].pontos < ranking[menorindice].pontos){
            menorindice = i;
        }
    }
    
    printf("\nJogador com mais pontos: %s\n", ranking[maiorindice].nome);

    printf("Pontos: %d\n", ranking[maiorindice].pontos);

    printf("\nJogador com menos pontos: %s\n", ranking[menorindice].nome);

    printf("Pontos: %d\n", ranking[menorindice].pontos);

    return 0;
}