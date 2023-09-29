#include <iostream>
#include <fstream>

using namespace std;

struct analise{
	int caracteres;
	int tokens;
	int frases;
};

int conta_caracteres(int caracter[], string s){
	
	ofstream arquivo;
	analise quantidade;
	
	quantidade.caracteres=0;
	
	arquivo.open("texto.txt");
	if(arquivo.is_open() == false){
		cerr<<"Erro"<<endl;
	}
	
	while(getline(arquivo,s)){
		for(i=0; i<=s.size(); i++){
			if(caracter[i] != " " || caracter[i] != "\n"){
			quantidade.caracteres++;
			}
		}
	}
	arquivo.close();

	return quantidade;		
}

int conta_tokens(int caracter[]){
	
	ofstream arquivo;
	int espacos=1;
	analise quantidade;
	
	quantidade.tokens=0;
	
	arquivo.open("texto.txt");
	if(arquivo.is_open() == false){
		cerr<<"Erro"<<endl;	
	}
		
	for(int i=0; i <= arquivo.size(); i++){
		if(caracter[i]==" "){
			espacos++;
		}
	}
	
	arquivo.close();
	
	quantidade.tokens = espacos;
}

int conta_frases(int caracter[]){
	
	ofstream arquivo;
	analise quantidade;
	
	quantidade.frases=0;
	
	arquivo.open("texto.txt");
	if(arquivo.is_open() == false){
		cerr<<"Erro"<<endl;
	}
	
	for(int i=0; i <= arquivo.size(); i++){
		if(caracter[i]=="!"|| caracter[i]=="?"|| caracter[i]=="."){
			quantidade.frases++;
		}
	}
	
	return quantidade;
}



int main(){
	
	ofstream analise_arquivo;
	analise quant[3];
	string s;
	
	analise_arquivo.open("texto.txt");
	if(analise_arquivo.is_open() == false){
		cerr<<"Erro"<<endl;
	}
	quant[0]=conta_caracteres();
	quant[1]=conta_tokens();
	quant[2]=conta_frases();
	cout <<"# Caracteres = "<< quant.caracteres;
	cout<<"# Tokens = "<< quant.tokens;
	cout <<"# Frases = "<< quant.frases;
	analise_arquivo <<"# Caracteres = "<< quant.caracteres;
	analise_arquivo <<"# Tokens = "<< quant.tokens;
	analise_arquivo <<"# Frases = "<< quant.frases;
	
	analise_arquivo.close();
	
	return 0;
}
