#include<iostream>
#include "empresa.hpp"
#include "pessoa.hpp"
#include "endereco.hpp"
#include "desempregado.hpp"
#include "vagas.hpp"


using namespace std;

int main(){

    string rua;
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
//-------------------- TESTE EMPRESA -------------------------------------
    Empresa* tabajara = new Empresa();
    string nome_empresa;
    int qntFuncionarios;

    cout << "\nDigite Nome Empresa: ";
    getline(cin,nome_empresa);
    cout << "\nDigite quantidade funcionarios: " << endl;
    cin >> qntFuncionarios;
    *tabajara = Empresa(rua,bairro,numero,cidade,nome_empresa,qntFuncionarios);
    tabajara->imprimeEmpresa();
    delete tabajara;
//------------------ TESTE PESSOA -----------------------------------------
    Pessoa* Diego = new Pessoa();
    int idade;
    string nome_pessoa;
    
    cin.ignore();
    cout << "\nDigite o nome da Pessoa: ";
    getline(cin,nome_pessoa);
    cout << "\nDigite a idade da Pessoa: " << endl;
    cin >> idade;

    *Diego = Pessoa(idade,nome_pessoa,bairro,cidade,rua,numero);
    Diego->imprimePessoa();
    delete Diego;
//------------------ TESTE DESEMPREGADO -----------------------------------------
    Desempregado* fudido = new Desempregado();
    int tempo;
    string skill;
    int idade;
    string nome_pessoa;

    cin.ignore();
    cout << "Tempo desempregado: ";
    cin >> tempo;
    cout << "Skill do desempregado: ";
    getline(cin,skill);
    cout << "Digite o nome da Pessoa: ";
    getline(cin,nome_pessoa);
    cout << "Digite a idade da Pessoa: " << endl;
    cin >> idade;    

    *fudido = Desempregado(tempo,skill,idade,nome_pessoa,bairro,cidade,rua,numero);
    fudido->imprimePessoa();
    return 0;
}