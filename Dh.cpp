// Demonstração sobre Herança, visibilidade e métodos especiais

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class veiculo{
	  
	// Atributos que todo veículo possui  
	  
	// No Encapsulamento os atributos são privados, ou seja, só podem ser acessados a partir de métodos da classe que sejam públicos.  
	  
	string marca;
	string alimentacao;  // Elétrica, híbrida ou a combustível.
	int n_rodas;
	int n_passageiros;
	
	public:  // É importante deixar os métodos de uma classe como públicos, para que seja possível acessar e modificar atributos de fora da classe.
		
	void set_marca (string word) {marca = word;}   // Métodos setters e getters : O primeiro serve para atribuir valores e o segundo para visualizá-los.
	string get_marca () {return marca;}
	
	void set_alimentacao (string power) {alimentacao = power;} 
	string get_alimentacao () {return alimentacao;}
	
	void set_rodas (int wheels) {n_rodas = wheels;} 
	int get_rodas () {return n_rodas;}
	
	void set_passageiros (int pass) {n_passageiros = pass;} 
	int get_passageiros () {return n_passageiros;}
	
};

class caminhonete : public veiculo{  // Repare que a herança ocorreu de forma pública.
	
	// A classe caminhonete herdou os métodos e atributos da classe veículo,
	//   pois é um tipo de veículo, então além dos métodos e atributos gené- 
	//   ricos da classe base, também possui especificidades. 
	
	int carga;
	
	public:
	
	void set_carga (int weight) {carga = weight;}
	int get_carga () {return carga;}	
	
};

class carro : public veiculo{  
	
	string transmissao;  // Manual ou automática
	
	public:
	
	void set_transmissao (string decision) {transmissao = decision;}
	string get_transmissao () {return transmissao;}	
	
};

int main(){
	
	caminhonete v1; // Aqui instanciamos a classe e criamos o objeto
	carro v2;
	int menu;
	
	// Variáveis auxiliares para o banco de dados.
	
	string tipo_veiculo;
	fstream DBheranca;
	string auxiliar[3];
	int auxiliar2[3];
	string s;
	
	while(3){
		
		// Menu para controle do programa.
		
		cout << "1- Verificar veiculos listados" << endl;
		cout << "2- Listar novo veiculo" << endl;
		cout << "3- Sair" << endl;
		
		cin >> menu;
		
		switch(menu){
			
			case 1:{
				
				// DBheranca é o nome do arquivo .txt que funciona como banco de dados.
				
				// Para que o programa funcione, o arquivo.txt deve estar na mesma pasta do arquivo .cpp
				
				DBheranca.open("DBheranca.txt", ios::in | ios::app);
				
				while (getline(DBheranca, s))
				cout << s << "\n";
				
				DBheranca.close();
					
				break;
			}
			
			case 2:{
				
				cout << "Digite o tipo de veiculo (carro ou caminhonete):" << endl;
				cin >> tipo_veiculo;
				
				if(tipo_veiculo == "caminhonete"){
					
					DBheranca.open("DBheranca.txt", ios::out | ios::app);
					
					cout << "Digite marca, alimentacao, numero de rodas, numero de passageiros e a carga do veiculo, separados por enter:" << endl;
					cin >> auxiliar[0] >> auxiliar[1] >> auxiliar2[0] >> auxiliar2[1] >> auxiliar2[2];
					
					v1.set_marca(auxiliar[0]);  // Definindo os valores gravados por meio da função set.
					v1.set_alimentacao(auxiliar[1]);
					v1.set_rodas(auxiliar2[0]);
					v1.set_passageiros(auxiliar2[1]);
					v1.set_carga(auxiliar2[2]);
					
					DBheranca << auxiliar[0] << "\n" << auxiliar[1] << "\n" << auxiliar2[0] << "\n" << auxiliar2[1] << "\n" << auxiliar2[2];
					
					DBheranca.close();
					
					cout << "Dados do veiculo cadastrado:" << endl;
					
					cout << v1.get_marca() << endl;  // Mostrando os valores como retorno da função get.
					cout << v1.get_alimentacao() << endl;
					cout << v1.get_rodas() << endl;
					cout << v1.get_passageiros() << endl;
					cout << v1.get_carga() << endl;
					
				}
				
				else if(tipo_veiculo == "carro"){
					
					DBheranca.open("DBheranca.txt", ios::out | ios::app);
					
					cout << "Digite marca, alimentacao, numero de rodas, numero de passageiros e o tipo de transmissao, separados por enter:" << endl;
					cin >> auxiliar[0] >> auxiliar[1] >> auxiliar2[0] >> auxiliar2[1] >> auxiliar[2];
					
					v2.set_marca(auxiliar[0]);
					v2.set_alimentacao(auxiliar[1]);
					v2.set_rodas(auxiliar2[0]);
					v2.set_passageiros(auxiliar2[1]);
					v2.set_transmissao(auxiliar[2]);
					
					DBheranca << auxiliar[0] << "\n" << auxiliar[1] << "\n" << auxiliar2[0] << "\n" << auxiliar2[1] << "\n" << auxiliar[2];
					
					DBheranca.close();
					
					cout << "Dados do veiculo cadastrado:" << endl;
					
					cout << v2.get_marca() << endl;
					cout << v2.get_alimentacao() << endl;
					cout << v2.get_rodas() << endl;
					cout << v2.get_passageiros() << endl;
					cout << v2.get_transmissao() << endl;
				}
				
				break;
			}
			
			case 3:{
				
				exit(3);  // Comando de saída do menu
				
				break;
			}
		
			
		}		
	}		
	return 0;
}

