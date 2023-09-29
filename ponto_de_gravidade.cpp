/*CPE
Esqueleto do codigo para a tarefa pratica 9
*/
#include <iostream>
#include <cmath>
#include <iomanip>
#define MAXPOINTS 1024

using namespace std;

struct Ponto { /*struct que especifica um ponto */
        double x;
        double y;
};

struct Curva { /* pontos consecutivos sao interligados por segmentos de reta. */
        Ponto pt[MAXPOINTS];
        int npts;
};

/*procedimento que recebe por referencia uma struct do tipo Curva e le
da entrada padrao os pontos que a compoem*/
void readCurve(Curva& c);

/*funcao que recebe uma struct do tipo Curva, calcula e retorna uma struct Ponto
que representa o centro de gravidade da curva*/
Ponto gravity(Curva c);

/*funcao que recebe uma struct do tipo Curva e retorna um valor double
que representa o seu comprimento*/
double length(Curva c);


int main(){
	Curva curva;
	Ponto gravidade;
	
  /* complete aqui o programa para que ele invoque as funcoes e
  calcule o centro de gravidade e o
  comprimento aproximado da curva, exibindo os resultados */

	cin>>curva.npts;
	
	readCurve(curva);
	
	gravidade = gravity(curva);//colocamos o retorno da funcao em uma variavel para nos dar valor em x e em y
	cout<<"Centro de Gravidade: ("<<setprecision(2)<<fixed<<gravidade.x<<", "<<setprecision(2)<<fixed<<gravidade.y<<")"<<endl;
	cout<<"Comprimento: "<<setprecision(2)<<fixed<<length(curva);



	return 0;
}


/*implemente aqui as funcoes declaradas acima*/

void readCurve(Curva& c){
	
	for(int i=0; i < c.npts; i++){
		cin>> c.pt[i].x;
		cin>> c.pt[i].y;
	}
	
}

Ponto gravity(Curva c){
	
	Ponto grav;
	
	for(int i=0; i < c.npts; i++){//vai somar cada elemento que foi colocado na funcao readCurve
		grav.x += c.pt[i].x;
		grav.y += c.pt[i].y;
	}
	grav.x /= c.npts;
	grav.y /= c.npts;
		
	return grav;	
}

double length(Curva c){
	
	double h=0,aux1=0,aux2=0;	
		
	for(int i=0; i <= c.npts - 2; i++){//o valor de i vai de zero ate o penultimo termo de acordo com a equacao
		aux1= c.pt[i+1].x - c.pt[i].x;
		aux2= c.pt[i+1].y - c.pt[i].y;
		aux1 = pow(aux1,2);
		aux2 = pow(aux2,2);
		h += sqrt((aux1 + aux2));
	}
	
	return h;
}



