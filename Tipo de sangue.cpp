#include <iostream>
#include <string>

using namespace std;

class paciente{
	private://declaracao de atributos
		string nome;
		double telefone;
		string tipo_sanguineo;
		int idade;
		
	public:
		paciente(){//construtor
			nome = " ";
			telefone = 0;
			tipo_sanguineo = " ";
			idade = 0;
		}
	//funcoes get e set 	
	void setNome(string n){
		nome = n;
	}
	string getNome(){
		return nome;
	}
	void setTelefone(double t){
		telefone = t;
	}
	double getTelefone(){
		return telefone;
	}
	void setSangue(string s){
		tipo_sanguineo = s;
	}
	string getSangue(){
		return tipo_sanguineo;
	}
	void setIdade(int i){
		idade = i;
	}
	int getIdade(){
		return idade;
	}
	void imprimeInformacoes(){
		if(getSangue() == "o-"|| getSangue() == "O-"){
			//quanddo o retorno de get sangue for igual a o-,ou O- ocorre a impressao por meio dos metodos get
				cout<<"Informacoes do paciente: "<<"\n";
				cout<<"Nome: "<<getNome()<<"\n";
				cout<<"Telefone: "<<getTelefone()<<"\n";
				cout<<"Tipo sanguineo: "<<getSangue()<<"\n";
				cout<<"idade: "<<getIdade()<<"\n";
				cout<<"\n";
			
		}
	}
};

int main(){//declaracao de variaveis
	string name,sangue;
	double tel;
	int age,n;
	paciente *pac;
	
	cout<<"Quantos pacientes quer cadastrar: ";
	cin>>n;
	
	pac = new paciente[n];//criacao de um vetor de tamanho a ser escolhido pelo usuario
	
	for(int i=0; i < n; i++){
		cout<<"Digite o nome do paciente: ";
		cin>>name;
		cout<<"Digite o telefone do paciente: ";
		cin>>tel;
		cout<<"Digite o tipo sanguineo do paciente: ";
		cin>>sangue;
		cout<<"Digite a idade do paciente: ";
		cin>>age;
		cout<<"\n";
		//cada informacao digitada pelo usuario e armazenada no vetor
		pac[i].setNome(name);
		pac[i].setTelefone(tel);
		pac[i].setSangue(sangue);
		pac[i].setIdade(age);
	}
	
	for(int i=0; i < n;i++){
		pac[i].imprimeInformacoes();
	}
	
	delete[] pac;//como as informacoes foram impressas deletamos o vetor
	
	return 0;
}
