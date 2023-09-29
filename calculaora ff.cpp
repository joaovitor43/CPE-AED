#include <iostream>

using namespace std;

int soma(int a,int b);
int subtracao(int c,int d);
int multiplicacao(int e,int f);
int divisao(int g,int h);

int main(){
	
	int operacao,x,y;
	
	cin>>operacao;
	
	while(operacao != 0){
		
		cin>> x >> y;
		
		if(operacao==1){
			cout<<"a soma e :"<<soma(x,y)<<endl;
		}
		else if(operacao==2){
			cout<<"a subtracao e: "<<subtracao(x,y)<<endl;
		}	
		else if(operacao==3){
			cout<<"o produto e igual a: "<<multiplicacao(x,y)<<endl;
		}
		else if(operacao==4){
			cout<<"a divisao e igual a: "<<divisao(x,y)<<endl;
		}
		cin>>operacao;	
	}
}

int soma(int a, int b){
	int c;
	c=a+b;
	return c;
}
int subtracao(int c, int d){
	int j;
	j=c-d;
	return j;
}
int multiplicacao(int e, int f){
	int c;
	c=e*f;
	return c;
}
int divisao(int g, int h){
	int c;
	c=g/h;
	return c;
}






