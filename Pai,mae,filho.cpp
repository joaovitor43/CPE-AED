#include <iostream>

using namespace std;

int* cross(int pai[], int mae[], int n, int pontocorte);

int main(){
	
	int n,pontocorte,posicao,posicao2;
	int *progenitor1,*progenitor2,*filho1,*filho2;
	
	cin>>n;
	pontocorte = n/2;
	
	progenitor1 = new int[n];//vetor criado dinamicamente
	for(int i=0; i < n; i++){
		cin >> posicao;
		progenitor1[i] = posicao;
	}
	
	progenitor2 = new int[n];
	for(int i=0; i < n; i++){
		cin >> posicao2;
		progenitor2[i] = posicao2;
	}
	
	filho1 = cross(progenitor1, progenitor2 ,n ,pontocorte);//troca de posicao para retornar os dois filhos
	filho2 = cross(progenitor2, progenitor1 ,n ,pontocorte);
	
	for(int i=0; i < n; i++){//impressao do vetor criado
		cout<<filho1[i]<<" ";
	}
	cout<<endl;
	
	for(int i=0; i < n; i++){
		cout<<filho2[i]<<" ";
	}
	cout<<endl;
	
	delete[] progenitor1;//desalocao dinamica dos vetores
	delete[] progenitor2;
	delete[] filho1;
	delete[] filho2;
	
	return 0;	
}

int* cross(int pai[], int mae[], int n, int pontocorte){
	
	int* filho;
	
	filho = new int[n];//alocacao dinamica do vetor
	
	for(int i=0; i < pontocorte; i++){
		filho[i] = mae[i];//copia do segundo vetor passado 
	}
	
	for(int i = pontocorte; i < n; i++){
		filho[i] = pai[i];//copia do primeiro vetor passado
	}
	
	return filho;
}


