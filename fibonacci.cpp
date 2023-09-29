#include <iostream>

using namespace std;

int fibonacci(int n);

int main(){
	
	int algarismo;
	
	cin>>algarismo;
	
	while(algarismo >= 0){
		cout<<"F("<<algarismo<<") = "<<fibonacci(algarismo)<<endl;
		cin>>algarismo;
	}
	
	return 0;
}

int fibonacci(int n){
	
	int i;
	int ultimo_fibonacci,penultimo_fibonacci,resultado_fibonacci=0;//resultado fibonacci sera igual a zero se n for 0
	
	for(i=0,ultimo_fibonacci=1,penultimo_fibonacci=1; i < n; i++){//o laco so vai acontecer se n for maior que zero
		if(i==0 || i==1){
			resultado_fibonacci=1;//se n for 1 ou 2 teremos uma,ou duas interacoes que nos dara o valor de 1
		}
		else{
			resultado_fibonacci = ultimo_fibonacci + penultimo_fibonacci;//resultado de fibonacci vai ser igual a soma das suas duas ultimos valores
			penultimo_fibonacci = ultimo_fibonacci;//o segundo valor da soma se atualiza 
			ultimo_fibonacci = resultado_fibonacci;//o ultimo fibonacci feito agora e o resultado do  fibonacci anterior
		}
	}
	
	return resultado_fibonacci;
}

