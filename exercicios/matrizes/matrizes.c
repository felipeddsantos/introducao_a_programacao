/*

Introdução à Programação - Matrizes
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

//Exercício 1:
#include <stdio.h>

int main(){

    int a, b;
    double mat1[2][3], mat2[2][3], mat3[2][3];
    
    printf("Insira a primeira matriz 2x3: ");
   
    for(a = 0; a < 2; a++)
    
        for(b = 0; b < 3; b++)
        
            scanf("%lf", &mat1[a][b]);
            
    printf("Insira a segunda matriz 2x3: ");
    
    for(a = 0; a < 2; a++)
    
        for(b = 0; b < 3; b++)
    
            scanf("%lf", &mat2[a][b]);
    
    printf("Soma das matrizes: ");
    
    for(a = 0; a < 2; a++)
    
        for(b = 0; b < 3; b++){
    
            mat3[a][b] = mat1[a][b] + mat2[a][b];
    
            printf("%lf ", mat3[a][b]);
        }
    
    return 0;
}

//Exercício 2:
#include <stdio.h>

int main(){

    int a, b, c;
    double mat1[3][2], mat2[2][3], mat3[3][3];
    
    printf("Insira a primeira matriz 3x2: ");
    
    for(a = 0; a < 3; a++)
    
        for(b = 0; b < 2; b++)
    
            scanf("%lf", &mat1[a][b]);
    
    printf("Insira a segunda matriz 2x3: ");
    
    for(a = 0; a < 2; a++)
    
        for(b = 0; b < 3; b++)
    
            scanf("%lf", &mat2[a][b]);
    
    printf("Produto das matrizes: ");
    
    for(a = 0; a < 3; a++)
    
        for(b = 0; b < 3; b++){
    
            mat3[a][b] = 0;
    
            for(c = 0; c < 2; c++)
    
                mat3[a][b] = mat1[a][c] * mat2[c][b] + mat3[a][b];
        }
    
    for(a = 0; a < 3; a++)
    
        for(b = 0; b < 3; b++)
    
            printf("%lf ", mat3[a][b]);
    
    return 0;
}

//Exercício 3:

//Será impresso pelo programa a matriz a seguir:

//1 2 3 4
//5 6 7 8
//9 10 11 12

//Exercício 4:
#include <stdio.h>

int main(){

    int a, b, c, d;
    double mat1[4][5], maior;

    printf("Insira uma matriz 4x5: ");

    for(a = 0; a < 4; a++)
    
        for(b = 0; b < 5; b++){
        
            scanf("%lf", &mat1[a][b]);
            
            maior = mat1[0][0];
            
            if(mat1[a][b] >= maior){
            
                maior = mat1[a][b];
                c = a;
                d = b;
            }
        }
        
    printf("\nMaior elemento da matriz: %lf", maior);
    printf("\n\nPosicao do maior elemento da matriz: [%i][%i]\n", c + 1, d + 1);
   
    return 0;
}

//Exercício 5:
#include <stdio.h>

int main(){
    
    int a, b, c = 0, k;
    double mat1[100][100], soma = 0, vet[100];
    
    printf("Insira a ordem para uma matriz quadrada (ate 100): ");
    scanf("%i", &k);
    
    printf("\nInsira a matriz quadrada de ordem %i: ", k);
    
    for(a = 0; a < k; a++)
     
        for(b = 0; b < k; b++){
     
            scanf("%lf", &mat1[a][b]);
     
            if(a == b){
     
                soma = mat1[a][b] + soma;
                vet[c] = mat1[a][b];
                c++;
            }
        }

    printf("\nSoma dos elementos da diagonal principal: %lf", soma);
    printf("\n\nVetor com os elementos da diagonal principal: ");

    for(a = 0; a < c; a++)
    
        printf("%lf ", vet[a]);
    
    printf("\n");
    
    return 0;
}

//Exercício 6:
#include <stdio.h>

int main(){

    int a, b, c = 0, k;
    double mat1[100][20], soma = 0, vet[100];
    
    printf("Insira a ordem para uma matriz quadrada (ate 100): ");
    scanf("%i", &k);
    
    printf("\nInsira a matriz quadrada de ordem %i: ", k);
    
    for(a = 0; a < k; a++)
        
        for(b = 0; b < k; b++){
        
            scanf("%lf", &mat1[a][b]);
        
            if( a + b == k - 1){
        
                soma = mat1[a][b] + soma;
                vet[c] = mat1[a][b];
                c++;
            }
        }
        
    printf("\nSoma dos elementos da diagonal secundaria: %lf", soma);
    printf("\n\nVetor com os elementos da diagonal secundaria: ");
    
    for(a = 0; a < c; a++)
    
        printf("%lf ", vet[a]);
        
    printf("\n");
    
    return 0;
}

//Exercício 7:
#include <stdio.h>

int main(){

    double mat1[100][100];
    int a, b, k, flag=0, flag1 = 0, d;
    
    printf("Insira a ordem para uma matriz quadrada (ate 100): ");
    scanf("%i", &k);
    
    printf("\nInsira a matriz quadrada de ordem %i: ", k);
    
    for(a = 0; a < k; a++)
    
        for(b = 0; b < k; b++){
        
            scanf("%lf", &mat1[a][b]);
            
            for(d = 0; d < k; d++){
            
                if(mat1[a][b] != 1 && mat1[a][b] != 0)
                
                    flag1 = 1;
                    
                if(mat1[a][b] == 1 && (mat1[a][b] == mat1[a][d] || mat1[a][b] == mat1[d][b] == 1))
                   
                    flag++;
            }
        }
        
    if(flag > 2 * k || flag1 == 1)
  
        printf("\nA matriz nao e de permutacao\n\n");
  
    else
  
        printf("\nA matriz e de permutacao\n\n");
  
    return 0;
}

//Exercício 8:
#include <stdio.h>

int main(){

    double mat1[100][100], soma1, soma2, soma3 = 0, soma4 = 0, vet1[100], vet2[100];
    int a, b, k, c = -1, d, e = -1, f = 0, g = 0;
    
    printf("Insira a ordem para uma matriz quadrada (ate 100): ");
    scanf("%i", &k);
    
    printf("\nInsira a matriz quadrada de ordem %i: ", k);
    
    for(a = 0; a < k; a++)
    
        for(b = 0; b < k; b++)
        
            scanf("%lf", &mat1[a][b]);
            
    for(a = 0; a < k; a++){
    
        c++;
        e++;
        soma1 = 0;
        soma2 = 0;
        
        for(b = 0; b < k; b++){
        
            soma1 = soma1 + mat1[a][b];
            vet1[c] = soma1;
            soma2 = soma2 + mat1[b][a];
            vet2[e] = soma2;
            
            if(a == b)
            
                soma3 = mat1[a][b] + soma3;
            
            if(a + b == k - 1)
            
                soma4 = mat1[a][b] + soma4;
        }
    }
    
    if(soma1 == soma2 && soma1 == soma3 && soma1 == soma4)
    
        printf("\nA matriz e um quadrado magico\n");
    
    else
    
        printf("\nA matriz nao e um quadrado magico\n");
    
    return 0;
}

//Exercício 9:
#include <stdio.h>

int main(){

    int mat[200][200] = {}, n, a, b;
    mat[0][0] = mat[1][0] = mat[1][1] = 1;
    
    printf("Insira a ordem do triangulo de Pascal (ate 200): ");
    scanf("%i", &n);
    
    for(a = 0; a < n; a++){
    
        printf("\n");
        
        for(b = 0; b < n; b++){
        
            if(a > 1)
            
                mat[a][b] = mat[a - 1][b] + mat[a - 1][b - 1];
                
            printf("%i ", mat[a][b]);
            
            if(a == b)
            
                break;
        }
    }
    
    printf("\n");
    
    return 0;
}

//Exercício 10:
#include <stdio.h>

int main(){

    int mat[200][200], mat1[200][200], vet[200], a1, b1, a, b, c;
    
    printf("Insira a quantidade de linhas da matriz: ");
    scanf("%i", &a1);
    
    printf("Insira a quantidade de colunas da matriz: ");
    scanf("%i", &b1);
    
    printf("Insira os elementos da matriz: ");
    
    for(a = 0; a < a1; a++)
    
        for(b = 0; b < b1; b++)
        
            scanf("%i", &mat[a][b]);
            
    printf("Insira os %i elementos do vetor: ", b);
    
    for(a = 0; a < a1; a++)
    
        scanf("%i", &vet[a]);
        
    for(a = 0; a < a1; a++)
    
        for(b = 0; b < b1; b++){
        
            mat1[a][b] = 0;
        
            for(c = 0; c < b1; c++)
            
                mat1[a][b] = mat[a][c] * vet[c] + mat1[a][b];
        }
        
        printf("Produto da matriz com o vetor: ");
        
        for(a = 0; a < a1; a++)
        
        for(b = 0; b < b1; b++)
        
            printf("%i ", mat1[a][b]);
            
    return 0;

//Exercício 11:
#include <stdio.h>

int main(){

    int coe[10][10], res[20][20], sol[20][20], a, b, c, x = 0, y = 0, j = 0, i = 0, k, vet[20], k1 = 0;
    
    printf("Insira a quantidade de equacoes: ");
    scanf("%i", &k);
    
    printf("Insira a matriz dos coeficientes: ");
    
    for(a = 0; a < k; a++)
    
        for(b = 0; b < k; b++)
        
            scanf("%i", &coe[a][b]);
            
    printf("Insira a matriz dos termos independentes: ");
    
    for(a = 0; a < k; a++)
    
        scanf("%i", &res[a][y]);
        
    printf("Insira a matriz solução: ");
    
    for(a = 0; a < k; a++)
    
        scanf("%i", &sol[a][y]);
    
    while(i < k){
    
        for(a = 0; a < k; a++){
        
            x = coe[j][a] * sol[a][k1] + x;
            vet[i] = x;
        }
        
        x = 0;
        i++;
        j++;
    }
    
    for(a = 0; a < k; a++){
    
        if(vet[a] == res[a][y])
        
            k1 = 1;
            
        else{
        
            k1 = -1;
            
            break;
        }
    }
    
    if(k1 == 1)
        
        printf("Solucao compativel");
    
    else
    
        printf("Solucao incompativel");
    
    return 0;
}

//Exercício 12:
#include <stdio.h>

int inicio(int mat[][200], int a, int b){
 
    if(mat[a][b] != -1 && ((mat[a - 1][b] == -1 && mat[a + 1][b] != -1) ||
                          (mat[a][b - 1] == -1 && mat[a][b + 1] != -1)))
    
        return 1;
    
    else
    
        return 0;
}

int main(){

        int mat[200][200], m, n, a, b, k;
        
        printf("Insira dimensoes do jogo: ");
        scanf("%d%d", &m, &n);
        
        printf("\nInsira a matriz: ");
        
        for(a = 1; a <= m; a++)
        
            for(b = 1; b <= n; b++)
            
                scanf("%d", &mat[a][b]);
                
        for(b = 0; b <= n+1; b++){
        
            mat[0][b] = -1;
            mat[m + 1][b] = -1;
        }
        
        for(a = 1; a <= m; a++){
        
            mat[a][0] = -1;
            mat[a][n + 1] = -1;
        }
        
        k=0;
        
        for(a = 1; a <= m; a++)
        
            for(b = 1; b <= n; b++)
            
                if(inicio(mat, a, b) == 1){
                    
                    k++;
                    mat[a][b] = k;
                }
                
        printf("Matriz resultante:\n");
        
        for(a = 1; a <= m; a++){
        
            for(b = 1; b <= n; b++)
            
                printf("%3d", mat[a][b]);
                
            printf("\n");
        }
        
        return 0;
    }

//Exercício 13:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a = 0;

struct carro{

    char marca[15];
    int ano;
    char cor[10];
    double preco;
}vetcarros[20];

void cadastrar(){

    system("cls");
    
    printf("Insira a marca: ");
    fflush(stdin);
    gets(vetcarros[a].marca);
    
    printf("Insira o ano: ");
    scanf("%i", &vetcarros[a].ano);
   
    printf("Insira a cor: ");
    fflush(stdin); 
    gets(vetcarros[a].cor);
    
    printf("Insira o preco: ");
    scanf("%lf", &vetcarros[a].preco);
    
    a++;
    
    system("pause");
}

void preco(){

    system("cls");
    
    double b;
    int c, k = 0;
    
    printf("Insira o preco a ser pesquisado: ");
    scanf("%lf", &b);
    
    for(c = 0; c < a; c++){
    
        if(vetcarros[c].preco <= b){
        
            printf("\nDados do carro com o preco menor ou igual ao pesquisado: ");
            printf("\nMarca: ");
            printf("%s",vetcarros[c].marca);
            
            printf("\nAno: ");
            printf("%i",vetcarros[c].ano);
            
            printf("\nCor: ");
            printf("%s",vetcarros[c].cor);
            
            k=1;
        }
    }
    
    if(k == 0)
    
        printf("\nNao existem carros com esse preco");
    
    system("pause");
}

void marca(){

    system("cls");
    
    int c, k = 0;
    char b[15];
    
    printf("Insira a marca a ser pesquisada: ");
    fflush(stdin);
    gets(b);
    
    for(c = 0; c < a; c++){
        
        if(strcmp(vetcarros[c].marca, b) == 0){
        
            printf("\nDados do carro com a marca pesquisada: ");
            printf("\nAno: ");
            printf("%i",vetcarros[c].ano);
           
            printf("\nCor: ");
            printf("%s",vetcarros[c].cor);
           
            printf("\nPreco: ");
            printf("%lf",vetcarros[c].preco);
           
            k=1;
        }
    }
    
    if(k == 0)
    
        printf("\nNao existem carros dessa marca");
        
    system("pause");
}

void verificar(){

    system("cls");
    
    double b;
    int e, k = 0;
    char c[15], d[15];
    
    printf("Insira o ano a ser pesquisado: ");
    scanf("%i", &b);
    
    printf("Insira a marca a ser pesquisada: ");
    fflush(stdin);
    gets(c);
    
    printf("Insira a cor a ser pesquisada: ");
    fflush(stdin);
    gets(d);
    
    for(e = 0; e < a; e++){
    
        if(vetcarros[e].ano == b && strcmp(vetcarros[e].marca,c) == 0 && strcmp(vetcarros[e].cor, d) == 0){
        
            printf("\nPreco do carro com os dados pesquisados: ");
            printf("%lf", vetcarros[e].preco);
            
            k = 1;
        }
    }
    
    if(k == 0)
    
        printf("\nNao existem carros com essas especificacoes");
    
    system("pause");
}

int main(){

    int k;
    
    do{
        
        printf("Insira uma opcao: ");
        printf("\n\nCadastrar (1)\nPesquisar por preco (2)\nPesquisar por marca (3)\nVerificar o preco (4)\nSair (5)\n");
        scanf("%i", &k);
        
        switch(k){
        
        case 1:
        
            cadastrar();
            system("cls");
            
            break;
            
        case 2:
            
            preco();
            system("cls");
            
            break;
        
        case 3:
        
            marca();
            system("cls");
        
            break;
        
        case 4:
        
            verificar();
            system("cls");
        }
        
    }while(k != 5);

    printf("\n");

    return 0;
}
 
//Exercício 14:  
#include <stdio.h>

struct ponto{

    int x;
    int y;
}v1, v2, p;

int main(){

    printf("Inserir as coordenadas do vertice esquerdo inferiror do retangulo: ");
    scanf("%i%i", &v1.x, &v1.y);
    
    printf("\nInserir as coordenadas do vertice direito superior do retangulo: ");
    scanf("%i%i", &v2.x, &v2.y);
    
    printf("\nInserir as coordenadas do ponto a ser analizado: ");
    scanf("%i%i", &p.x, &p.y);
    
    if(p.x >= v1.x && p.x <= v2.x && p.y >= v1.y && p.y <= v2.y)
    
        printf("\nO ponto pertence ao retangulo\n");
    
    else
    
        printf("\n\nO ponto nao pertence ao retangulo\n");
    
    return 0;
}

//Exercício 15:
#include <stdio.h>

struct ponto{

    int x;
    int y;
    int z;
}vet1, vet2, vet3;

int main(){

    int a, b;
    
    printf("Insira as coordenadas do primeiro vetor: ");
    scanf("%i%i%i", &vet1.x, &vet1.y, &vet1.z);
    
    printf("\nInsira as coordenadas do segundo vetor: ");
    scanf("%i%i%i", &vet2.x, &vet2.y, &vet2.z);
    
    vet3.x = vet1.x + vet2.x;
    vet3.y = vet1.y + vet2.y;
    vet3.z = vet1.z + vet2.z;
 
    printf("\nVetor resultante (soma dos anteriores): %i %i %i\n", vet3.x, vet3.y, vet3.z);
 
    return 0;
}
