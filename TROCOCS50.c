#include <stdio.h>
#include <stdlib.h>

int main() {
    float troco;
    int trocoCent;
    int i, j, k;
    int max25, max10, max5;
    int valor, resto;

    // Variáveis para guardar a melhor solução
    int melhorTotal = 999999;
    int melhor_i = 0, melhor_j = 0, melhor_k = 0, melhor_resto = 0;

    // Entrada do usuário
    printf("Digite o troco (em reais, ex: 0.87): ");
    scanf("%f", &troco);

    // Converte para centavos e arredonda
    trocoCent = (int)(troco * 100 + 0.5);

    // Calcula máximos possíveis de cada moeda
    max25 = trocoCent / 25;
    max10 = trocoCent / 10;
    max5  = trocoCent / 5;

    // Loops aninhados para testar todas as combinações
    for(i = 0; i <= max25; i++) {
        for(j = 0; j <= max10; j++) {
            for(k = 0; k <= max5; k++) {
                valor = i*25 + j*10 + k*5;

                if(valor <= trocoCent) {
                    resto = trocoCent - valor; // moedas de 1 centavo
                    int total = i + j + k + resto;

                    // Atualiza se essa combinação for melhor
                    if(total < melhorTotal) {
                        melhorTotal = total;
                        melhor_i = i;
                        melhor_j = j;
                        melhor_k = k;
                        melhor_resto = resto;
                    }
                }
            }
        }
    }

    // Saída da melhor combinação
    printf("Melhor combinação de moedas:\n");
    printf("25 centavos: %d\n", melhor_i);
    printf("10 centavos: %d\n", melhor_j);
    printf("5 centavos: %d\n", melhor_k);
    printf("1 centavo: %d\n", melhor_resto);
    printf("Total de moedas: %d\n", melhorTotal);

    return 0;
}
