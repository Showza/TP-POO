
#include<iostream>
#include <cstring>
#include "empresa.hpp"
#include "pessoa.hpp"
#include "endereco.hpp"
#include "desempregado.hpp"
#include "vagas.hpp"
#include"funcoes.hpp"

#include<stdlib.h>
#include <fstream>
#include <vector>
#include <sstream> 


using namespace std;



int main(){
    vector<Vagas> vetor_de_vagas;
    vector<Vagas> skill_ordenado_por_id;
    vector<Vagas> empresa_ordenado_por_id;
    int id_vagas;
    char* skill;
    char enter;
    float horas;
    float remuneracao;
    char* nome_empresa;
    vetor_de_vagas = lerVagas();//copia do vetor pra main
    /************************************************************
    *                    QUESTAO 3                              *
    *     mostra vagas por skill ordenados pelo id              *
    *************************************************************/
    skill_ordenado_por_id = vagas_com_Skill("poledancing",vetor_de_vagas);
    int tam_skill_ordenado;
    tam_skill_ordenado = skill_ordenado_por_id.size();
    for(int i=0;i<tam_skill_ordenado;i++){
        skill_ordenado_por_id[i].imprimeVagas();
    }
    //fim da impressao
    /************************************************************
    *                    QUESTAO 7                              *
    *     mostra vagas referente a empresa ordenadas por id     *
    *************************************************************/
    empresa_ordenado_por_id = retorna_Empresa_e_suas_vagas("city beat",vetor_de_vagas);
    int tam_empres_ordenado = empresa_ordenado_por_id.size();
    for(int i=0;i<tam_empres_ordenado;i++)
    {
        empresa_ordenado_por_id[i].imprimeVagas();
    }
    //fim da impressao
    
    //vetor_de_vagas[1].imprimeVagas();
    return 0;
}
