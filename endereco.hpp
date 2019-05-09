#ifndef ENDERECO_HPP
#define ENDERECO_HPP
#include<string>
#include<iostream>
using namespace std;

class Endereco{
public: 
    string rua;
    string bairro;
    int numero;
    string cidade;

public:
    Endereco();
    Endereco(string rua,string bairro,int numero,string cidade);
    ~Endereco();
    
    string getRua()const;
    void setRua(string rua);
    string getBairro()const;
    void setBairro(string bairro);
    int getNumero()const;
    void setNumero(int numero);
    string getCidade()const;
    void setCidade(string cidade);

    void imprimeEndereco();
};


#endif