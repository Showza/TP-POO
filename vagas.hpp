#ifndef VAGAS_HPP
#define VAGAS_HPP
#include"empresa.hpp"
#include<vector>
#include"endereco.hpp"

class Vagas
{
private:
    int id_vagas;
    vector<string> vetor_skill;
    float horas;
    float remuneracao;
    Empresa empresa_vagas;
public:
        Vagas();
        Vagas(Endereco endereco_empresa,string nome_empresa,int qntFuncionarios,
            int id_vagas,vector<string> vetor_skill,float horas,float remuneracao);
        ~Vagas();

        int getIdVagas()const;
        void setIdVagas(int id_vagas_aux);
        vector<string> getSkillVagas()const;
        void setSkillVagas(vector<string> skill_vagas_aux);
        float getHorasVagas()const;
        void setHorasVagas(float horas_vagas_aux);
        float getRemuneracaoVagas()const;
        void setRemuneracaoVagas(float remuneracao_vagas_aux);
        
        void setEmpresa(Empresa empresa_vagas);
        Empresa getEmpresa();

        int retorna_quantidade_skills();

        void imprimeVagas();
};


#endif