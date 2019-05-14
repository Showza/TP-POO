#ifndef VAGAS_HPP
#define VAGAS_HPP
#include"empresa.hpp"
#include"endereco.hpp"

class Vagas
{
private:
    int id_vagas;
    string skill;
    float horas;
    float remuneracao;
    Empresa empresa_vagas;
public:
        Vagas();
        Vagas(Endereco endereco_empresa,string nome_empresa,int qntFuncionarios,
            int id_vagas,string skill,float horas,float remuneracao);
        ~Vagas();

        int getIdVagas()const;
        void setIdVagas(int id_vagas_aux);
        string getSkillVagas()const;
        void setSkillVagas(string skill_vagas_aux);
        float getHorasVagas()const;
        void setHorasVagas(float horas_vagas_aux);
        float getRemuneracaoVagas()const;
        void setRemuneracaoVagas(float remuneracao_vagas_aux);
        
        void setEmpresa(Empresa empresa_vagas);
        Empresa getEmpresa();

        void imprimeVagas();
};


#endif