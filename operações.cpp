#include <iostream>

using namespace std;

int main(){

char operacao;
double a,b,c;

cin>>a;
cin>>operacao;
cin>>b;

switch(operacao){
	case'+':c=a + b;
	cout<<"A soma tem valor de:"<<c<<"\n";
	break;
	case '-':c= a - b;
	cout<<"A subtracao tem valor de:"<<c<<"\n";
	break;
	case '/':c= a / b;
	cout<<"A divisao tem valor de: "<<c<<"\n";
	break;
	case'*':c= a * b;
	cout<<"A multiplicacao tem valor de: "<<c<<" \n";
	break;
	default: cout<<"O comando não existe"<<endl;
}

return 0;
}
