#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Analise{
	int caracteres;
	int tokens;
	int frases;
};

int main(int argc, char* argv[]){
	
	ifstream arquivo;
	ofstream analise_arq;
	Analise quant;
	string s;
	
	if (argc < 2) { //se nao informou o numero minimo de argumentos
    	cout << "Uso: " << argv[0] << " <arquivo>\n";
   	 	return 1;
  }
	
	arquivo.open(argv[1],ios::in);
	
	if (!arquivo.is_open()) { //se argumento passado como nome de arquivo foi errado
    	cerr << "ERRO ao tentar abrir: " << argv[1]; //mensagem de erro
    	return 2; //sai do programa
	}
	
	quant.caracteres=0;
	quant.tokens=0;
	quant.frases=0;
	
	while(getline(arquivo,s)){
		for(unsigned int i=0; i<=s.size(); i++){
			if(s[i] != ' ' || s[i] != '\n'){
				quant.caracteres++;
			}
			if(s[i]== ' '|| s[i]== '\n'){
				quant.tokens++;
			}
			if(s[i]=='!'|| s[i]=='?'|| s[i]=='.'){
				quant.frases++;
			}
		}
	}
	arquivo.close();
	
	cout <<"# Caracteres = "<< quant.caracteres<<"\n";
	cout<<"# Tokens = "<< quant.tokens<<"\n";
	cout <<"# Frases = "<< quant.frases<<"\n";
	
	analise_arq.open("analise_arq.txt", ios::trunc);
	if(analise_arq.is_open()==false){
		cerr<<"Erro"<<endl;
		return 1;
	}
		
	analise_arq <<"# Caracteres = "<< quant.caracteres<<"\n";
	analise_arq <<"# Tokens = "<< quant.tokens<<"\n";
	analise_arq <<"# Frases = "<< quant.frases<<"\n";
	
	analise_arq.close();
	
	return 0;
}
