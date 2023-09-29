#include <iostream>
#include <iomanip>

using namespace std;

double potencia(double a, int b);
double raiz_quadrada(double x);
double pi(int n);
double fatorial(int n);
double euler(int n);

int main(){
	
	double algarismo1;
	int opcao,algarismo2;
	
	cin>>opcao;
	//o usuario  tem a opcao de digitar de 0 a 5 e em cada uma delas ele entra em uma funcao diferente, no 5 ele encerra o programa
	while( opcao != 5){

		if( opcao == 0 ){ 
			cin>>algarismo1;
			cin>>algarismo2;
			cout<<potencia(algarismo1, algarismo2)<<endl;
		}
		if(opcao == 1){
			cin >> algarismo1;
			cout<<raiz_quadrada(algarismo1)<<endl;
		}
		if(opcao == 2){
			cin >> algarismo2;
			cout<<pi(algarismo2)<<endl;
		}
		if(opcao == 3){
			cin >> algarismo2;
			cout<<fatorial(algarismo2)<<endl;
		}
		if( opcao == 4){
			cin >> algarismo2;
			cout<<euler(algarismo2)<<endl;
		}
		cin>>opcao;
	}
	return 0;
}

double potencia(double a, int b){//funcao de potencia
	int i;
	double aux;
	
	if(b != 0){
		for(i=1,aux=a; i < b; i++){//o laco de repeticao de encerra quando o contador i estar uma posicao antes do inteiro b 
			a=a*aux;//como a vai mudar entao fixamos a variavel auxiliar com o valor original de a
			
		}
	}
	else{
		a=1;//se for um numero elevado a zero o resultado e um
	}
	
	cout<<setprecision(8)<<fixed;
	
	return a;
}

double raiz_quadrada(double x){

	double palpite,quociente,media,resultado;
	
	for(palpite=1,resultado=1; resultado >= +0.0001 || resultado <= -0.0001; ){//entramos com um resultado trivial, para podermos entrar no laco de repeticao
		quociente = x/palpite;//usamos o binomio de newton para encontrar a raiz quadrada
		media = (quociente+palpite)/2;
		resultado= media - palpite;//se a diferenca entre o palpite anterior e o atual representado pela media for de 0,0001 ou menor então encontramos a raiz
		palpite = media;
	}
	
	cout<<setprecision(8)<<fixed;
	
	return palpite;
}

double pi(int n){
	
	double multiplicador,primeiro_termo,segundo_termo,terceiro_termo,quarto_termo,total,pi,comum;
	int i;
	
	for(i=0,pi=0,multiplicador=0,primeiro_termo=0,segundo_termo=0,terceiro_termo=0,quarto_termo=0,total=0; i < n; i++){
		comum = 8*i;
		multiplicador=1/(potencia(16,i));//termo que multiplica os que estão dentro do parenteses
		primeiro_termo = 4/(comum + 1);//os termos equivalem a que posicao no parenteses da equacao eles vao ocupar 
		segundo_termo = 2/(comum + 4);
		terceiro_termo = 1/(comum + 5);
		quarto_termo = 1/(comum + 6);
		total = multiplicador*(primeiro_termo - segundo_termo - terceiro_termo - quarto_termo);
		pi += total;//utilizamos a variavel pi pra ir acumulando os valores a cada repeticao
	}
	
	cout<<setprecision(8)<<fixed;
	return pi;//retorna o resultado depois de todas as somas
}



double fatorial(int n){
	
	double i;
	double long resultado_fatorial,aux;
	
	if(n != 0){
		for(i=1,aux=1 ; i <= n; i++){
			resultado_fatorial = i*aux;
			aux=resultado_fatorial;//a variavel aux segura o valor do fatorial i, quando i e 4 a variavel aux valera 24
		}
	}
	else{
		resultado_fatorial=1;
	}
	
	cout<<setprecision(0)<<fixed;//fixamos zero casas decimais para corrigir um erro de impressao que estava ocorrendo
	return resultado_fatorial;
	
}

double euler(int n){
	
	int i;
	double euler;
	
	if(n != 0){
			for(i=1,euler=1 ; i < n; i++){//para calcular precisamos de n repeticoes, mas como euler ja comeca em 1, entao uma das repeticoes que o programa precisaria fazer ja foi feita
				euler += 1/fatorial(i);//e usado a funcao do fatorial para nao precisar fazer novamente
				
			}
	}
	
	else{
		euler = 1;
	}
	
	cout<<setprecision(8)<<fixed;
	
	return euler;
}

