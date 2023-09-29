#include <iostream>

using namespace std;

int main(){
	double notas,quantidade,soma;
	
	soma=0;
	quantidade=0;
	
	cout<<"Digite o valor da nota : ";
	cin>>notas;
	
	while(notas != -1){
	soma = notas + soma;
	quantidade++;
	cout<<"Digite o valor da nota : ";
	cin>>notas;
}
	if(quantidade > 0){
	
	cout<<"a media e : "<<soma/quantidade<<endl;
}
	else
	cout<<"o programa foi encerrado"<<endl;
	return 0;
	
}
