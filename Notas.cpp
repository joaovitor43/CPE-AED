#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double troco,total;
	int notas,moedas;
	
	cin>> total;//valor a ser distribuido
	
	notas= total/100;
	cout<<notas<<" nota(s) de R$100"<<endl;
	troco= total-notas*100;//colocamos o total menos a quantidade de notas de 100 multiplicado por 100 para obter o resto,nomeado por troco
	
	
	notas= troco/50;//pegamos o resto da divisão anterior e dividimos por 50 para obter a quantidade de notas de 50 
	cout<<notas<<" nota(s) de R$50"<<endl;
	troco= troco-notas*50;//repetimos o procedimento feito com a nota de 100,porem com o novo valor,e pegamos o resto para fazer as proximas operações
	
	notas= troco/20;
	cout<<notas<<" nota(s) de R$20"<<endl;
	troco=troco-notas*20;
	
	notas= troco/10;
	cout<<notas<<" nota(s) de R$10"<<endl;
	troco=troco-notas*10;
	
	notas=troco/5;
	cout<<notas<<" nota(s) de R$5"<<endl;
	troco=troco-notas*5;
	
	notas=troco/2;
	cout<<notas<<" nota(s) de R$2"<<endl;
	troco=troco-notas*2;
	//depois de repetir o procedimento dito anteriormente,iremos repetir para as moedas
	moedas=troco/1;
	cout<<moedas<<" moeda(s) de R$1"<<endl;
	troco=troco-moedas*1;

	moedas= troco/0.50;					
	cout<<moedas<<" moeda(s) de R$0,50"<<endl;
	troco= troco-moedas*0.50;
	
	moedas= troco/0.25;
	cout<<moedas<<" moeda(s) de R$0,25"<<endl;
	troco= troco-moedas*0.25;
	
	moedas=troco/0.10;
	cout<<moedas<<" moeda(s) de R$0,10"<<endl;
	troco= troco-moedas*0.10;
	/*existe um pequeno bug no programa que faz a conta 'troco/0.05' dar errado,se colocarmos 'cout<<troco/0.05<<endl;' o valor impresso 
	sera exato,porem quando colocado na variavel moedas essa operação da errado,por motivos desconhecidos*/
	moedas=troco/0.05;
	cout<<moedas<<" moeda(s) de R$0,05"<<endl;
	troco= troco-moedas*0.05;
	
	moedas=troco/0.01;
	cout<<moedas<<" moeda(s) de R$0,01"<<endl;
	 //fazemos a conta de subtração,pois para achar o resto e necessario multiplicas quociente pelo divisor e subtrair do dividendo
	return 0;
	
}
