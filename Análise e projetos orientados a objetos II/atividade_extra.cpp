#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
	int numPatas;
	string cor;
	float altura;
public:
	Animal();
	Animal(int numPatas, string cor, float altura);
	int getPatas() const;
	void setPatas(int numPatas);
	string getCor() const;
	void setCor(string cor);
	float getAltura() const;
	void setAltura(float altura);
};

Animal::Animal() {
	this->numPatas = 0;
	this->cor = " ";
	this->altura = 0;
}

Animal::Animal(int numPatas, string cor, float altura) {
	this->numPatas = numPatas;
	this->cor = cor;
	this->altura = altura;
}

int Animal::getPatas() const {
	return this->numPatas;
}

void Animal::setPatas(int numPatas) {
	this->numPatas = numPatas;
}

string Animal::getCor() const {
	return this->cor;
}

void Animal::setCor(string cor) {
	this->cor = cor;
}

float Animal::getAltura() const {
	return this->altura;
}

void Animal::setAltura(float altura) {
	this->altura = altura;
}

class Mamifero:public Animal {
private:
	string nome;
	string raca;
public:
	Mamifero();
	Mamifero(string nome, string raca);
	Mamifero(string nome, string raca, int numPatas, string cor, float altura);
	string getNome() const;
	void setNome(string nome);
	string getRaca() const;
	void setRaca(string raca);
}; 

Mamifero::Mamifero() {
	this->nome = " ";
	this->raca = " ";
}

Mamifero::Mamifero(string nome, string raca) {
	this->nome = nome;
	this->raca = raca;
}

Mamifero::Mamifero(string nome, string raca, int numPatas, string cor, float altura) :Animal(numPatas, cor, altura) {
	this->nome = nome;
	this->raca = raca;
}

string Mamifero::getNome() const {
	return this->nome;
}

void Mamifero::setNome(string nome) {
	this->nome = nome;
}

string Mamifero::getRaca() const {
	return this->raca;
}

void Mamifero::setRaca(string raca) {
	this->raca = raca;
}

class Aves :public Animal {
private:
	float tamAsa;
	string corBico;
public:
	Aves();
	Aves(float tamAsa, string corBico);
	Aves(float tamAsa, string corBico, int numPatas, string cor, float altura);
	float getTamAsa() const;
	void setTamAsa(float tamAsa);
	string getCorBico() const;
	void setCorBico(string corBico);
};

Aves::Aves() {
	this->tamAsa = 0;
	this->corBico = " ";
}

Aves::Aves(float tamAsa, string corBico) {
	this->tamAsa = tamAsa;
	this->corBico = corBico;
}

Aves::Aves(float tamAsa, string corBico, int numPatas, string cor, float altura) :Animal(numPatas, cor, altura) {
	this->tamAsa = tamAsa;
	this->corBico = corBico;
}

float Aves::getTamAsa() const {
	return this->tamAsa;
}

void Aves::setTamAsa(float tamAsa) {
	this->tamAsa = tamAsa;
}

string Aves::getCorBico() const {
	return this->corBico;
}

void Aves::setCorBico(string corBico) {
	this->corBico = corBico;
}

int main() {

	cout << "-=-=-=-=-= Teste da classe Aninmal e suas Herencas -=-=-=-=-=" << endl << endl;

	Animal A1;
	A1.setPatas(4);
	cout << "-=-=-=-=-= Animal A1 -=-=-=-=-=" << endl;
	cout << " - Numero de patas do animal A1 => " << A1.getPatas() << endl << endl;

	Animal A2(4, "preto", 0.37);
	cout << "-=-=-=-=-= Animal A2 -=-=-=-=-=" << endl;
	cout << " - Numero de patas do animal A2 => " << A2.getPatas() << endl;
	cout << " - Cor do animal A2 => " << A2.getCor() << endl;
	cout << " - ALtura do animal A2 => " << A2.getPatas() << "cm" << endl << endl;

	Mamifero M1("cachorro", "puddle", 4, "branco", 0.40);
	cout << "-=-=-=-=-= Mamifero M1 -=-=-=-=-=" << endl;
	cout << " - Nome do mamifero M1 => " << M1.getNome() << endl;
	cout << " - Raca do mamifero M1 => " << M1.getRaca() << endl;
	cout << " - Numero de patas do mamifero M1 => " << M1.getPatas() << endl;
	cout << " - Cor do mamifero M1 => " << M1.getCor() << endl;
	cout << " - Altura do mamifero M1 => " << M1.getAltura() << "cm" << endl << endl;

	Aves AV1(0.15, "amarelo", 2, "cinza", 0.15);
	cout << "-=-=-=-=-= Ave AV1 -=-=-=-=-=" << endl;
	cout << " - Tamanho da asa da ave AV1 => " << AV1.getTamAsa() << endl;
	cout << " - Cor do bico da ave AV1 => " << AV1.getCorBico() << endl;
	cout << " - Numero de patas da ave AV1 => " << AV1.getPatas() << endl;
	cout << " - Cor da ave AV1 => " << AV1.getCor() << endl;
	cout << " - Altura da ave AV1 => " << AV1.getAltura() << "cm" << endl << endl;

	return 0;
}