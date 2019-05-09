#ifndef VAGAS_HPP
#define VAGAS_HPP
#include"empresa.hpp"
#include"endereco.hpp"

class Vagas
{
public:
    int id_vagas;
    string skill;
    float horas;
    float remuneracao;
    Empresa empresa_vagas;
public:
        Vagas();
        Vagas(string rua,string bairro, int numero,string cidade,string nome_empresa,int qntFuncionarios,
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

        void imprimeVagas();
};


#endif