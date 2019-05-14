#include"empresa.hpp"
using namespace std;


Empresa::Empresa()
{
    this->nome_empresa = "default";
    this->qntFuncionarios = 0;
    this->endereco_empresa = NULL;
}
Empresa::Empresa(string rua,string bairro, int numero,string cidade,string nome_empresa,int qntFuncionarios)
{
    endereco_empresa->setBairro(bairro);
    endereco_empresa->setCidade(cidade);
    endereco_empresa->setNumero(numero);
    endereco_empresa->setRua(rua);
    setQntFuncionarios(qntFuncionarios);
    setNomeEmpresa(nome_empresa);
}
Empresa::~Empresa(){};//destrutor

string Empresa::getNomeEmpresa()const                       {return nome_empresa;}

void Empresa::setNomeEmpresa(string nome_empresa_aux)       {nome_empresa = nome_empresa_aux;}

int Empresa::getQntFuncionarios() const                     { return qntFuncionarios;}

void Empresa::setQntFuncionarios(int qntFuncionarios_aux)   {qntFuncionarios = qntFuncionarios_aux;}

void Empresa::imprimeEmpresa(){
    endereco_empresa->imprimeEndereco();
    cout << "Nome: " << getNomeEmpresa() << endl;
    cout <<"Quantidade de Funcionarios: " <<  getQntFuncionarios() << endl;
}
void Empresa::setEndereco(Endereco* endereco_empresa)
{
    this->endereco_empresa = endereco_empresa;
}
Endereco* Empresa::getEndereco()const
{
    return endereco_empresa;
} 
