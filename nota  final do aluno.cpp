#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	float a,b,c,d,e,f,g,h;
	string nome;
	
	cin>>nome;
	
	cout<<"Nota da primeira prova: ";
	cin>> a;
	cout<< "Nota da segunda prova: ";
	cin>>b;
	g=(2*a+3*b)/5;
	cout<<"A media das provas e:"<<g<<endl;
	
	
	cout<<"Nota do primeiro trabalho: ";
	cin>> c;
	cout<< "Nota do segundo trabalho: ";
	cin>>d;
	cout<<"Nota do terceiro trabalho: ";
	cin>>e;
	cout<<setprecision(1)<<fixed<<endl;
	h=(c+d+e)/3;
	cout<<"A media dos trabalhos e:"<<h<<endl;
	
	f= 0.75*g+0.25*h;
	cout<<"a media do aluno "<<nome<<" e:"<<f<<setprecision(1)<<fixed<<endl;
	cout<<setprecision(1)<<fixed<<endl;
	return 0;
	
}
