#include <iostream>

using namespace std;

int main(){
	
	int numero,somaimpar,somapar,quantimpar,quantpar;//variaveis
	
	numero = 0;
	somaimpar = 0;
	somapar = 0;
	quantimpar = 0;
	quantpar = 0;
	
	do{
		cin>>numero;//a cada repeticao devemos colocar um novo numero 
		if((numero%2 == 0) && (numero != 0)){//se o valor de numero respeitar as condicoes do parenteses,o comando a ser feito sera para os numeros pares
		somapar += numero;
		quantpar++;
		}
		else if ((numero%2 != 0) && (numero != 0)){//comandos para impares
		somaimpar += numero;
		quantimpar++;
		}
	}
	
	while(numero != 0);/*o programa fara a repiticao caso o numero for diferente de 0
						o numero zero nao sera considerado par*/
		cout<<quantimpar<<" impares, total = "<<somaimpar<<endl;
		cout<<quantpar<<" pares, total = "<<somapar<<endl;
	
	return 0;
	
}
