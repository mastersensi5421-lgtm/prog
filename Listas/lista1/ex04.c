#include <stdio.h>

typedef struct{
    char nome[50];
    float nota;
} aluno;

int main(){

    int n;
    printf("Quantos alunos?\n");
    scanf("%d", &n);

    aluno turma[n];

    for(int i = 0; i < n; i++){
        printf("Nome: ");
        scanf("%49s", turma[i].nome);

        printf("Nota: ");
        scanf("%f", &turma[i].nota);
    }

    float soma = 0;
    int aprovados = 0;

    printf("\n%-20s %5s\n", "NOME", "NOTA");
    printf("-----------------------------\n");

    for(int i = 0; i < n; i++){

        printf("%-20s %.2f\n", turma[i].nome, turma[i].nota);

        soma += turma[i].nota;

        if(turma[i].nota >= 7){
            aprovados++;
        }
    }

    float media = soma / n;

    printf("\nMedia da turma: %.2f\n", media);
    printf("Aprovados: %d\n", aprovados);

    return 0;
}