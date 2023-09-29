#include <iostream>

using namespace std;

int main(){
	int a, b;
	cout << "Digite o primeiro termo: " ;
	cin >> a; 
	
	cout << "Digite o segundo temro: " ;
	cin >> b;
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout<< "primeiro termo: "<<a<< endl;
	cout<<"segundo termo "<<b<<endl;
	
	return 0;	
	
}
