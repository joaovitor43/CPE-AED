#include <iostream>
#include <string>
#define MAX_AGENDA 50

using namespace std;

struct Contato{
	string nome;
	int telefone;
	};

//funcao que busca nome na agenda e retorna numero de telefone
//se nao encontrar o nome, retorna -1
int buscaNumero(Contato lista[], int n, string nome){
	//COMPLETE AQUI
	
	for(int i=0; i < n; i++){
		if(nome == lista[i].nome){
			return lista[i].telefone;
		}
	}
	return -1;
}

//procedimento que recebe lista vazia de Contato e preenche
//com nome e telefone lidos um-a-um da entrada padrao
void leiaContatos(Contato lista[], int n){
	//COMPLETE AQUI
	for(int i=0; i < n; i++){
		cout<< "Nome do contato "<< i+1 <<" : ";
		cin>>lista[i].nome;
		cout<< "Numero do contato "<< i+1 <<" : ";
		cin>>lista[i].telefone;
	}
}

int main(){

	//COMPLETE COM DECLARACOES DE VARIAVEIS QUE FALTAREM
	int n ,tel;
	string buscar;
	Contato *contato_de_telefone;
	
	cout << "Quantos contatos vai gravar? ";
	cin >> n; //leitura do numero de contatos a ser incluso na agenda

	contato_de_telefone = new Contato[n];

	cout << "Digite os contatos:\n";
	leiaContatos(contato_de_telefone, n);

	cout << "Digite o nome a pesquisar ou s para sair: ";
	cin >> buscar; //leitura do nome a ser procurado na agenda
	while(buscar!="s"){
		//COMPLETE AQUI
		tel = buscaNumero(contato_de_telefone, n , buscar);
		if(tel != -1){
				cout<<"O numero do contato "<<buscar<<" e "<<tel<<endl;
		}
		else{
			cout<<"Contato nao existente"<<endl;
		}
		cout << "Digite o nome a pesquisar ou s para sair: ";
		cin >> buscar;
	}
	
	delete[] contato_de_telefone;
	
	return 0;
}
