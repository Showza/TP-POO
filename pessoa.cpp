#include"pessoa.hpp"
using namespace std;

Pessoa::Pessoa()
{
    this->idade_pessoa = 0;
    this->nome_pessoa = "default";/*
    this->endereco_pessoa.bairro = "default";
    this->endereco_pessoa.cidade = "default";
    this->endereco_pessoa.rua = "default";
    this->endereco_pessoa.numero = 0;*/
}
Pessoa::Pessoa(int idade,string nome/*,string bairro,string cidade,string rua,int numero*/){
    setNomePessoa(nome);
    setIdadePessoa(idade);/*
    endereco_pessoa.setBairro(bairro);
    endereco_pessoa.setCidade(cidade);
    endereco_pessoa.setRua(rua);
    endereco_pessoa.setNumero(numero);*/
}
Pessoa::~Pessoa(){};
    
string Pessoa::getNomePessoa()const
{
    return nome_pessoa;
}
void Pessoa::setNomePessoa(string nome_aux)
{
    nome_pessoa = nome_aux;
}
int Pessoa::getIdadePessoa()const
{
    return idade_pessoa;
}
void Pessoa::setIdadePessoa(int idade_aux)
{
    idade_pessoa = idade_aux;
}

void Pessoa::imprimePessoa()
{
    cout << "\nNome da Pessoa: " << getNomePessoa() << endl;
    cout << "\nIdade da Pessoa: " << getIdadePessoa() << endl;
    //endereco_pessoa.imprimeEndereco();
}

