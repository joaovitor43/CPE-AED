#include <iostream>

using namespace std;

void le_polinomio(double coef[], int& grau){
	
	int i;
	cout<<"insira o grau do polinomio: ";
	cin>>grau;
	
	for(i = grau; i >= 0; i--){
		cout<<"coeficiente de x^"<< i << ": ";
		cin>>coef[i];
		
	}
	cout<<"\n";
}

void le_derivada(double coef[], int& grau){

	for(int i = 1; i <= grau; i++){
		coef[i-1] = i*coef[i];
	}
	grau--;
}

void imprime_polinomio(double coef[], int grau){

	cout<<coef[grau]<<"x^"<<grau;
		for(int i = grau-1; i >= 0; i--){
			if(coef[i] != 0){
				if(coef[i] > 0){
					cout<<" + "<<coef[i]<<"x^"<<i;
				}
				else{
					cout<<" - "<<-coef[i]<<"x^"<<i;
				}
			}
	}
	cout<<"\n";
}

int main(){
	
	double coef[26];
	int grau;
	
	le_polinomio(coef , grau);
	while(grau >= 0){
	imprime_polinomio(coef , grau);
	le_derivada(coef , grau);
	}
	
}
