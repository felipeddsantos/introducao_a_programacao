/*

Introdução à Programação - Trabalho 4
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int v[10], a, d, soma, i = 0, aux, j, maior = 0, menor = 1000000;
    float b = 0, media;
    
    printf("Insira dez elementos a serem analisados: ");
    
    for(a = 0; a < 10; a++){
    
        scanf("%i", &v[a]);
        
        b = v[a] + b;
        
        if(maior <= v[a])
        
            maior = v[a];
        
        if(v[a] <= menor)
        
            menor = v[a];
    }
    
    media = b / 10;
    
    printf("\nSoma dos elementos: %f", b);
    printf("\n\nMedia dos elementos: %f", media);
    printf("\n\nMaior elemento: %i", maior);
    printf("\n\nMenor elemento: %i", menor);
    printf("\n\nPosicoes dos elementos maior que a media:");
    
    for(a = 0; a < 10; a++){
    
        if(v[a] > media)
        
            printf("\n\n%i", a + 1);
    }
    
    printf("\n\nElementos em ordem decrescente: ");
    
    for(a = 0; a < 10; a++){
    
        for(j = a + 1; j < 10; j++){
        
            if(v[j] > v[a]){
            
                aux = v[j];
                v[j] = v[a];
                v[a] = aux;
            }
        }
        
        printf("\n\n%i", v[a]);
    }
    
    printf("\n");
    
    return 0;
}
