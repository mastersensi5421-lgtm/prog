#include <stdio.h>

typedef struct{
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
}aluno;

aluno calcularmedia(aluno a){

    a.media =
        (a.nota1 + a.nota2 + a.nota3) / 3;

    return a;
}

char definirconceito(float media){

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

void imprimiraluno(aluno a){

    printf("%-15s %.2f %.2f %.2f %.2f %c\n",
           a.nome,
           a.nota1,
           a.nota2,
           a.nota3,
           a.media,
           definirconceito(a.media));
}

void ordenarpornota(aluno turma[], int n){

    for(int i = 0; i < n - 1; i++){

        int maior = i;

        for(int j = i + 1; j < n; j++){

            if(turma[j].media > turma[maior].media){
                maior = j;
            }
        }
        
        aluno temp = turma[i];
        turma[i] = turma[maior];
        turma[maior] = temp;
    }
}

int main(){

    int n;

    printf("Quantos alunos? ");
    scanf("%d", &n);

    aluno turma[n];

    for(int i = 0; i < n; i++){

        printf("\nNome: ");
        scanf("%49s", turma[i].nome);

        printf("Nota 1: ");
        scanf("%f", &turma[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &turma[i].nota2);

        printf("Nota 3: ");
        scanf("%f", &turma[i].nota3);

        turma[i] = calcularmedia(turma[i]);
    }

    ordenarpornota(turma, n);

    printf("\n%-15s %-6s %-6s %-6s %-6s %-8s\n",
           "NOME", "N1", "N2", "N3", "MEDIA", "CONCEITO");

    printf("-----------------------------------------------------\n");

    for(int i = 0; i < n; i++){
        imprimiraluno(turma[i]);
    }

    return 0;
}