#include <stdio.h.>
#include <stdlib.h>
#include <string.h>

int pontos[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int pontos_palavra(char *palavra){
    int indice;
    int total = 0;
    for (int i = 0, n = strlen(palavra); i < n; i++){
        if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            indice = palavra[i] - 97;
        }
        if(palavra[i] >= 'A' && palavra[i] <= 'Z'){
            indice = palavra[i] - 65;
        }
        total += pontos[indice];
    }
    return total;

}


int main(){

    char palavra1[50];
    char palavra2[50];

    printf("Palavra 1: ");
    scanf("%s", palavra1);
    printf("Palavra 2: ");
    scanf("%s", palavra2);

    int total1 = pontos_palavra(palavra1);
    int total2 = pontos_palavra(palavra2);

    if(total1 > total2){
        printf("Palavra1 Ganhou!\nPontos: %d", total1);
    }else if(total1 < total2){
        printf("Palavra2 Ganhou!\nPontos: %d", total2);
    }else{
        printf("Empate!");
    }
        
}
    
