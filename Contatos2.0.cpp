#include <iostream>
#include <fstream>
#include <string>
#define MAX_AGENDA 100

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
void leiaContatos(Contato lista[], int& n){
	//COMPLETE AQUI
	fstream myfile;

	myfile.open("agenda.txt");
	if(myfile.is_open() == false){
		cerr<<"Erro";
		return;
	}
	
	n=0;
	while((myfile >> lista[n].nome) && (n<MAX_AGENDA)){
		myfile >> lista[n].telefone;
		n++;
	}
	
	myfile.close();
}

void add_contato(Contato lista[], int& n){

	if(n==MAX_AGENDA){
		cerr<<"Erro";
		return;
	}
	
	cout<<"Digite o nome do novo contato: ";
	cin>>lista[n].nome;
	cout<<"Digite o numero do novo contato: ";
	cin>>lista[n].telefone;
	n++;
	
}

void salvar_contato(Contato lista[], int n){
	
	ofstream myfile;
	
	myfile.open("agenda.txt", ios::trunc);
	
	if(myfile.is_open() == false){
		cerr<<"Erro";
		return;
	}
	
	for(int i=0; i < n; i++){
		myfile << lista[i].nome<<"\n";
		myfile << lista[i].telefone<<"\n";
	}
	
	myfile.close();
}

int main(){

	//COMPLETE COM DECLARACOES DE VARIAVEIS QUE FALTAREM
	int n ,tel;
	string buscar;
	char operacao;
	Contato contato_de_telefone[MAX_AGENDA];

	leiaContatos(contato_de_telefone, n);

	cout << "Digite p para pesquisar,a para adicionar ou s para sair: ";
	cin >> operacao; //leitura do nome a ser procurado na agenda
	while(operacao!='s'){
		if(operacao == 'p'){	//COMPLETE AQUI
			cout<<"Digite o nome a pesquisar: ";
			cin>>buscar;
			tel = buscaNumero(contato_de_telefone, n , buscar);
			if(tel != -1){
				cout<<"O numero do contato "<<buscar<<" e "<<tel<<endl;
			}
			else{
				cout<<"Contato nao existente"<<endl;
			}
		}
			
		
		if(operacao=='a'){
			add_contato(contato_de_telefone,n);
		}
			
		cout << "Digite p pesquisar,a para adicionar ou s para sair: ";
		cin >> operacao;
		
	}
	
	
	salvar_contato(contato_de_telefone,n);
	
	return 0;
}
