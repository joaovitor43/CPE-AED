#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string m[5],n[4];
	int c = 9;
	
	for(int i = 0; i < 5; i++){
		cout<<"Digite o nome m: ";
		cin>>m[i];
	}
	
	for(int j = 0; j < 5; j++){
	cout<<"Digite o nome n: ";
	cin>>n[j];
	}
	
	if(m[3] == n[1]){
		cout<<"\t"<<c;
	}
	else{
		cout<<"ERRO\tERRO";
	}
	
	return 0;
}
