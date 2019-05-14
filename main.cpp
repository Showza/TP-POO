
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


using namespace std;


vector<Vagas> lerVagas();

int main(){
    vector<Vagas> vetor_de_vagas;
    int id_vagas;
    char* skill;
    char enter;
    float horas;
    float remuneracao;
    char* nome_empresa;
    vetor_de_vagas = lerVagas();//copia do vetor pra main
    vetor_de_vagas[1].imprimeVagas();
    return 0;
}




vector<Vagas> lerVagas()
{
////////////////
    int id_vagas;
    string skill;
    float horas;
    float remuneracao;
    string nome_empresa;
    int qnt_funcionarios;
    string rua;
    string bairro;
    int numero;
    string cidade;
    vector<Vagas> vetor_de_vagas;

//////////////////
    Vagas vagas_aux = Vagas();
    Empresa empresa_aux = Empresa();
    Endereco endereco_empresa_aux = Endereco();
    ifstream arq_vagas("entradaVagas.txt", ios::in);
    while(!arq_vagas.eof()){
        arq_vagas >> id_vagas;
        arq_vagas.ignore();
        getline(arq_vagas,skill);
        arq_vagas >> horas >> remuneracao;
        arq_vagas.ignore();
        getline(arq_vagas,nome_empresa);
        arq_vagas >> qnt_funcionarios;
        arq_vagas.ignore();
        getline(arq_vagas,rua);
        getline(arq_vagas,bairro);
        arq_vagas >> numero;
        arq_vagas.ignore();
        getline(arq_vagas,cidade);
        
        //alocacao de variaveis do objeto
        endereco_empresa_aux.setBairro(bairro);
        endereco_empresa_aux.setCidade(cidade);
        endereco_empresa_aux.setNumero(numero);
        endereco_empresa_aux.setRua(rua);
        empresa_aux.setEndereco(endereco_empresa_aux);
        empresa_aux.setNomeEmpresa(nome_empresa);
        empresa_aux.setQntFuncionarios(qnt_funcionarios);
        vagas_aux.setEmpresa(empresa_aux);
        vagas_aux.setHorasVagas(horas);
        vagas_aux.setIdVagas(id_vagas);
        vagas_aux.setRemuneracaoVagas(remuneracao);
        vagas_aux.setSkillVagas(skill);

        vetor_de_vagas.push_back(vagas_aux);
    }
    int tam;
    tam = vetor_de_vagas.size();
    /*for(int i=0;i<tam;i++){
        cout << "COMECOOOOU " << endl;
        vetor_de_vagas[i].imprimeVagas();
        cout << endl;
    }*/

    return vetor_de_vagas;
    
    

}