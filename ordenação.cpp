#include <iostream>

using namespace std;

int main(){
	double algarismo1,algarismo2,algarismo3;
	
	cin>> algarismo1>> algarismo2>> algarismo3;
	
	if (algarismo1<=algarismo2 && algarismo1<=algarismo3)
	{
		cout<<algarismo1<<" ";

		if(algarismo2<=algarismo3)
		cout<<algarismo2<<" "<<algarismo3<<endl;
		
		else  
		cout<<algarismo3<<" "<<algarismo2<<endl;
	}
	
	if (algarismo2<=algarismo1 && algarismo2<=algarismo3)
	{
		cout<<algarismo2<<" ";

		if(algarismo1<=algarismo3)
		cout<<algarismo1<<" "<<algarismo3<<endl;
		
		else  
		cout<<algarismo3<<" "<<algarismo1<<endl;
	}
	
	if (algarismo3<=algarismo2 && algarismo3<=algarismo1)
	{
		cout<<algarismo3<<" ";

		if(algarismo2<=algarismo1)
		cout<<algarismo2<<" "<<algarismo1<<endl;
		
		else  
		cout<<algarismo1<<" "<<algarismo2<<endl;
	}
		return 0;
	
		
	
}
