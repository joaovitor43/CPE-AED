#include <iostream>
#include <string>

using namespace std;

int main (){
	
	string frase;
	int quantespacos,quantsimbolos;
	
	quantespacos=0;
	quantsimbolos=0;
	
	getline(cin, frase);
	cout<<frase<<endl;
	//i==caracteres
	for(size_t i = 0;i < frase.size();i++){
		if(frase[i] ==' '){
			quantespacos++;
		}
		if((frase[i] == ',') or (frase[i] == '.') or (frase[i] == ';') or (frase[i] == '?') or (frase[i] == '!')){
			quantsimbolos++;
		}
	
	}
	
	cout<<"Quantidade de palavras: "<<quantespacos+1<<endl;
	cout<<"Quantidade de simbolos: "<<quantsimbolos<<endl;
	
	return 0;
	
}
