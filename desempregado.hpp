#ifndef DESEMPREGADO_HPP
#define DESEMPREGADO_HPP

#include "pessoa.hpp"
#include <iostream>
#include <cstring>
#include<vector>

class Desempregado: public Pessoa{
private:
	int tempo;
	vector<string> vetor_de_skill;

public:
	Desempregado();
    Desempregado(int tempo, vector<string> vetor_de_skill, int idade, string nome);
    ~Desempregado();

    int getTempo()const;
    void setTempo(int aux_tempo);
    vector<string> getSkill()const;
    void setSkill(vector<string> aux_vet_skill);

    void imprimeDesempregado(); 
    int retorna_qnt_skill();
};
#endif