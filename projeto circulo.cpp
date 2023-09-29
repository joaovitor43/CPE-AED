#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double r,area,volume,pi,Area,Volume;
	pi=3.14;//o valor atribuido a pi
	
	cin>> r;
	
	Area= 4*pi*r*r;
	area=4*pi*r*r;//o valor de a sera igual ao resultado da equação	 
	cout<<"area = "<<setprecision(0)<<fixed<<area<<", "<<setprecision(3)<<fixed<<Area<< endl;//imprime o valor da area e imprime o valor de A(area com 3 casas decimais)
	//colocamos,setprecision(0)<<fixed<<a para deixar com 0 casas decimais

	Volume=(4*pi*r*r*r)/3;
	volume=(4*pi*r*r*r)/3;//o valor do volume e igual ao resultado da equação
	cout<<"volume = "<<setprecision(0)<<fixed<<volume<<", "<<setprecision(3)<<fixed<<Volume<<endl;//da o valor do volume com zero casas decimais
	
	return 0;//finaliza o codigo
	}

