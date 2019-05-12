#include"endereco.hpp"
using namespace std;

Endereco::Endereco(){
    this->cidade = "default";
    this->numero = 0;
    this->bairro = "default";
    this->rua = "default";
}
Endereco::Endereco(string rua,string bairro,int numero,string cidade){
    setRua(rua);
    setBairro(bairro);
    setNumero(numero);
    setCidade(cidade);
} 
Endereco::~Endereco(){}; 

string Endereco::getRua()const                   {return rua;}

void Endereco::setRua(string rua_aux)            {rua = rua_aux;}

string Endereco::getBairro()const                {return bairro;}

void Endereco::setBairro(string bairro_aux)      { bairro = bairro_aux;}

int Endereco::getNumero()const                   {return numero;}

void Endereco::setNumero(int numero_aux)         {numero = numero_aux;}

string Endereco::getCidade()const                {return cidade;}

void Endereco::setCidade(string cidade_aux)      {cidade = cidade_aux;}

void Endereco::imprimeEndereco()
{
    cout << "Rua: " << getRua() << endl;
    cout << "Bairro: " << getBairro() << endl;
    cout << "Cidade: " << getCidade() << endl;
    cout << "Numero: " << getNumero() << endl;
}