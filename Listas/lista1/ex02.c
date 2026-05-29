#include <stdio.h>

typedef struct Placar{
    char time1[50];
    char time2[50];
    int gols1, gols 2;
}Placar;

int main(){
    Pessoa p;
    
    scanf("%s", p.time1);
    scanf("%s", p.time2);
    scanf("%d", &p.gols1);
    scanf("%d", &p.gols2);
    
    if (p.gols1 == p.gols2){
        printf("Empate");
    }
}