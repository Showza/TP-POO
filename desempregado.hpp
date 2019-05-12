#ifndef DESEMPREGADO_HPP
#define DESEMPREGADO_HPP

#include "pessoa.hpp"
#include <iostream>
#include <cstring>

class Desempregado: public Pessoa{
public:
	int tempo;
	string skill;

public:
	Desempregado();
    Desempregado(int tempo, string skill, int idade, string nome, string bairro, string cidade, string rua, int numero);
    ~Desempregado();

    int getTempo()const;
    void setTempo(int aux_tempo);
    string getSkill()const;
    void setSkill(string aux_skill);

    void imprimePessoa(); 
};
#endif