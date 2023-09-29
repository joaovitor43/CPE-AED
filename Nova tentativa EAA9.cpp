#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Analise{
	int caracteres;
	int tokens;
	int frases;
};

Analise funcao(ifstream& arquivo){
	
	string s;
	Analise quantidade;
	int n=0;
	
	arquivo.open("texto.txt");
	if(arquivo.is_open() == false){
		cerr<<"Erro"<<endl;
	}
	
	quantidade.caracteres=0;
	quantidade.tokens=0;
	quantidade.frases=0;
	
	while(getline(arquivo,s)){
		for(unsigned int i=0; i<=s.size(); i++){
			if(s[i] != ' ' || s[i] != '\n'){
				quantidade.caracteres++;
			}
			if(s[i]== ' '){
				quantidade.tokens++;
			}
			if(s[i]=='!'|| s[i]=='?'|| s[i]=='.'){
				quantidade.frases++;
			}
		}
		n++;
	}
	
	quantidade.tokens += n;
	quantidade.caracteres -=quantidade.tokens;
	quantidade.tokens -=1;
	
	
	arquivo.close();
	
	return quantidade;
}

int main(){
	
	ifstream analise_arquivo;
	ofstream analise_arq;
	Analise quant;
	
	quant=funcao(analise_arquivo);
	
	cout <<"# Caracteres = "<< quant.caracteres<<"\n";
	cout<<"# Tokens = "<< quant.tokens<<"\n";
	cout <<"# Frases = "<< quant.frases<<"\n";
	
	analise_arquivo.close();
	
	analise_arq.open("analise_texto.txt", ios::trunc);
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
