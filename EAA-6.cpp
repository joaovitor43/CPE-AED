#include <iostream>

using namespace std;

void nota(double valor[]);

int main(){
	
	double valor[100];
	int posicao;

	nota(valor);//chama a funcao nota
	cin>>posicao;
	cout<<valor[posicao-1];//como um vetor comeca no zero para acharmos a posicao que o algarismo esta basta colocar a posicao e subtrair um
	
	return 0;
	
}

void nota(double valor[]){
	
	int i,j,n;
	double aux;
	
	n=0;
	cin>>valor[n];
	
	while(valor[n] >= 0){
		n++;
		cin>>valor[n];//laco de repeticao ate colocar um numero negativo
	}
	
	for(i = 1; i < n; i++) {
    	aux = valor[i];
    	for(j = i-1; (j >= 0) && (aux > valor[j]); j--){//se o valor que esta em auxiliar for maior que o valor anterior,entao o laco trocara esses dois valores de lugar no vetor 
      		valor[j + 1] = valor[j];
      	}
      	valor[j + 1] = aux;//o valor que estava em aux ocupa o espaco que foi deixado pelo outro valor
    }
   
}
	
