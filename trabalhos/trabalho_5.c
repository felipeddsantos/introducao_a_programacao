/*

Introdução à Programação - Trabalho 5
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int trocar(int a, char b[]){

    b[a] = '_';
    
    return(a);
}

int vetor(int a, int b){

    int c[100], d;
    
    c[a] = b + 1;
    a++;
    
    for(d = 0; d < a; d++)
    
        printf("%i ", c[d]);
}

int main(){

    char a[500], v[100];
    int b, c, d = 0;

    printf("Insira uma frase: ");
    gets(a);

    for(b = 0; a[b] != '\0'; b++);

    printf("\nPosicoes das trocas (espaco por underline): ");

    for(c = 0; c < b; c++){
    
        if(a[c] == ' '){
        
            trocar(c, a);
            vetor(d, c);
        }
    }
    
    printf("\n\nNova frase: %s\n", a);
    
    return 0;
}
