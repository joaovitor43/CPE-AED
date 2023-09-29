#include <iostream>
#include <string>

using namespace std;

int main(){
	
	unsigned int i;
	string nome;//declaracao da string e variavel i
	
	cin>>nome;
	//nome e string e cada elemento e um caracter
	for(i = 0; (i < nome.size());i++)//a variavel i vai indicar em que posicao do vetor caractere esta, as posicoes de i vao aumentado ate chegar em todo espaco da memoria ocupado pela string
		if((nome[i] >= 65) && (nome[i] <= 90)){//
			nome[i] += 32;
		}
	/*a maiuscula pela tabela ascii e 32 vezes menor que a minuscula,entao a letra correspondente na posicao i da string vai ser 
	nome+32, ou nome-32, dependendo se for maiuscula ou minuscula e vai ocorrer a troca de caracter minusculo pra maiusculo e vice versa
	*/
		else if ((nome[i] >= 97) && (nome[i] <= 122)){
				nome[i] -= 32;
		}
		
	cout<<nome<<endl;
	
	return 0;
	
	
}
