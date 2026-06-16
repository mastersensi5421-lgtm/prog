#include <stdio.h>

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

void imprimirSituacao(char nome[], float media, char conceito){

    printf("%-15s %.2f %c\n", nome, media, conceito);
}

int main(){

    char nome[50];

    float n1, n2, n3;

    for(int i = 0; i < 3; i++){

        printf("Nome: ");
        scanf("%49s", nome);

        printf("Nota 1: ");
        scanf("%f", &n1);

        printf("Nota 2: ");
        scanf("%f", &n2);

        printf("Nota 3: ");
        scanf("%f", &n3);

        float media =
            calcularMedia(n1, n2, n3);

        char conceito =
            definirConceito(media);

        imprimirSituacao(nome, media, conceito);
    }

    return 0;
}