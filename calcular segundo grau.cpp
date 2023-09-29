#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
	double a,b,c,x1,x2,delta,raiz1,p1;//variaveis
	
	cin>>a;
	cin>>b;
	cin>>c;
	
	delta = (b*b) - (4*a*c);
	x1= (-b +sqrt(delta))/(2*a);
	x2= (-b -sqrt(delta))/(2*a);
	p1=(-b)/(2*a);//p1 e raiz1 sao partes do calculo da raiz ,porem separadas para calcular as raizes quando delta for menor que zero
	raiz1=sqrt(delta*-1)/(2*a);
	
	if(delta < 0){
		cout<<"x1 = "<<setprecision(2)<<fixed<<p1<<" + "<<setprecision(2)<<fixed<<raiz1<<"i"<<endl;
		cout<<"x2 = "<<setprecision(2)<<fixed<<p1<<" - "<<setprecision(2)<<fixed<<raiz1<<"i"<<endl;
	}//raiz1 e a parte imaginaria do numero complexo quando delta < 0
	else if(delta==0){
		cout<<"x1 = "<<setprecision(2)<<fixed<<x1<<endl;
		cout<<"x2 = "<<setprecision(2)<<fixed<<x2<<endl;
	}//fixamos 2 casas decimais
	else if(delta > 0){
		cout<<"x1 = "<<setprecision(2)<<fixed<<x1<<endl;
		cout<<"x2 = "<<setprecision(2)<<fixed<<x2<<endl;
}//os comandos if so sao executados se delta assumir valores no intervelo dado em cada if
	return 0;	
	
}
