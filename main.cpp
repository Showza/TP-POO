#include<iostream>
#include"empresa.hpp"
#include"pessoa.hpp"


using namespace std;

int main(){

    string rua;
    string bairro;
    int numero;
    string cidade;
/*
    cout <<"Digite Rua: ";
    getline(cin,rua);
    cout <<"\nDigite Bairro: ";
    getline(cin,bairro);
    cout <<"\nDigite Numero: ";
    cin >> numero;
    cin.ignore();
    cout <<"\nDigite Cidade: ";
    getline(cin,cidade);

    string nome_empresa;
    int qntFuncionarios;

    cout << "\nDigite Nome Empresa: ";
    getline(cin,nome_empresa);
    cout << "\nDigite quantidade funcionarios: ";
    cin >> qntFuncionarios;
    Empresa* tabajara = new Empresa();
    *tabajara = Empresa(rua,bairro,numero,cidade,nome_empresa,qntFuncionarios);
    tabajara->imprimeEmpresa();
*/
    Pessoa* Diego = new Pessoa();
    int idade;
    string nome_pessoa;
    cout <<"\nDigite Rua: ";
    getline(cin,rua);
    cout <<"\nDigite Bairro: ";
    getline(cin,bairro);
    cout <<"\nDigite Numero: ";
    cin >> numero;
    cin.ignore();
    cout <<"\nDigite Cidade: ";
    getline(cin,cidade);
    cout << "\nDigite o nome da Pessoa: ";
    getline(cin,nome_pessoa);
    cout << "\nDigite a idade da Pessoa: ";
    cin >> idade;

    *Diego = Pessoa(idade,nome_pessoa,bairro,cidade,rua,numero);
    Diego->imprimePessoa();



    return 0;
}