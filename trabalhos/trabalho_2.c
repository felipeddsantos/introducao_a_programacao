/*

Introdução à Programação - Trabalho 2
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

//Exercício 1:
#include <stdio.h>

//Impares em ordem decrescente de a ate 1
int main(){

    int a, b;

    printf("Insira um valor: ");
    scanf("%i", &a);
    
    //Condicoes para um numero impar no intervalo
    for(b = a; b <= a && b >= 1; b--){
    
        if(b % 2 != 0)
        
            printf("\n%i\n", b);
    }
    
    return(0);
}

//Exercício 2:
#include <stdio.h>

//Pares em ordem crescente de 2 ate a
int main(){

    int a, b;

    printf("Insira um valor: ");
    scanf("%i", &a);
    
    //Condicoes para pares no intervalo
    for(b = 2; b >= 2 && b <= a; b++){
    
        if(b % 2 == 0)
         
            printf("\n%i\n", b);
    }
    
    return(0);
}

//Exercício 3:
#include <stdio.h>

//Calculo de juros compostos
int main(){

    float a, b = 1, c;
    
    printf("Insira uma divida: ");
    scanf("%f", &a);
    
    //Condicoes de periodo (3 anos) e incremento da divida
    for(c = 0; b >= 1 && b <= 36; b++){
    
        c = a * 0.075;
        a = a + c;
    }
    
    printf("\nDivida final: %f\n", a);
    
    return(0);
}

//Exercício 4:
#include <stdio.h>
#include <math.h>
#define pi 3.1415

//Calculo do seno
int main(){

    float a, b, c, d = 0, e, f;

    printf("Insira um valor (em graus): ");
    scanf("%f", &a);
    
    //Conversao de grau para radiano
    a = a * pi / 180;                                   
    
    for(e = 0; e < 5; e++){
    
        //Fatorial utilizado na serie de Taylor   
        b = 1;                                       
        c = 2 * e + 1;
        
        //Calculo a partir da serie de Taylor
        for(f = 1; f <= c; f++)  
                              
            b = b * f;
            
        d = d + pow(-1, e) * pow(a, 2 * e + 1) / b;
    }
    
    printf("\nSeno: %f\n", d);
    
    return(0);
}

//Exercício 5:
#include <stdio.h>

//Calculo de serie
int main(){

    float a, b, d = 0, c = 1, e, i, j, k, f, b1;

    //Decremento dos numeradores (somente impares)
    for(a = 61; a > 1; a = -2){
    
        //Incremento do fatorial dos denominadores 
        for(i = 1; i <= 32; i++){
        
            c = c * i;
            b = (a / c) + b;
        }
    }
    
    j = 61 + b;
    
    printf("Quantidade de termos da serie: 32\n");
    printf("\nResultado da serie: %f\n", j);
    
    return(0);
}
