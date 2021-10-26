/*

Introdução à Programação - Trabalho 6
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

int main(){

    int a[3][3], b[3][3], c[3][3], d[3][3], e[3][3], g, h, i, j = 0;
    
    printf("Insira a primeira matriz 3x3: ");
    
    for(g = 0; g < 3; g++)
    
        for(h = 0; h < 3; h++)
        
            scanf("%i", &a[h][g]);
            
    printf("\nInsira a segunda matriz 3x3: ");
    
    for(g = 0; g < 3; g++)
    
        for(h = 0; h < 3; h++)
        
            scanf("%i", &b[h][g]);
            
    for(i = 0; i < 3; i++){
    
        for(g = 0; g < 3; g++){
        
            c[i][g] = 0;
            
            for(h = 0; h < 3; h++)
            
                j = a[i][h] * a[h][g] + j;
            
            c[i][g] = j;
            j = 0;
        }
    }
    
    for(i = 0; i < 3; i++){
    
        for(g = 0; g < 3; g++){
        
            d[i][g] = 0;
            
            for(h = 0; h < 3; h++)
            
                j = c[i][h] * b[h][g] + j;
            
            d[i][g] = j;
            j = 0;
        }
    }
    
    for(i = 0; i < 3; i++)
    
        for(g = 0; g < 3; g++){
        
            j = d[g][i] + 2 * b[g][i] - a[g][i];
            e[g][i] = j;
            j = 0;
        }
        
    printf("\nMatriz Resultante:");
    
    for(g = 0; g < 3; g++)
       
        for(h = 0; h < 3; h++)
       
            printf(" %i", e[h][g]);
    
    printf("\n");
    
    return 0;
}
