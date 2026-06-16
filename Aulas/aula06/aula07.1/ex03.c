#include <stdio.h>

typedef struct{
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
} Aluno;

float calcularMedia(float n1, float n2, float n3){

    return (n1 + n2 + n3) / 3;
}

char definirConceito(float media){

    if(media >= 9){
        return 'A';
    }

    else if(media >= 7){
        return 'B';
    }

    else if(media >= 5){
        return 'C';
    }

    else{
        return 'D';
    }
}

void ordenarPorMedia(Aluno turma[], int n){

    for(int i = 0; i < n - 1; i++){

        int iMaior = i;

        for(int j = i + 1; j < n; j++){

            if(turma[j].media > turma[iMaior].media){

                iMaior = j;
            }
        }

        Aluno temp = turma[i];

        turma[i] = turma[iMaior];

        turma[iMaior] = temp;
    }
}

void imprimirBoletim(Aluno turma[], int n){

    printf("\n%-15s %-6s %-6s %-6s %-8s %-10s\n", "NOME", "N1", "N2", "N3", "MEDIA", "CONCEITO");

    printf("-----------------------------------------------------------\n");

    for(int i = 0; i < n; i++){

        printf("%-15s %-6.2f %-6.2f %-6.2f %-8.2f %-10c\n", turma[i].nome, turma[i].nota1, turma[i].nota2, turma[i].nota3, turma[i].media, definirConceito(turma[i].media));
    }
}

int main(){

    int n;

    printf("Quantos alunos? ");
    scanf("%d", &n);

    Aluno turma[n];

    for(int i = 0; i < n; i++){

        printf("\nNome: ");
        scanf("%49s", turma[i].nome);

        printf("Nota 1: ");
        scanf("%f", &turma[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &turma[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &turma[i].nota3);

        turma[i].media = calcularMedia(turma[i].nota1, turma[i].nota2, turma[i].nota3);
    }

    ordenarPorMedia(turma, n);

    imprimirBoletim(turma, n);

    return 0;
}