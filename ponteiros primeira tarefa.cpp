#include <iostream>

using namespace std;

double* concatena(double p1[], int n1, double p2[], int n2){
	
	double *concatenado;
	
	concatenado=new double[n1+n2];
	
	for(int i=0;i < n1; i++){
		concatenado[i]=p1[i];
	}
	
	for(int i=n1;i < n1+n2; i++){
		concatenado[i]=p2[i-n1];
	}
	
	return concatenado;
}

int main(){
	
	int d1,d2;
	double *lista1,*lista2,*vetor3;
	
	cout<<"dimensao da lista um: ";
	cin>>d1;
	lista1 = new double[d1];
	for(int i=0; i<d1; i++){
		cin>>lista1[i];
	}
	
	cout<<"dimensao da lista dois: ";
	cin>>d2;
	lista2 = new double[d2];
	for(int n=0; n<d2; n++){
		cin>>lista2[n];
	}
	
	vetor3 = concatena(lista1, d1, lista2, d2);
	
	cout<<"concatenacao: "<<endl;
	
	for(int j=0; j < d1+d2; j++){
		cout<< vetor3[j]<<" ";
		
	}
	delete[] lista1;
	delete[] lista2;
	delete[] vetor3;
	
	return 0;
}
