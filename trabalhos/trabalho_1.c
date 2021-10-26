/*

Introdução à Programação - Trabalho 1
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <stdio.h>

//Valor de uma carga
int main(){

    int a, b;
    float c, d, e, f, g;
    
    printf("Insira o codigo de carga: ");
    scanf("%i", &b);
    
    printf("\nInsira o codigo do estado: ");
    scanf("%i", &a);
    
    printf("\nInsira o peso da carga (em toneladas): ");
    scanf("%f", &c);
    
    if(b < 10 || b > 40){
    
        printf("\n\nCodigo de carga invalido\n");
        
        return(0);
    }
    
    else{
    
        if(b >= 10 && b <= 20){
        
            //Conversao da carga (tonelada para quilograma)
            d = c * 1000;    
            
            //Calculo do preco da carga                                             
            e = d * 100;
                                                              
            printf("\nPeso da carga (em quilogramas): %f", d);
            printf("\n\nPreco da carga (por quilograma): %f", e);
        }
        
        else if(b >= 21 && b <= 30){
        
            d = c * 1000;
            e = d * 250;
            
            printf("\nPeso da carga (em quilogramas): %f", d);
            printf("\n\nPreco da carga (por quilograma): %f", e);
        }
        
        else if(b >= 31 && b <= 40){
        
            d = c * 1000;
            e = d * 340;
            
            printf("\nPeso da carga (em quilogramas): %f", d);
            printf("\n\nPreco da carga (por quilograma): %f", e);
        }
    }
    
    if(a < 1 || a > 5){
    
        printf("\nCodigo de estado invalido\n");
        
        return(0);
    }
    
    else{
    
        if(a == 1){
        
            //Calculo do imposto da carga
            f = e * 0.35;
                                                          
            printf("\n\nImposto da carga: %f", f);
        }
        
        else if(a == 2){
        
            f = e * 0.25;
            
            printf("\n\nImposto da carga: %f", f);
        }
        
        else if(a == 3){
        
            f = e * 0.15;
            
            printf("\n\nImposto da carga: %f", f);
        }
        
        else if(a == 4){
        
            f = e * 0.05;
            
            printf("\n\nImposto da carga: %f", f);
        }
        
        else if(a == 5){
        
            f = 0;
            
            printf("\nIsento de imposto");
        }
    }
    
    //Calculo do valor total
    g = f + e;
    
    printf("\n\nValor total (valor da carga mais imposto): %f\n", g);
    
    return(0);
}
