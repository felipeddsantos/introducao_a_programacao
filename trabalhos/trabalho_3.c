/*

Introdu��o � Programa��o - Trabalho 3
Felipe Daniel Dias dos Santos - 11711ECP004
Gradua��o em Engenharia de Computa��o - Faculdade de Engenharia El�trica - Universidade Federal de Uberl�ndia

*/

//Exerc�cio 1:
#include <stdio.h>

int primo(int a){

    int b = 1;
    
    if(a % 2 != 0 && a % 3 != 0 || a == 2 || a == 3)
    
        return b;
        
    else
    
        return 0;
}

int main(){

    int c, d;
    
    printf("Insira um valor: ");
    scanf("%i", &c);
    
    d = primo(c);
    
    if(d == 1)
    
        printf("\nNumero Primo\n");
    
    else
    
        printf("\nNumero nao primo\n");
  
    return 0;
}

//Exerc�cio 2:
#include <stdio.h>

int primo(int a){

    int b = 1;
    
    if(a % 2 != 0 && a % 3 != 0 || a == 2 || a == 3)
    
        return b;
    
    else
    
        return 0;
}

int main(){

    int c, d, e, f, g = 0;
    
    printf("Insira um intervalo (valor de inicio e termino): ");
    scanf("%i%i", &c, &d);
    
    for(e = c; e <= d; e++){
    
        f = primo(e);
        
        if(f == 1){
        
            printf("\n%i\n", e);
        
            g++;
        }
    }
    
    if(g == 0)
 
        printf("\nNenhum numero primo encontrado\n");
    
    return 0;
}
