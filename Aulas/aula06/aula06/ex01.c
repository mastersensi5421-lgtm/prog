#include <stdio.h>

typedef struct{
    char nome[50];
    float nota;
} Aluno;

int main(){

    int n;

    printf("Quantos alunos? ");
    scanf("%d", &n);

    Aluno turma[n];

    for(int i = 0; i < n; i++){

        printf("Nome: ");
        scanf("%49s", turma[i].nome);

        printf("Nota: ");
        scanf("%f", &turma[i].nota);
    }

    float soma = 0;

    int maiorIndice = 0;
    int menorIndice = 0;

    for(int i = 0; i < n; i++){

        soma += turma[i].nota;

        if(turma[i].nota > turma[maiorIndice].nota){
            maiorIndice = i;
        }

        if(turma[i].nota < turma[menorIndice].nota){
            menorIndice = i;
        }
    }

    float media = soma / n;

    int acimaMedia = 0;

    for(int i = 0; i < n; i++){

        if(turma[i].nota > media){
            acimaMedia++;
        }
    }

    printf("\n%-20s %5s\n", "NOME", "NOTA");
    printf("-----------------------------\n");

    for(int i = 0; i < n; i++){

        printf("%-20s %.2f\n",
               turma[i].nome,
               turma[i].nota);
    }

    printf("\nMedia da turma: %.2f\n", media);

    printf("\nMaior nota: %s (%.2f)\n",
           turma[maiorIndice].nome,
           turma[maiorIndice].nota);

    printf("Menor nota: %s (%.2f)\n",
           turma[menorIndice].nome,
           turma[menorIndice].nota);

    printf("\nAlunos acima da media: %d\n",
           acimaMedia);

    return 0;
}