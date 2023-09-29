#include <iostream>

using namespace std;
	
int main(){

	int a,b,c,d,e,f;
	cout<<"Dgite a primeira data "<<endl;
	cin>>c >> b >> a;
	cout<<"Digite a segunda data"<<endl;
	cin>> f>> e>>d;
	
	
	if(d<a){
	
		cout<<f<<"/"<<e<<"/"<<d<<" ocorreu antes"<<endl;
	}
	else if(d>a){
	
		cout<<c<<"/"<<b<<"/"<<a<<" ocorreu antes"<<endl;
	}
	
	if(d==a && e<b){
		cout<<f<<"/"<<e<<"/"<<d<<" ocorreu antes"<<endl;
	}
	else if(d==a && e>b){
		cout<<c<<"/"<<b<<"/"<<a<<" ocorreu antes"<<endl;
	}	
	if(d==a && e==b && f<c)	{
		cout<<f<<"/"<<e<<"/"<<d<<" ocorreu antes"<<endl;
}
	else if (d==a && e==b && f>c)
		{
		cout<<c<<"/"<<b<<"/"<<a<<" ocorreu antes"<<endl;
}

return 0;
}

