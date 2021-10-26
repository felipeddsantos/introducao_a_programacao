/*

Introdução à Programação - Funções e Vetores
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

//Exercício 1:
#include <stdio.h>
#include <math.h>

int fatorial(int a){

    int b;
    
    for(b = 1; a >= 1; a--)
    
        b = a * b;
        
    return(b);
}

int main(){

    int a, b, c;
    float d, e = 1, f, g;
    
    printf("Insira dois valores: ");
    scanf("%i%f", &a, &d);
    
    for(b = 1; a >= 1; a--){
    
        c = fatorial(a);
        
        for(f = 0; f < d; f++)
        
            g = pow(d, a);
            
        e = g / c + e;
    }
    
    printf("\nValor final: %f\n",e);
    
    return 0;
}

//Exercício 2:
#include <stdio.h>

int main(){

    int a, b = 1, c = 1, d = 1, e, f;
    float g = 0, h = 2, i = 1;
    
    printf("Insira a quantidade de termos da sequencia: ");
    scanf("%i", &a);
    
    while(b <= a){
    
        g = h / i + g;
        e = h;
        h = e + c;
        c = e;
        f = i;
        i = f + d;
        d = f;
        b++;
    }
    
    printf("\nSoma dos termos: %f\n", g);
    
    return 0;
}

//Exercício 3:
#include <stdio.h>

int main(){

    int a[10], b[10], c[100], d, e, f = 0;
    
    printf("Insira o primeiro vetor: ");
    
    for(d = 0; d < 10; d++)
        
        scanf("%i", &a[d]);
    
    printf("\nInsira o segundo vetor: ");
    
    for(e = 0; e < 10; e++)
    
        scanf("%i", &b[e]);
    
    printf("\nProduto de Kronecker entre os vetores: ");
    
    for(d = 0; d < 10; d++)
        
        for(e = 0; e < 10; e++){
            
            c[f] = a[d] * b[e];
      
            printf("%i ", c[f]);
      
            f++;
        }
        
    printf("\n");
    
    return 0;
}

//Exercício 4:
#include <stdio.h>

int main(){

    int a, b, c, d;
    
    printf("Insira um numero: ");
    scanf("%i", &a);
    
    printf("\nNumero invertido: ");
    
    while(a > 0){
    
        d = a / 10.0;
        c = a % 10;
        a = d;
      
        printf("%i", c);
    }
    
    printf("\n");
    
    return 0;
}

//Exercício 5:
#include <stdio.h>

int main(){

    char a[100], b[100];
    int c, d, e, f;
    
    printf("Insira o primeira texto: ");
    gets(a);
    
    printf("\nInsira o segunda texto: ");
    gets(b);
    
    for(e = 0; a[e] != '\0'; e++);
    
    for(f = 0; b[f] != '\0'; f++);
    
    if(e != f)
        
        printf("\nOs textos nao sao iguais\n");
    
    else{
    
        for(c = 0; c < e; c++){
            
            if(a[c] == b[c])
                
                d = 0;
            
            else{
                
                d = 1;
                
                break;
            }
        }
        
        if(d == 0)
            
            printf("\nOs textos sao iguais\n");
        
        else if(d == 1)
            
            printf("\nOs textos nao sao iguais\n");
    }
    
    return 0;
}

//Exercício 6:
#include <stdio.h>

int main(){

    char a[100];
    int b;
   
    printf("Insira um texto: ");
    gets(a);
   
    for(b = 0; a[b] != '\0'; b++);
   
    printf("\nTamanho do texto: %i\n", b);
   
    return 0;
}

//Exercício 7:
#include <stdio.h>

int main(){

    char a[31], b;
    int c, d = 0, e, f;
 
    printf("Insira um texto de ate 30 caracteres: ");
    gets(a);
 
    for(c = 0; a[c] != '\0'; c++);
   
    for(d = 0, e = c - 1; d <= (c - 1) / 2 && e >= (c - 1) / 2; d++, e--){
   
        b = a[d];
        a[d] = a[e];
        a[e] = b;
    }
    
    printf("\nTexto invertido: %s\n", a);
    
    return 0;
}

//Exercício 8:
#include <stdio.h>

int main(){
    
    char a[100], aux;
    int b, c = 0, d, f, g = 0, h;
    
    printf("Insira um texto: ");
    gets(a);
    
    for(h = 0; a[h] != '\0'; h++){
    
        if(a[h] >= 'A' && a[h] <= 'Z')
    
            a[h] = a[h] + ('a'-'A');
    }
    
    for(b = 0; a[b] != '\0'; b++);
    
    for(c = 0, d = b - 1; c < d && d > c; c++, d--){
    
        if(a[c] == ' ' && a[d] != ' '){
    
            c++;
            
            continue;
        }
        
        else if(a[d] == ' ' && a[c] != ' '){
            
            d--;
            
            continue;
        }
        
        else{
        
            aux = a[c];
            a[c] = a[d];
            a[d] = aux;
            
            if(a[c] != a[d])
            
                g = 1;
        }
    }
    
    if(g == 0)
    
        printf("\nO texto e palindromo\n");
    
    else
    
        printf("\nO texto nao e palindromo\n");
    
    return 0;
}

//Exercício 9:
#include <stdio.h>

int maior(int a[], int b){

    int c, d = a[0];
   
    for(c = 0; c < b; c++){
   
        if(a[c] >= d)
   
            d = a[c];
    }
   
    return d;
}

int menor(int a[], int b){

    int c, d = a[0];
    
    for(c = 0; c < b; c++){
    
        if(a[c] <= d)
        
            d = a[c];
    }
    
    return d;
}

int crescente(int a[], int b){

    int c, d, e;

    printf("\nSequencia de numeros em ordem crescente: ");

    for(c = 0; c < b; c++){
    
        for(e = c + 1; e < b; e++){
        
            if(a[e] < a[c]){
            
                d = a[e];
                a[e] = a[c];
                a[c] = d;
            }
        }
    }
    
    for(c = 0; c < b; c++)
   
        printf("%i ", a[c]);
   
    printf("\n");
   
    return 0;
}

int decrescente(int a[], int b){

    int c, d, e;

    printf("\nSequencia de numeros em ordem decrescente: ");

    for(c = 0; c < b; c++){
 
        for(e = c + 1; e < b; e++){
 
            if(a[e] > a[c]){
 
                d = a[e];
                a[e] = a[c];
                a[c] = d;
            }
        }
    }
    
    for(c = 0; c < b; c++)
        
        printf("%i ", a[c]);
    
    printf("\n");
    
    return 0;
}

int inverter(int a[], int b){

    int c, d, e = b - 1;
    
    printf("\nSequencia de numeros invertidos: ");
    
    for(c = 0; c < e && e > c; c++, e--){
    
        d = a[c];
        a[c] = a[e];
        a[e] = d;
    }
    
    for(c = 0; c < b; c++)
    
        printf("%i ", a[c]);
        
    printf("\n");
    
    return 0;
}

int posicao(int a[], int b, int c){
  
    int d, e = 1;
    
    for(d = 0; d < b; d++){
    
        if(a[d] != c)
        
            e++;
       
        else
       
            break;
    }
    
    return e;
}

int main(){
    
    menu1:;
    
    int a[200],b,c,d,e;
    
    printf("Insira a quantidade de numeros da sequencia: ");
    scanf("%i", &b);
    
    printf("\nInsira uma sequencia de numeros inteiros: ");
    
    for(c = 0; c < b; c++)
    
        scanf("%i", &a[c]);
    
    do{
       
        printf("\nInsira uma opcao: \n\nEncontrar o maior numero (1) \nEncontrar o menor numero (2) \nOrdenar crescentemente (3) \nOrdenar decrescentemente (4) \nInverter a ordem dos numeros (5) \nEncontrar a posicao de um numero (6) \nInserir novo vetor (7) \nSair do programa (8)\n");
        
        scanf("%i", &d);
        
        switch(d){
        
        case 1:
        
            printf("\nMaior numero: %i\n", maior(a, b));
        
            break;
            
        case 2:
        
            printf("\nMenor numero: %i\n", menor(a, b));
            
            break;
            
        case 3:
            
            crescente(a, b);
           
            break;
       
        case 4:
           
            decrescente(a, b);
            
            break;
       
        case 5:
           
            inverter(a, b);
           
            break;
       
        case 6:
         
            printf("\nInsira numero: ");
            scanf("%i", &e);
            
            printf("\nPosicao do numero inserido: %i\n", posicao(a, b, e));
         
            break;
            
        case 7:
        
            goto menu1;
            
            break;
        }
    }while(d != 8);
    
    return 0;
}

//Exercício 10:
#include <stdio.h>

int main(){
    
    int a[100], b, c, d[100], e[100], f = 0, g = 0;
    printf("Insira a quantidade de numeros do vetor: ");
    scanf("%i", &c);
    
    printf("\nInsira uma sequencia de numeros: ");
    
    for(b = 0; b < c; b++){
    
        scanf("%i", &a[b]);
    
        if(a[b] % 2 == 0){
    
            d[f] = a[b];
            f++;
        }
    
        else if(a[b] % 2 != 0){
    
            e[g] = a[b];
            g++;
        }
    }
    
    printf("\nSequencia com numeros pares: ");
    
    for(b = 0; b < f; b++)
    
        printf("%i ", d[b]);
    
    printf("\n\nSequencia com numeros impares: ");
    
    for(b = 0; b < g; b++)
    
        printf("%i ", e[b]);
    
    printf("\n");
    
    return 0;
}

//Exercício 11:
#include <stdio.h>

int main(){

    int a = 1, b = 2, c = 3, d, e = 0, f = 0;
    
    printf("Insira um numero: ");
    scanf("%i", &d);
    
    while(e <= d){
    
        e = a * b * c;
    
        if(e == d){
        
            printf("\nNumero triangular\n");
        
            f = 1;
        
            break;
        }
        
        a++;
        b++;
        c++;
    }
    
    if(f == 0)
        
        printf("\nNumero nao triangular\n");
    
    return 0;
}

//Exercício 12:
#include <stdio.h>

int main(){

    char a[200];
    int b;

    printf("Insira um texto: ");
    gets(a);

    for(b = 0; a[b] != '\0'; b++){
    
        if(a[b] >= 'a' && a[b] <= 'z')
     
            a[b] = a[b] + 5;
    }
    
    printf("\nTexto criptografado: %s\n", a);
    
    for(b = 0; a[b] != '\0'; b++){
    
        a[b] = a[b] - 5;
    }
    
    printf("\nTexto descriptografado: %s\n", a);
    
    return 0;
}

//Exercício 13:
#include <stdio.h>

int main(){

    char a[200];
    int b;
    
    printf("Insira um texto: ");
    gets(a);
    
    for(b = 0; a[b] != '\0'; b++){
    
        if(a[b] >= 'a' && a[b] <= 'z')
 
            a[b] = a[b] - 32;
    }
 
    printf("\nTexto com minusculas convertidas em maiusculas: %s\n", a);
 
    return 0;
}
