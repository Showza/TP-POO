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
    this->empresa_vagas = NULL;
}
Vagas::Vagas(Endereco* endereco_empresa,string nome_empresa,int qntFuncionarios,
            int id_vagas,string skill,float horas,float remuneracao)
{
    empresa_vagas->setEndereco(endereco_empresa);
    empresa_vagas->setNomeEmpresa(nome_empresa);
    empresa_vagas->setQntFuncionarios(qntFuncionarios);
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
    empresa_vagas->imprimeEmpresa();
    cout << "Id da vaga: " << getIdVagas() << endl;
    cout << "Skill para vaga: " << getSkillVagas() << endl;
    cout << "Carga Horaria da Vaga: " << getHorasVagas() << endl;
    cout << "Remuneracao da vaga: " << getRemuneracaoVagas() << endl;
}

 void Vagas::setEmpresa(Empresa* empresa_vagas)
 {
     this->empresa_vagas = empresa_vagas;
 }
Empresa* Vagas::getEmpresa()
{
    return empresa_vagas;
}