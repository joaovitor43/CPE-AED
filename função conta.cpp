#include <iostream>
#include <string>

using namespace std;

int conta(string texto,char c){
	int quantidade,i;
	
	quantidade=0;
	
	for(unsigned i=0;i < texto.size();i++){
		if(texto[i]==c){
			quantidade++;
		}
	}
	return quantidade;
}

int main(){
	string frase;
	char caractere;
	int repeticaodaletra;
	
	cout<<"Digite uma frase: "<<endl;
	getline(cin, frase);
	cout<<"Digite um caractere para buscar dentro da frase: "<<endl;
	cin>>caractere;
	
	repeticaodaletra = 0;
	repeticaodaletra = conta(frase,caractere);
	
	
	cout<<"A quantidade de letras "<<caractere<<" e "<<repeticaodaletra<<endl;

return 0;
}
	
