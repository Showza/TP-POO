#ifndef FUNCOES_HPP
#define FUNCOES_HPP

#include<iostream>
#include <cstring>
#include "empresa.hpp"
#include "pessoa.hpp"
#include "endereco.hpp"
#include "desempregado.hpp"
#include "vagas.hpp"

#include<stdlib.h>
#include <fstream>
#include <vector>
#include <sstream> 

vector<Vagas> retorna_Empresa_e_suas_vagas(string empresa_procurada,vector<Vagas> vetor_de_vagas);
vector<Vagas> vagas_com_Skill(string skill_procurada,vector<Vagas> vetor_de_vagas);
vector<Vagas> lerVagas();
vector<Desempregado> lerDesempregado();

Desempregado RetornaDesempregado(string nome_desempregado,vector<Desempregado> vetor_de_desempregado);
vector<Vagas> questao2(string nome_desempregado,vector<Desempregado> vetor_de_desempregado,vector<Vagas> vetor_de_vagas);

Vagas RetornaVagaPorId(int id_vaga,vector<Vagas> vetor_de_vagas);
vector<Desempregado> questao5(int id_vagas,vector<Desempregado> vetor_de_desempregado,vector<Vagas> vetor_de_vagas);

bool ordena_vector_vagas(Vagas A, Vagas B);
bool ordena_vector_desempregado(Desempregado A, Desempregado B);

vector<Desempregado> questao6(string skill, vector<Desempregado> vetor_de_desempregado);
vector<Vagas> questao6(string skill, vector<Vagas> vetor_de_vagas);
bool ordena_vector_idade(Desempregado A, Desempregado B);


#endif