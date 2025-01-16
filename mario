#include <stdio.h>
#include <cs50.h>

int main(void){
    int altura;

    //pega um dado do usuário
    do
    {
        altura = get_int("Altura: ");
    }
    while(altura < 1 || altura > 8);

    //loop para cada linha da pirâmide
    for(int linha = 0; linha < altura; linha++)
    {
        //imprime os espaços
        for(int espaco = 0; espaco < altura - linha - 1; espaco++)
        {
            printf(" ");
        }
        //imprime os #
        for(int hashes = 0; hashes <= linha; hashes++)
        {
            printf("#");
        }
        //pula para próxima linha
        printf("\n");
    }
}
