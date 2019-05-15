#ifndef PESSOA_HPP
#define PESSOA_HPP
#include"endereco.hpp"
#include<iostream>

class Pessoa{
public:
    string nome_pessoa;
    int idade_pessoa;
    //Endereco endereco_pessoa;
public:
    Pessoa();
    Pessoa(int idade,string nome/*,string bairro,string cidade,string rua,int numero*/);
    ~Pessoa();
    
    string getNomePessoa()const;
    void setNomePessoa(string nome_aux);
    int getIdadePessoa()const;
    void setIdadePessoa(int idade_aux);

    void imprimePessoa(); 

};
#endif