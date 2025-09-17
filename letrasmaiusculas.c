#include <stdio.h>
#include <stdlib.h>

int main(){

    char s[50];
    printf("Antes: ");
    fgets(s, 50, stdin);
    printf("Depois: ");

    int n = strlen(s);

    for( int i = 0; i < n; i++){

        if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c", s[i] - 32);

        }else{
            printf("%c", s[i]);
        }

    }
}