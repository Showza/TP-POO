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







#endif