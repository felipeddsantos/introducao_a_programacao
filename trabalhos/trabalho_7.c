/*

Introdução à Programação - Trabalho 7
Felipe Daniel Dias dos Santos - 11711ECP004
Graduação em Engenharia de Computação - Faculdade de Engenharia Elétrica - Universidade Federal de Uberlândia

*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//Declaração de uma constante N
const int N = 50; 
int n = 0;

//Define a estrutura endereco
struct endereco{

	char rua[20];
	char bairro[20];
	int numero;
	int CEP;
	char cidade[20];
	char estado[20];
};

//Define a estrutura aluno
struct aluno{

	char nome[20];
	char curso[15];
	char matricula[20];
	float MGA;
	
	//Declara uma variável do tipo endereco
	endereco end;
	
//Vetor (global) do tipo estrutura aluno com N posições
}vetor[N];

//Função usada para cadastrar no vetor de estrutura
void cadastrar(){

        int i = n;
        
        //Limpa a tela
		system("cls");
		cout << "\nCadastrando aluno " << i + 1 << ":";
		
		cout << "\n\nNome:";
		fflush(stdin);
		gets(vetor[i].nome);
		
		cout << "\nCurso:";
		fflush(stdin);
		gets(vetor[i].curso);
		
		cout << "\nMatricula";
		cin >> vetor[i].matricula;
		
		cout << "\nMedia Geral Academica:";
		cin >> vetor[i].MGA;
		
		cout << "\n\nDigite o endereco do aluno " << i+1 << ":";
		cout << "\n\nRua:";
		fflush(stdin);
		gets(vetor[i].end.rua);
		
		cout << "\nBairro:";
		fflush(stdin);
		gets(vetor[i].end.bairro);
		
		cout << "\nNumero:";
		cin >> vetor[i].end.numero;
		
		cout << "\nCEP:";
		cin >> vetor[i].end.CEP;
		
		cout << "\nCidade:";
		fflush(stdin);
		gets(vetor[i].end.cidade);
		
		cout << "\nEstado:";
		fflush(stdin);
		gets(vetor[i].end.estado);
		
		n++;
}

//Função usada para listar todos os dados na tela
void listar(){

	system("cls");
	cout << "Lista de alunos cadastrados:";
	
	for(int i = 0 ; i < n ; i++){
	
		cout << "\n\nDados do aluno " << i + 1 << ":";
		cout << "\n\nNome: " << vetor[i].nome << "\nCurso: ";
		cout << vetor[i].curso << "\nMatricula: " << vetor[i].matricula;
		cout << "\nMedia geral academica: " << vetor[i].MGA;
		cout << "\n\nEndereco do aluno " << i + 1 << ":";
		cout << "\n\nRua: " << vetor[i].end.rua << "\nBairro: " << vetor[i].end.bairro;
		cout << "\nNumero: " << vetor[i].end.numero << "\nCEP: ";
		cout << vetor[i].end.CEP << "\nCidade: " << vetor[i].end.cidade;
		cout << "\nEstado: " << vetor[i].end.estado << "\n\n";
	}
	
	system("pause");
}

//Função utilizada para encontrar um aluno no vetor
void pesquisar(){

	system("cls");
	
	char matricula[20];
	int i, pos = -1;
	
	cout << "Digite a matricula do aluno a ser encontrado: ";
	fflush(stdin);
	gets(matricula);
	
	for(i = 0 ; i < n ; i++){
	
		if(strcmp(matricula, vetor[i].matricula) == 0)
		
			pos = i;
	}
	
	if(pos != -1){
	
		cout << "\n\nDados do aluno pequisado: ";
		cout << "\n\nNome: " << vetor[pos].nome << "\nCurso: ";
		cout << vetor[pos].curso << "\nMatricula: " << vetor[pos].matricula;
		cout << "\nMedia geral academica: " << vetor[pos].MGA;
		cout << "\n\nEndereco do aluno " << i + 1 << ":";
		cout << "\n\nRua: " << vetor[pos].end.rua << "\nBairro: " << vetor[pos].end.bairro;
		cout << "\nNumero: " << vetor[pos].end.numero << "\nCEP: ";
		cout << vetor[pos].end.CEP << "\nCidade: " << vetor[pos].end.cidade;
		cout << "\nEstado: " << vetor[pos].end.estado << "\n\n";
	}
	
	else
	
		cout << "\n\nAluno não cadastrado!!!";
		
	system("pause");
}

//Função utilizada para organizar o vetor de alunos, excluido o aluno desejado
void organizar(int pos){

	for(int i = pos ; i < n - 1 ; i++)
	
		vetor[i] = vetor[i + 1];
	
	n--;
	
	cout << "\n\nDados Excluidos!!!\n\n";
	system("pause");
	listar();
}

//Função usada para encontrar e excluir um aluno do vetor
void excluir(){

	system("cls");
	
	char nome[20];
	int i, pos = -1, ex;
	
	cout << "Digite o nome completo do aluno a ser excluido: ";
	fflush(stdin);
	gets(nome);
	
	for(i = 0 ; i < n ; i++){
	
		if(strcmp(nome, vetor[i].nome) == 0)
		
			pos = i;
	}
	
	if(pos != -1){
	
		cout << "\n\nDados do aluno pequisado: ";
		cout << "\n\nNome: " << vetor[pos].nome << "\nCurso: ";
		cout << vetor[pos].curso << "\nMatricula: " << vetor[pos].matricula;
		cout << "\nMedia geral academica: " << vetor[pos].MGA;
		cout << "\n\nEndereco do aluno " << i + 1 << ":";
		cout << "\n\nRua: " << vetor[pos].end.rua << "\nBairro: " << vetor[pos].end.bairro;
		cout << "\nNumero: " << vetor[pos].end.numero << "\nCEP: ";
		cout << vetor[pos].end.CEP << "\nCidade: " << vetor[pos].end.cidade;
		cout << "\nEstado: " << vetor[pos].end.estado << "\n\n";
		cout << "\n\nTem certeza que deseja excluir os dados do aluno: " << vetor[pos].nome;
		cout << "\nDigite: 1 - Sim ou 2 - Nao: ";
		cin >> ex;
		
		if(ex == 1)
		
			organizar(pos);
	}
	
	else
	
		cout << "\n\nAluno não cadastrado!!!";
}

void editar(){

    system("cls");
	
	char matricula[20];
	int i,pos = -1;
	
	cout << "Digite a matricula do aluno cujo dados desejam ser editados: ";
	fflush(stdin);
	gets(matricula);
	
	for(i = 0 ; i < n ; i++){
	
		if(strcmp(matricula, vetor[i].matricula) == 0)
			
			pos = i;
	}
	
	if(pos != -1){
	
		cout << "\n\nDados do aluno a serem editados: ";
		cout << "\n\nNome: " << vetor[pos].nome << "\nCurso: ";
		cout << vetor[pos].curso << "\nMatricula: " << vetor[pos].matricula;
		cout << "\nMedia geral academica: " << vetor[pos].MGA;
		cout << "\n\nEndereco do aluno " << i + 1 << ":";
		cout << "\n\nRua: " << vetor[pos].end.rua << "\nBairro: " << vetor[pos].end.bairro;
		cout << "\nNumero: " << vetor[pos].end.numero << "\nCEP: ";
		cout << vetor[pos].end.CEP << "\nCidade: " << vetor[pos].end.cidade;
		cout << "\nEstado: " << vetor[pos].end.estado << "\n\n";
		
		cout << "\nEdicao dos dados: ";
		cout << "\n\nNome:";
		fflush(stdin);
		gets(vetor[pos].nome);
		
		cout << "\nCurso:";
		fflush(stdin);
		gets(vetor[pos].curso);
		
		cout << "\nMatricula";
		cin >> vetor[pos].matricula;
		
		cout << "\nMedia Geral Academica:";
		cin >> vetor[pos].MGA;
		
		cout << "\n\nDigite o endereco do aluno " << i + 1 << ":";
		cout << "\n\nRua:";
		fflush(stdin);
		gets(vetor[pos].end.rua);
		
		cout << "\nBairro:";
		fflush(stdin);
		gets(vetor[pos].end.bairro);
		
		cout << "\nNumero:";
		cin >> vetor[pos].end.numero;
		
		cout << "\nCEP:";
		cin >> vetor[pos].end.CEP;
		
		cout << "\nCidade:";
		fflush(stdin);
		gets(vetor[pos].end.cidade);
		
		cout << "\nEstado:";
		fflush(stdin);
		gets(vetor[pos].end.estado);
	}
	
	else
	
		cout << "\n\nAluno não cadastrado!!!";
		
	system("pause");
}

//Função principal com menu de opções
int main(){

	int op;
	
	do{
		system("cls");
		
		cout << "DIGITE UMA OPCAO:\n" << "1 - Cadastrar" << "\n2 - Listar";
		cout << "\n3 - Pesquisar" << "\n4 - Excluir" <<  "\n5 - Editar" <<"\n6 - Sair\n";
		cin >> op;
		
		switch(op){
		
		case 1:
		
			cadastrar();
		
			break;
		
		case 2:
		
			listar();
		
			break;
		
		case 3:
		
			pesquisar();
		
			break;
		
		case 4:
		
			excluir();
		
			break;
        
        case 5:
        
            editar();
        
            break;
		}
		
	}while(op != 6);

	return 0;
}
