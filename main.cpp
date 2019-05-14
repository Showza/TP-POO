#include<iostream>
#include <cstring>
#include "empresa.hpp"
#include "pessoa.hpp"
#include "endereco.hpp"
#include "desempregado.hpp"
#include "vagas.hpp"


using namespace std;

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
    delete Diego;*/
cout << "------------ TESTE DESEMPREGADO ----------" << endl;
    Desempregado* fudido = new Desempregado();
    int i = 0;

    int tempo;
    char skill[30];

    int idade;
    char nome_pessoa[30]; 

    FILE* arq = fopen("entradaDes.txt", "r");
    while(fscanf(arq, "%[A-Z a-z] %i %[A-Z a-z] %i", nome_pessoa, &idade, skill, &tempo) != EOF){
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
    

    /*cin.ignore();
    cout << "Digite o nome da Pessoa: ";
    getline(cin,nome_pessoa);
    cout << "Digite a idade da Pessoa: ";
    cin >> idade; 
    cin.ignore();
    cout << "Skill do desempregado: ";
    getline(cin,skill);
    cout << "Tempo desempregado: ";
    cin >> tempo;   

    *fudido = Desempregado(tempo,skill,idade,nome_pessoa,bairro,cidade,rua,numero);
    fudido->imprimeDesempregado();*/
    delete fudido;
    delete teste;
    return 0;
}