#ifndef EMPRESA_HPP
#define EMPRESA_HPP
#include<iostream>
#include"endereco.hpp"

class Empresa
{
private:
    string nome_empresa;
    int qntFuncionarios;
    Endereco* endereco_empresa;
public:
    Empresa();
    Empresa(string rua,string bairro, int numero,string cidade,string nome_empresa,int qntFuncionarios);
    ~Empresa();

    string getNomeEmpresa()const;
    void setNomeEmpresa(string nome_empresa);
    int getQntFuncionarios()const;
    void setQntFuncionarios(int qntFuncionarios);
    void setEndereco(Endereco* endereco_empresa);
    Endereco* getEndereco()const;
    
    void imprimeEmpresa();
};


#endif