#include <iostream>

using namespace std;

int main(){
	int i,n,j,tam;
	
cout << "Tamanho: ";
  cin >> n; 

tam = n;
for(j = 0; j < n; j++,tam--){
	for(i = 0; i < tam; i++) 
   	cout << "*";
  	cout << "\n";
}

tam = 1;
for(j = 0; j < n; j++,tam++){
	for(i = 0; i < tam; i++) 
   	cout << "*";
  	cout << "\n";
}
	return 0;
}
