/*

Introdução à Programação - Estruturas de Controle
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

//Exercício 1:
#include <stdio.h>

//Divisibilidade
int main(){

    int a, b, c;
    
    printf("Informe um valor: ");
    scanf("%i", &a);
    
    printf("\nInforme outro valor: ");
    scanf("%i", &b);
    
    //Calculo do resto da divisao
    c = a % b;
                                                     
    if(c == 0) printf("\n%i e divisivel por %i\n", a, b);
    
    else printf("\n%i nao e divisivel por %i\n", a, b);
    
    return(0);
}

//Exercício 2:
#include <stdio.h>

//Duracao de uma experiencia biologica
int main(){

    int a, b, c, d, e, f, g;
    
    printf("Informe a hora, o minuto e o segundo de inicio da experiencia: ");
    scanf("%i%i%i", &a, &b, &c);
    
    printf("\nInforme a duracao da experiencia (em segundos): ");
    scanf("%i", &d);
    
    //Calculos de conversoes de tempo
    e = (d % (24 * 60 * 60))/(3600) + a;
    f = ((d % (24 * 60 * 60)) % (3600)) / 60 + b;                        
    g = ((d % (24 * 60 * 60)) % (3600)) % 60 + c;
    
    //Ajustes dos tempos a partir dos calculos anteriores 
    if(g >= 60){
    
        f = g / 60 + f;
        g = g - 60;
    }    
                                                      
    if(f >= 60){
    
        e = f / 60 + e;
        f = f - 60;
    }
    
    printf("\nHorario do termino da experiencia: %i %i %i", e, f, g);
    
    return(0);
}

//Exercício 3:
#include <stdio.h>

//Ano bissexto
int main(){

    int a, b, c;
    
    printf("Insira um ano: ");
    scanf("%i", &a);
    
    //Calculo das condicoes para um ano bissexto
    b = a % 4;                                                   
    c = a % 100;
    
    if(b == 0 && c != 0) printf("\nO ano %i e bissexto\n", a);
  
    else printf("\nO ano %i nao e bissexto\n", a);
  
    return(0);
}

//Exercício 4:
#include <stdio.h>

//Soma de algarismos
int main(){

    int a, b = 0;
    
    printf("Insira um numero de ate tres algarismos: ");
    scanf("%i", &a);
    
    //Condicoes para a realizacao da soma
    if(a > 999){
    
        printf("\nQuantidade de algarismos incorreta\n");
        
        return(0);
    }
    
    else{
    
        //Calculo da soma
        while(a>0){
        
            b = b + a % 10;
            a = a / 10;
        }
        
        printf("\nSoma dos algarismos: %i\n", b);
    }
    
    return(0);
}

//Exercício 5:
#include <stdio.h>

//Quantidade de notas
int main(){

    int a, b, c, d, e, f, g, h;
    
    printf("Insira um valor: ");
    scanf("%i", &a);
    
    //Condicoes para notas de 50
    if(a >= 50){
    
        c = a / 50;
        b = a % 50;
        d = b / 20;
        
        printf("\nQuantidade de notas de 50: %i", c);
    }
    
    else if(a < 50 && a >= 20){
    
        d = a / 20;
        b = a % 20;
        e = b / 10;
    }
    
    else if(a < 20 && a >= 10){
    
        e = a / 10;
        b = a % 10;
        f = b / 5;
    }
    
    else if(a < 10 && a >= 5){
    
        //Calculos  para as demais notas
        f = a / 5;
        b = a % 5;
        g = b / 2;
    }
    
    else if(a < 5 && a >= 2){
    
        g = a / 2;
        b = a % 2;
        h = b / 1;
    }
    
    else if(a < 2 && a >= 1){
    
        h = a / 1;
        b = a % 1;
    }
    
    if(a >= 20 && d < 1){
    
        printf("\nQuantidade de notas de 20: 0");
        
        e = b / 10;
    }
    
    if(a >= 20 && d >= 1){
    
        //Condicoes para notas de 20
        printf("\nQuantidade de notas de 20: %i", d);
                  
        e = b % 20 / 10;
    }
    
    if(a >= 10 && e < 1){
    
        printf("\nQuantidade de notas de 10: 0");
        
        f = b % 20 / 5;
    }
    
    if(a >= 10 && e >= 1){
    
        //Condicoes para notas de 10
        printf("\nQuantidade de notas de 10: %i", e);         
        
        f = (b % 20) % 10 / 5;
    }
    
    if(a >= 5 && f < 1){
    
        printf("\nQuantidade de notas de 5: 0");
        
        g = (b % 20) % 10 / 2;
    }
    
    if(a >= 5 && f >= 1){
    
        //Condicoes para notas de 5
        printf("\nQuantidade de notas de 5: %i", f);          
        
        g = (( b % 20) % 10) % 5 / 2;
    }
    
    if(a >= 2 && g < 1){
    
        printf("\nQuantidade de notas de 2: 0");
        
        h = (( b % 20) % 10) % 5 / 1;
    }
    
    if(a >= 2 && g >= 1){
    
        //Condicoes para notas de 2
        printf("\nQuantidade de notas de 2: %i", g);       
        
        h = (((b % 20) % 10) % 5) % 2 / 1;
    }
    
    if(a >= 1 && h < 1)
    
        //Condicoes para notas de 1
        printf("\nQuantidade de notas de 1: 0\n");         
    
    if(a >= 1 && h >= 1)
    
        printf("\nQuantidade de notas de 1: %i\n", h);
    
    return(0);
}

//Exercício 6:
#include <stdio.h>
#include <math.h>

//Operacoes de numeros complexos
int main(){

    int a, b, c, d, e, f, g, h, i, j;
    float m, n;
    
    printf("Insira o primeiro numero complexo (parte real e imaginaria): ");
    scanf("%i%i", &a, &b);
   
    printf("\nInsira o segundo numero complexo (parte real e imaginaria): ");
    scanf("%i%i", &c, &d);
   
    //Calculo da soma
    e = a + c;                                         
    f = b + d;
    
    //Calculo da subtracao
    g = a - c;                                                                        
    h = b - d;
    
    //Calculo da multiplicacao
    i = (a * c - b * d);                                   
    j = (a * d + b * c);                                 
    k = (a * a) + (b * b);
    l = (c * c) + (d * d);
    
    //Calculo do modulo
    m = sqrt(k);                                     
    n = sqrt(l);
    
    printf("\nSoma: %i %ii", e, f);
    printf("\n\nSubtracao: %i %ii", g, h);
    printf("\n\nMultiplicacao: %i %ii", i, j);
    printf("\n\nModulo do primeiro numero complexo: %f", m);
    printf("\n\nModulo do segundo numero complexo: %f\n", n);
    
    return(0);
}

//Exercício 7:
#include <stdio.h>
#include <math.h>

//Conversao de coordenadas
int main(){

    float a, b, c, d, e, f;
    
    printf("Insira uma coordenada polar: ");
    scanf("%f%f", &a, &b);
    
    c = cos(b);                                   
    d = sin(b);
    
    //Calculo de x
    e = a * c;    
    
    //Calculo de y                                                     
    f = a * d;
                                                            
    printf("\nPonto em coordenada cartesiana: (%f,%f)\n", e, f);
    
    return(0);
}

//Exercício 8:
#include <stdio.h>

//Operacao de fracoes
int main(){

    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    
    printf("Insira a primeira fracao (numerador e denominador): ");
    scanf("%i%i", &a, &b);
    
    printf("\nInsira a segunda fracao (numerador e denominador): ");
    scanf("%i%i", &c, &d);
    
    e = b * d;
    
    //Calculo da soma
    f = (b * d / b) * a;                                   
    g = (b * d / d) * c;
    h = f + g;
    printf("\nSoma: %i/%i", h, e);
    
    //Calculo da subtracao
    i = b * d;                                         
    j = (b * d / b) * a;
    k = (b * d / d) * c;
    l = f - g;
    printf("\n\nSubtracao: %i/%i", l, i);
    
    //Calculo da multiplicacao
    m = b * d;                                        
    n = a * c;
    printf("\n\nMultiplicacao: %i/%i", n, m);
    
    //Calculo da divisao
    o = a * d;                                        
    p = b * c;
    printf("\n\nDivisao: %i/%i\n", o, p);
    
    return(0);
}

//Exercício 9:
#include <stdio.h>
int main(){

    int a;                            
    
    //Valores multiplicados por 3 ate ser maior que 100
    printf("Insira um valor: ");
    scanf("%i", &a);
    
    printf("\n%i\n", a);
    
    //Condicoes para os valores serem exibidos
    while(a < 100){
    
        a = a * 3;
        
        printf("\n%i\n", a);
    }
    
    return(0);
}

//Exercício 10:
#include <stdio.h>
#include <stdlib.h>

//Calculo da associacao de resistores
int main(){

    float a, b, c;
    
    do{
    
        printf("Insira o valor de dois resistores: ");
        scanf("%f%f", &a, &b); 
        
        //Calculo da resistencia final                            
        c = a * b / (a + b);
        printf("\nValor da resistencia: %f\n\n", c);
        
        system("pause");        
        system("cls");
    }while(a != 0 && b != 0);                                    
   
    return(0);
}

//Exercício 11:
#include <stdio.h>

//Soma dos valores de 3 a 10
int main(){

    int a = 10, b = 0, c, d = 0;
 
    printf("Valores: \n");
    
    //Calculo usando while
    while(a <= 10 && a >= 3){
    
        printf("\n%i", a);
    
        b = a + b;
        a--;
    }
    
    printf("\n\nSoma dos termos: %i\n\n", b);
    printf("Valores: \n");
    
    //Mesmo calculo com for
    for(c = 10; c <= 10 && c >= 3; c--){
    
        printf("\n%i", c);
        
        d = c + d;
    }
    
    printf("\n\nSoma dos termos: %i\n", d);
    
    return(0);
}

//Exercício 12:
#include <stdio.h>

//Multiplos de 2, 3 e 5 entre 1 e 100
int main(){

    int a = 2, b, c, d, e = 1, f = 1, g = 1, h = 1;
    
    //Condicoes para o intervalo
    while(a > 1 && a < 100){
    
        b = a % 2;
        c = a % 3;
        d = a % 5;
        
        //Calculo dos multiplos de 2
        if(b == 0)
        
            e++;                             
    
        //Calculo dos multiplos de 3
        if(c == 0)
        
            f++;                               
        
        //Calculo dos multiplos de 5
        if(d == 0)
        
            g++;                             
        
        //Calculo dos multiplos de 2, 3 e 5
        if(b == 0 && c == 0 && d == 0)
        
            h++;                             
        
        a++;
    }
    
    printf("Multiplos de 2: %i\n", e);
    printf("\nMultiplos de 3: %i\n", f);
    printf("\nMultiplos de 5: %i\n", g);
    printf("\nMultiplos de 2, 3 e 5 simultaneamente: %i\n", h);
    
    return(0);
}

//Exercício 13:
#include <stdio.h>

//Calculo de potenciacao
int main(){

    int a, b, c, d = 1;
    
    printf("Insira uma base e um expoente: ");
    scanf("%i%i", &a, &b);
    
    if(b != 0){
    
        do{
            
            //Incremento do expoente e multiplicacoes sucessivas
            d = a * d;                                  
            c = b--;
        }while(c != 1);
        
        printf("\nResultado: %i\n", d);
        
        return(0);
    }
    
    else
    
        printf("\nResultado: 1\n");
        
    return(0);
}
