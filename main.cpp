
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


vector<Vagas*> outputline();

int main(){

    /*string rua;
    string bairro;
    int numero;
    string cidade;
    
    cout <<"Digite Rua: ";
    getline(cin,rua);
    cout <<"\nDigite Bairro: ";
    getline(cin,bairro);
    cout <<"\nDigite Numero: ";
    cin >> numero;
    cin.ignore();
    cout <<"\nDigite Cidade: ";
    getline(cin,cidade);
cout << "-------------- TESTE EMPRESA --------------------" << endl;
    Empresa* tabajara = new Empresa();
    string nome_empresa;
    int qntFuncionarios;
    cout << "\nDigite Nome Empresa: ";
    getline(cin,nome_empresa);
    cout << "\nDigite quantidade funcionarios: ";
    cin >> qntFuncionarios;
    *tabajara = Empresa(rua,bairro,numero,cidade,nome_empresa,qntFuncionarios);
    tabajara->imprimeEmpresa();
    delete tabajara;
cout << "-------------- TESTE PESSOA ------------------" << endl;
    Pessoa* Diego = new Pessoa();
    int idade;
    string nome_pessoa;
    
    c(in.ignore();
    cout << "\nDigite o nome da Pessoa: ";
    getline(cin,nome_pessoa);
    cout << "\nDigite a idade da Pessoa: ";
    cin >> idade;
    *Diego = Pessoa(idade,nome_pessoa,bairro,cidade,rua,numero);
    Diego->imprimePessoa();
    delete Diego;
cout << "------------ TESTE DESEMPREGADO ----------" << endl;
    Desempregado* fudido = new Desempregado();
    int i = 0;

    int tempo;
    char skill[30];

    int idade;
    char nome_pessoa[30]; 

    FILE* arq = fopen("entradaDes.txt", "r");
    while(fscanf(arq, "%[A-Z a-z] %i %[A-Z a-z] %d", nome_pessoa, &idade, skill, &tempo) != EOF){
        cout << nome_pessoa << endl;
        cout << idade << endl;
        while(skill[i] != '\0'){
            if(skill[i] != ' '){
                cout << skill[i];
            }
            else
                cout << endl;
            i++;
        }
        cout << endl;
        cout << tempo << endl << endl;
        //fseek(arq,sizeof(teste),1);
    }
    

    cin.ignore();
    cout << "Digite o nome da Pessoa: ";
    getline(cin,nome_pessoa);3699999
    cout << "Digite a idade da Pessoa: ";
    cin >> idade; 
    cin.ignore();
    cout << "Skill do desempregado: ";
    getline(cin,skill);
    cout << "Tempo desempregado: ";
    cin >> tempo;   
    *fudido = Desempregado(tempo,skill,idade,nome_pessoa,bairro,cidade,rua,numero);
    fudido->imprimeDesempregado();*/
    //delete fudido;
    //delete teste;
    int id_vagas;
    char* skill;
    char enter;
    float horas;
    float remuneracao;
    char* nome_empresa;
    outputline();
    return 0;
}




vector<Vagas*> outputline()
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
    vector<Vagas*> vetor_de_vagas;

//////////////////
    Vagas* vagas_aux = new Vagas();
    Empresa* empresa_aux = new Empresa();
    Endereco* endereco_empresa_aux = new Endereco();
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
        

        cout << "ID da empresa: " << id_vagas << endl;
        cout << "SKILL: " << skill << endl;
        cout << "HORAS: " << horas<< endl;
        cout << "REMUNERACAO: " << remuneracao << endl;
        cout << "Nome da empresa: " << nome_empresa << endl ;
        cout << "QNt Funcionarios: " << qnt_funcionarios << endl;
        cout << "Rua: " << rua << endl;
        cout << " Bairro: " << bairro << endl;
        cout << "NUmero : " << numero << endl;
        cout << "Cidade: " << cidade << endl;
        //alocacao de variaveis do objeto
        endereco_empresa_aux->setBairro(bairro);
        endereco_empresa_aux->setCidade(cidade);
        endereco_empresa_aux->setNumero(numero);
        endereco_empresa_aux->setRua(rua);
        empresa_aux->setEndereco(endereco_empresa_aux);
        empresa_aux->setNomeEmpresa(nome_empresa);
        empresa_aux->setQntFuncionarios(qnt_funcionarios);
        vagas_aux->setEmpresa(empresa_aux);
        vagas_aux->setHorasVagas(horas);
        vagas_aux->setIdVagas(id_vagas);
        vagas_aux->setRemuneracaoVagas(remuneracao);
        vagas_aux->setSkillVagas(skill);

        vetor_de_vagas.push_back(vagas_aux);
    }
    cout << "COMECOOOOU " << endl;
    vetor_de_vagas[1]->imprimeVagas();
    cout << endl;
    cout << endl;
    vetor_de_vagas[2]->imprimeVagas();
    cout << endl;
    cout << endl;
    vetor_de_vagas[40]->imprimeVagas();
    
    //vetor_de_vagas[3]->imprimeVagas();
    //cout << endl;
    //vetor_de_vagas[4]->imprimeVagas();
    //cout << endl;
    //vetor_de_vagas[5]->imprimeVagas();
    //cout << endl;
    return vetor_de_vagas;
    
    

}