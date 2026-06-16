#include <stdio.h>

int potencia(int base, int exp){

    int resultado = 1;

    for(int i = 0; i < exp; i++){

        resultado *= base;
    }

    return resultado;
}

int fatorial(int n){

    int resultado = 1;

    for(int i = 1; i <= n; i++){

        resultado *= i;
    }

    return resultado;
}

int ehPrimo(int n){

    if(n < 2){
        return 0;
    }

    for(int i = 2; i < n; i++){

        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nPotencia ao quadrado: %d\n",
           potencia(num, 2));

    printf("Fatorial: %d\n",
           fatorial(num));

    if(ehPrimo(num)){

        printf("O numero e primo.\n");
    }

    else{

        printf("O numero nao e primo.\n");
    }

    return 0;
}