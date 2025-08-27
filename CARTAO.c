#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char numeroCartao[20];
    printf("Digite o numero do cartao: ");
    scanf("%s" , numeroCartao);

    int digito, i, n, soma;
    soma = 0;
    int posicao = 1;
    n = strlen(numeroCartao);

    for (i = n-1; i>=0; i--){
        digito = numeroCartao[i] - '0';

        if(posicao % 2 == 0){
            digito = digito * 2;
            if(digito > 9){
                digito = digito - 9;
            }
        }
        soma += digito;
        posicao++;
    }

    if(soma % 10 == 0){
        printf("O cartao e valido!\n");

    }else{
        printf("O cartao nao e valido!\n");
    }
    
    if(strlen(numeroCartao) == 15){
        if(numeroCartao[0] == '3' && numeroCartao[1] == '4'){
            printf("A bandeira e AMEX!");
        }
        if(numeroCartao[0] == '3' && numeroCartao[1] == '7'){
            printf("A bandeira e AMEX!");
        }

    }

    if(strlen(numeroCartao) >= 13 && strlen(numeroCartao) <= 16){
        if(numeroCartao[0] == '4' ){
            printf("A bandeira e VISA!");
        }
    }

    if(strlen(numeroCartao) == 16){
        if(numeroCartao[0] == '5' && (numeroCartao[1] >= '1' && numeroCartao[1] <= '5')){
            printf("A bandeira e MASTERCARD!");
            
        }else {
        int prefixo4 = (numeroCartao[0]-'0')*1000 +
                       (numeroCartao[1]-'0')*100 +
                       (numeroCartao[2]-'0')*10 +
                       (numeroCartao[3]-'0');
        if(prefixo4 >= 2221 && prefixo4 <= 2720){
            printf("A bandeira e MASTERCARD!");
        }
    }

}
}