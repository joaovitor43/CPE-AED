#include <iostream>

using namespace std;

bool quadp(int n);
bool cubop(int n);

int main(){
	
	int numero,op;
	
	cout<<"Escolha uma opcao: 1-quadrado perfeito | 2-cubo perfeito | 3-Sair : ";
	cin>>op;
	
	while(op!=3){
		
		cout<<"numero: ";
		cin>>numero;
		
		if(op==1){
			if(quadp(numero)==true){
				cout<<"o numero: "<<numero<<" e um quadrado perfeito"<<endl;
			}
			else{
				cout<<"o numero: "<<numero<<" nao e um quadrado perfeito"<<endl;
			}	
		}
		else if(op==2){
			if(cubop(numero)==true){
				cout<<"o numero: "<<numero<<" e um cubo perfeito"<<endl;
			}
			else{
				cout<<"o numero: "<<numero<<" nao e um cubo perfeito"<<endl;
			}
		}
		
		cout<<"Escolha uma opcao: 1-quadrado perfeito | 2-cubo perfeito | 3-Sair : ";
		cin>>op;
	
	}
	
	if(op==3){
		cout<<"voce saiu"<<endl;
	}
	
	
	return 0;
}

bool quadp(int n){
	
	int i;
	bool v;
	
	v = false;
	
	for(i=1; i <= n/2 && v == false; i++){
		if( i*i == n){
			v=true;
		}
	}
	
	return v;
}

bool cubop(int n){
	
	int i;
	bool v;
	
	v = false;
	
	for(i=1; i <= n/2 && v == false; i++){
		if( i*i*i == n){
			v=true;
		}
	}
	
	return v;	
}

