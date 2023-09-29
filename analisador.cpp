#include <iostream>//bibliotecas usadas
#include <fstream>
#include <string>

using namespace std;

struct Analise{//declaracao de struct
	int caracteres;
	int tokens;
	int frases;
};

Analise funcao(ifstream& arquivo){//passagem do arquivo de leitura por referencia para poder abrir
	
	string s;
	Analise quantidade;
	int n=0;
	
	arquivo.open("texto.txt");
	if(arquivo.is_open() == false){
		cerr<<"Erro"<<endl;//caso o arquivo nao abra uma mensagem de erro e emitida
	}
	
	quantidade.caracteres=0;
	quantidade.tokens=0;
	quantidade.frases=0;
	
	while(getline(arquivo,s)){//while com o getline e usado para passar de linha a linha no arquivo de leitura
		for(unsigned int i=0; i<=s.size(); i++){
			if(s[i] != ' ' ){//se o char da string na posicao i for igual a um espaco ele nao aumenta a quantidade de caracteres
				quantidade.caracteres++;
			}
			if(s[i]== ' '){
				quantidade.tokens++;
			}
			if(s[i]=='!'|| s[i]=='?'|| s[i]=='.'){
				quantidade.frases++;
			}
		}
		n++;//n e a quantidade de vezes que a quebra de linha apareceu no comando while
	}
	quantidade.tokens += n;//precisamos somar n para pegar as quebras de linha que o comando while nao pega
	quantidade.tokens -= 1;//tiramos um por conta do grande espaco em branco que esta no arquivo de leitura
	quantidade.caracteres -= n;//temos que subtrair as quebras de linha porque a quantidade de caracteres nao pega esse numero
	
	arquivo.close();//arquivo de leitura e fechado
	
	return quantidade;
}

int main(){
	
	ifstream analise_arquivo;//arquivo para leitura que contem o texto
	ofstream analise_arq;//arquivo para escrita
	Analise quant;
	
	quant=funcao(analise_arquivo);//quant recebe os valores das tres structs 
	
	cout <<"# Caracteres = "<< quant.caracteres<<"\n";//impressao no terminal
	cout<<"# Tokens = "<< quant.tokens<<"\n";
	cout <<"# Frases = "<< quant.frases<<"\n";
	
	analise_arquivo.close();//fecha o arquivo de leitura
	
	analise_arq.open("analise_texto.txt", ios::trunc);//criacao do arquivo de analise_texto.txt e abertura para escrever por cima do que esta no arquivo
	if(analise_arq.is_open()==false){
		cerr<<"Erro"<<endl;
		return 1;
	}
		
	analise_arq <<"# Caracteres = "<< quant.caracteres<<"\n";//impressao no novo arquivo criado
	analise_arq <<"# Tokens = "<< quant.tokens<<"\n";
	analise_arq <<"# Frases = "<< quant.frases<<"\n";
	
	analise_arq.close();
	
	
	return 0;
}
