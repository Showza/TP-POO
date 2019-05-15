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
    this->horas = 0.0;
    this->remuneracao = 0.0;
    this->empresa_vagas = Empresa();
}
Vagas::Vagas(Endereco endereco_empresa,string nome_empresa,int qntFuncionarios,
            int id_vagas,vector<string> vetor_skill,float horas,float remuneracao)
{
    empresa_vagas.setEndereco(endereco_empresa);
    empresa_vagas.setNomeEmpresa(nome_empresa);
    empresa_vagas.setQntFuncionarios(qntFuncionarios);
    setSkillVagas(vetor_skill);
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
vector<string> Vagas::getSkillVagas()const
{
    return vetor_skill;
}
void Vagas::setSkillVagas(vector<string> skill_vagas_aux)
{
    vetor_skill = skill_vagas_aux;
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
    cout << endl;
    empresa_vagas.imprimeEmpresa();
    cout << "Id da vaga: " << getIdVagas() << endl;
    int tam = vetor_skill.size();
    for(int i=0;i<tam;i++){
        cout << "Skill para vaga: " << vetor_skill[i] << endl;
    }
    cout << "Carga Horaria da Vaga: " << getHorasVagas() << endl;
    cout << "Remuneracao da vaga: " << getRemuneracaoVagas() << endl;
}

 void Vagas::setEmpresa(Empresa empresa_vagas)
 {
     this->empresa_vagas = empresa_vagas;
 }
Empresa Vagas::getEmpresa()
{
    return empresa_vagas;
}

int Vagas::retorna_quantidade_skills()
{
    return vetor_skill.size();
}