#include "desempregado.hpp"
using namespace std;

Desempregado::Desempregado():Pessoa()
{
	this->tempo = 0;
}

Desempregado::Desempregado(int tempo, vector<string>  vetor_de_skill, int idade, string nome) : Pessoa(idade,nome)
{
	setTempo(tempo);
	setSkill(vetor_de_skill);
}

Desempregado::~Desempregado(){};

void Desempregado::setTempo(int aux_tempo)
{
	tempo = aux_tempo;
}

void Desempregado::setSkill(vector<string> aux_skill)
{
	vetor_de_skill = aux_skill;
}

int Desempregado::getTempo() const
{
	return tempo;
}

vector<string> Desempregado::getSkill() const
{
	return vetor_de_skill;
}

void Desempregado::imprimeDesempregado()
{
	cout << getNomePessoa() << endl;
	cout << getIdadePessoa() << endl;
	int tam = vetor_de_skill.size();
    for(int i=0;i<tam;i++){
        cout << "Skill para vaga: " << vetor_de_skill[i] << endl;
    }
	cout << "\nTempo desempregado: " << getTempo() << endl;
}

int Desempregado::retorna_qnt_skill()
{
	return vetor_de_skill.size();
}