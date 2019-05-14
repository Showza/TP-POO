#include "desempregado.hpp"
using namespace std;

Desempregado::Desempregado():Pessoa(){
	this->tempo = 0;
	this->skill = "default";
}

Desempregado::Desempregado(int tempo, string skill, int idade, string nome, string bairro, string cidade, string rua, int numero):Pessoa(idade, nome, bairro, cidade, rua, numero){
	setTempo(tempo);
	setSkill(skill);
}

Desempregado::~Desempregado(){};

void Desempregado::setTempo(int aux_tempo){
	tempo = aux_tempo;
}

void Desempregado::setSkill(string aux_skill){
	skill = aux_skill;
}

int Desempregado::getTempo() const{
	return tempo;
}

string Desempregado::getSkill() const{
	return skill;
}

void Desempregado::imprimeDesempregado(){
	cout << "\nTempo desempregado: " << getTempo() << endl;
	cout << "Skill do desempregado: " << getSkill() << endl;
	imprimePessoa();
}