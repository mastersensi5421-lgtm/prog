#include <stdio.h>

typedef struct Placar{
    char time1[50];
    char time2[50];
    int gols1, gols2;
}Placar;

int main(){
    Placar p;
    
    scanf("%s", p.time1);
    scanf("%s", p.time2);
    scanf("%d", &p.gols1);
    scanf("%d", &p.gols2);
    
    if (p.gols1 == p.gols2){
        printf("Empate");
    }else if(p.gols1 > p.gols2){
        printf("O time 1 ganhou"); 
    }else{
        printf("O time 2 ganhou");
    }

    return 0;
}
