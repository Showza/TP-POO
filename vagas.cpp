#include"vagas.hpp"
/*int id_vagas;
string skill;
float horas;
float remuneracao;
Empresa empresa_vagas;
*/

Vagas::Vagas()
{
    this->id_vagas = 0;
    this->skill = "default";
    this->horas = 0.0;
    this->remuneracao = 0.0;
    this->empresa_vagas = Empresa();
}
Vagas::Vagas(string rua,string bairro, int numero,string cidade,string nome_empresa,int qntFuncionarios,
            int id_vagas,string skill,float horas,float remuneracao)
{
    empresa_vagas.endereco_empresa.setRua(rua);
    empresa_vagas.endereco_empresa.setBairro(bairro);
    empresa_vagas.endereco_empresa.setNumero(numero);
    empresa_vagas.endereco_empresa.setCidade(cidade);
    empresa_vagas.setNomeEmpresa(nome_empresa);
    empresa_vagas.setQntFuncionarios(qntFuncionarios);
    this->empresa_vagas.qntFuncionarios = qntFuncionarios;
    this->id_vagas = id_vagas;
    this->skill = skill;
    this->horas = horas;
    this->remuneracao = remuneracao;
}
Vagas::~Vagas(){};


int Vagas::getIdVagas()const
{
    return id_vagas;
}
void Vagas::setIdVagas(int id_vagas_aux)
{
    id_vagas = id_vagas_aux;
}
string Vagas::getSkillVagas()const
{
    return skill;
}
void Vagas::setSkillVagas(string skill_vagas_aux)
{
    skill = skill_vagas_aux;
}
float Vagas::getHorasVagas()const
{
    return horas;
}
void Vagas::setHorasVagas(float horas_vagas_aux)
{
    horas = horas_vagas_aux;
}
float Vagas::getRemuneracaoVagas()const
{
    return remuneracao;
}
void Vagas::setRemuneracaoVagas(float remuneracao_vagas_aux)
{
    remuneracao = remuneracao_vagas_aux;
}
void Vagas::imprimeVagas()
{
    empresa_vagas.endereco_empresa.imprimeEndereco();
    empresa_vagas.imprimeEmpresa();
    cout << "\nId da vaga: " << getIdVagas();
    cout << "\nSkill para vaga: " << getSkillVagas();
    cout << "\nCarga Horaria da Vaga: " << getHorasVagas();
    cout << "\nRemuneracao da vaga: " << getRemuneracaoVagas();
}