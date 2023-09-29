#include <iostream>

using namespace std;

int main(){
	int numero, divisor, quantdivisores,metade;//variaveis
	
	cin>>numero;
	metade = numero/2;
	
	while(numero >= 0){//se o numero for negativo o programa vai se encerrar
		quantdivisores=0;
		for(divisor = 2;metade >= divisor; divisor++){//o divisor comeca em 2 porque todos os numeros sao divisiveis por 1
			if(numero%divisor == 0){//se a condicao for verdadeira a quantidade de divisores e incrementada
				quantdivisores++;
			}
		}
		if((numero == 1) || (numero == 0)){//caso o numero digitado for 0 ou 1 o programa le nao primo
			cout<<"nao primo"<<endl;
		}	
		else if(quantdivisores == 0){//numero e considerado primo se ele for divisivel por um e por ele mesmo
			cout<<"primo"<<endl;	 //como o divisor comeca em 2 e so vai ate a metade do numero entao a quantidade de divisores tem que ser igual a 0  
		}
		else {
			cout<<"nao primo"<<endl;
		}
		
		cin>>numero;
		metade = numero/2;//a cada repeticao colocamos um novo numero e calculamos a metade,ate a parada
	}
	
	return 0;
}
