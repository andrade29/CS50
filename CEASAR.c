#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //declara um vetor para armazenar strings
    char texto_simples[100];
    int chave = 0;
    
    printf("Digite o texto simples: ");
    fgets(texto_simples, 100, stdin);
    printf("Digite a chave: ");
    scanf("%d", &chave);

    //looping para checar e criptografar cada letra da palavra coletada
    for( int i = 0, n = strlen(texto_simples); i < n; i++){

        char palavra;

        if(texto_simples[i] >= 'a' && texto_simples[i] <= 'z'){
            palavra = ((texto_simples[i] - 'a') + chave) % 26 + 'a';

        }else if(texto_simples[i] >= 'A' && texto_simples[i] <= 'Z'){
            palavra = ((texto_simples[i] - 'A') + chave) % 26 + 'A';
        }
        else{
            palavra = texto_simples[i];

        }


        printf("%c", palavra);
    }
}