#include <stdio.h>
#include <stdlib.h>

int main(){

    int altura,i,j,k;
    printf("Altura: ");
    scanf("%d", &altura);

    for(i=1; i<=altura; i++){
        for(j=0;j<altura - i; j++){
            printf(" ");

        }
        for(k=0; k<i; k++){
            printf("#");
        }
        printf("\n"); 
    }
}
