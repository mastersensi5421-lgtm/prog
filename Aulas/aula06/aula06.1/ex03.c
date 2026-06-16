#include <stdio.h>

typedef struct{
    char nome[50];
    int pontos;
    int vitorias;
} Jogador;

int main(){

    int n;

    printf("Quantos jogadores? ");
    scanf("%d", &n);

    Jogador ranking[n];

    for(int i = 0; i < n; i++){

        printf("Nome: ");
        scanf("%49s", ranking[i].nome);

        printf("Pontos: ");
        scanf("%d", &ranking[i].pontos);

        printf("Vitorias: ");
        scanf("%d", &ranking[i].vitorias);
    }

    int maiorPontosIndice = 0;
    int maiorVitoriasIndice = 0;

    int somaVitorias = 0;

    printf("\n%-20s %-10s %-10s\n",
           "NOME", "PONTOS", "VITORIAS");

    printf("---------------------------------------------\n");

    for(int i = 0; i < n; i++){

        printf("%-20s %-10d %-10d\n",
               ranking[i].nome,
               ranking[i].pontos,
               ranking[i].vitorias);

        somaVitorias += ranking[i].vitorias;

        if(ranking[i].pontos >
           ranking[maiorPontosIndice].pontos){

            maiorPontosIndice = i;
        }

        if(ranking[i].vitorias >
           ranking[maiorVitoriasIndice].vitorias){

            maiorVitoriasIndice = i;
        }
    }

    float mediaVitorias =
        (float)somaVitorias / n;

    int acimaMedia = 0;

    for(int i = 0; i < n; i++){

        if(ranking[i].vitorias > mediaVitorias){
            acimaMedia++;
        }
    }

    printf("\nJogador com mais pontos: %s\n",
           ranking[maiorPontosIndice].nome);

    printf("Pontos: %d\n",
           ranking[maiorPontosIndice].pontos);

    printf("\nJogador com mais vitorias: %s\n",
           ranking[maiorVitoriasIndice].nome);

    printf("Vitorias: %d\n",
           ranking[maiorVitoriasIndice].vitorias);

    printf("\nMedia de vitorias: %.2f\n",
           mediaVitorias);

    printf("Jogadores acima da media de vitorias: %d\n",
           acimaMedia);

    return 0;
}