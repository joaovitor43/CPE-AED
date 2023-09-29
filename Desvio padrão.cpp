#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	double notas,quantidade,soma,media,Notas,operacao,desviop;
	
	soma=0;
	quantidade=0;
	Notas=0;
	
	cout<<"Digite o valor da nota : ";
	cin>>notas;
	
	while(notas != -1){
	soma = notas + soma;
	quantidade++;
	operacao=notas*notas+Notas;
	Notas=operacao;
	cout<<"Digite o valor da nota : ";
	cin>>notas;
}
	media=(soma/quantidade);
	desviop=(1/quantidade)*(operacao-(media*media));
	desviop=sqrt(desviop);
	cout<<"o desvio padrao e igual a: "<<setprecision(6)<<fixed<<desviop<<endl;
	
	return 0;
	
	
}
