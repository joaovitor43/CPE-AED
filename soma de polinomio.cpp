#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double polinomio1[26],polinomio2[26],somapolinomios[26];
	int grau, i;

	cout << "Grau do polinomio (grau maximo = 25): ";
	cin >> grau;
	while (grau < 0 || grau > 25) {//digitou fora do limite, repete a leitura
		cout << "Grau invalido, digite outra vez: ";
		cin >> grau;
	}
	
	for (i = grau; i >= 0; i--) { //leitura dos coeficientes
		cout << "coeficiente de x^" << i <<" do primeiro polinomio: ";
		cin >> polinomio1[i];
	}
	
	for (i = grau; i >= 0; i--) { //leitura dos coeficientes
		cout << "coeficiente de x^" << i <<" do segundo polinomio: ";
		cin >> polinomio2[i];
	}
	
	cout<<"primeiro polinomio: " << setprecision(1) << fixed << polinomio1[grau] << "x^" << grau;
	for (i = grau - 1; i >= 0; i--) { //impressao do polinomio
		if (polinomio1[i] != 0)
			if (polinomio1[i] >= 0)
				cout << " + " << polinomio1[i] << "x^" << i;
			else
				cout << " - " << -polinomio1[i] << "x^" << i;
	}
	cout << endl;
	
	cout <<"segundo polinomio: "<< setprecision(1) << fixed << polinomio2[grau] << "x^" << grau;
	for (i = grau - 1; i >= 0; i--) { //impressao do polinomio
		if (polinomio2[i] != 0)
			if (polinomio2[i] >= 0)
				cout << " + " << polinomio2[i] << "x^" << i;
			else
				cout << " - " << -polinomio2[i] << "x^" << i;
	}
	cout << endl;
	
	cout<<"resultado da soma: "<<polinomio1[grau]+polinomio2[grau]<<"x^" <<grau;
	for(i=grau-1;i >= 0;i--){
		somapolinomios[i]= polinomio1[i]+polinomio2[i];
		if ((somapolinomios != 0)){
			if(somapolinomios[i] > 0){
				cout<<" + "<<somapolinomios[i]<<"x^"<<i;
			}
			else{
				cout<<" - "<<-(somapolinomios[i])<<"x^"<<i;
			}	
		}
	}

	return 0;
}
