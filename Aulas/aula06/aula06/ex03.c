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

    int maiorIndice = 0;
    int menorIndice = 0;

    for(int i = 0; i < n; i++){

        if(turma[i].nota >
           turma[maiorIndice].nota){

            maiorIndice = i;
        }

        if(turma[i].nota <
           turma[menorIndice].nota){

            menorIndice = i;
        }
    }

    printf("\nAluno com maior nota:\n");

    printf("%s - %.2f\n",
           turma[maiorIndice].nome,
           turma[maiorIndice].nota);

    printf("\nAluno com menor nota:\n");

    printf("%s - %.2f\n",
           turma[menorIndice].nome,
           turma[menorIndice].nota);

    return 0;
}