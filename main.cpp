
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


using namespace std;


vector<Vagas> vagas_com_Skill(string skill_procurada,vector<Vagas> vetor_de_vagas);
vector<Vagas> lerVagas();

int main(){
    vector<Vagas> vetor_de_vagas;
    vector<Vagas> ordenado_por_id;
    int id_vagas;
    char* skill;
    char enter;
    float horas;
    float remuneracao;
    char* nome_empresa;
    vetor_de_vagas = lerVagas();//copia do vetor pra main
    
    //mostra vagas por skill ordenados pelo id
    ordenado_por_id = vagas_com_Skill("poledancing",vetor_de_vagas);
    int tam_ordenado;
    tam_ordenado = ordenado_por_id.size();
    for(int i=0;i<tam_ordenado;i++){
        ordenado_por_id[i].imprimeVagas();
    }
    //fim da impressao


    
    //vetor_de_vagas[1].imprimeVagas();
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
        //SEPARANDO SKILL
        int i=0;
        string word;//auxiliar para salvar os skillls separados
		stringstream str(skill);
        vector<string> vetor_skill;//tem que ficar aqui pra sempre ir criando uma lista estatica
		while(str >> word){// separa os Skills
            vetor_skill.push_back(word);
            i++;
        }
        ////////
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
        vagas_aux.setSkillVagas(vetor_skill);

        vetor_de_vagas.push_back(vagas_aux);
    }
    int tam;
    tam = vetor_de_vagas.size();
        //vetor_de_vagas[80].imprimeVagas();

    return vetor_de_vagas;
}

vector<Vagas> vagas_com_Skill(string skill_procurada,vector<Vagas> vetor_de_vagas)//retorna a vaga com a skill ordenada por id
{
    vector<Vagas> retorno;
    vector<string> skill_aux;

    int tam_vetor_de_vagas = vetor_de_vagas.size();
    int qnt_skills_por_vaga;
    for(int i=0;i<tam_vetor_de_vagas;i++)
    {
        qnt_skills_por_vaga = vetor_de_vagas[i].retorna_quantidade_skills();//olho a quantidade de skill da primeira pos do vetor ori
        skill_aux = vetor_de_vagas[i].getSkillVagas();//faco a copia desse vetor de skill pro skill_aux
        for(int j=0;j<qnt_skills_por_vaga;j++)//um for da quantidade de skill 
        {
            if(skill_procurada == skill_aux[j]){//se tiver uma skill igual
                retorno.push_back(vetor_de_vagas[i]);//aloco no vetor de retorno
            }
        }
    }
    return retorno;
}