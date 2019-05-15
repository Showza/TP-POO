#include<iostream>
#include<stdlib.h>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream> 
#include <cstring>
#include "empresa.hpp"
#include "pessoa.hpp"
#include "endereco.hpp"
#include "desempregado.hpp"
#include "vagas.hpp"
#include"funcoes.hpp"


using namespace std;



int main(){
    /***********************************
     *       VARIAVEIS DE VAGAS        *
     * *********************************/
    vector<Vagas> vetor_de_vagas;

    vetor_de_vagas = lerVagas();//vetor de vagas pra main
    /***********************************
     *      VARIAVEIS DE DESEMPREGADO  *
     * *********************************/
    vector<Desempregado> vetor_de_desempregado;


    vetor_de_desempregado = lerDesempregado();//vetor de desempregados para main
    /****************************************************
    *                    QUESTAO 2                      *
    *                                                   *
    *****************************************************/
   
    /*vector<Vagas> vagasDisponiveis;
    Desempregado aux;
    vagasDisponiveis = questao2("Maryellen Downs",vetor_de_desempregado,vetor_de_vagas);

    int qnt_vagasDisponiveis = vagasDisponiveis.size();

    sort(vagasDisponiveis.begin(), vagasDisponiveis.end(), ordena_vector_vagas);

    for(int i=0;i<qnt_vagasDisponiveis;i++)
    {
        vagasDisponiveis[i].imprimeVagas();
        cout << "****************************" <<endl;
    }*/
    
    /****************************************************
    *                    QUESTAO 3                      *
    *     mostra vagas por skill ordenados pelo id      *
    *****************************************************/
   
    /*vector<Vagas> skill_ordenado_por_id;
    skill_ordenado_por_id = vagas_com_Skill("poledancing",vetor_de_vagas);
    int tam_skill_ordenado;
    tam_skill_ordenado = skill_ordenado_por_id.size();
    for(int i=0;i<tam_skill_ordenado;i++){
        skill_ordenado_por_id[i].imprimeVagas();
    }*/
    
    //fim da impressao

    /*****************************************************************
    *               QUESTAO 5                                        *
    * exibir todos os desempregados que possuem os skills requeridos *
    * ****************************************************************/
    /*vector<Desempregado> desempregados_com_requisito;
    Vagas aux;
    desempregados_com_requisito = questao5(1,vetor_de_desempregado,vetor_de_vagas);
    int qnt_desempregados_com_requisito = desempregados_com_requisito.size();

    sort(desempregados_com_requisito.begin(), desempregados_com_requisito.end(), ordena_vector_desempregado);

    for(int i=0;i<qnt_desempregados_com_requisito;i++)
    {
        desempregados_com_requisito[i].imprimeDesempregado();
        cout << "**************************************" << endl;
    }*/

    /************************************************************
    *                    QUESTAO 6                              *
    *     mostra vagas referente a skill ordenado por id        *
    *************************************************************/
    string skill = "interpersonal";
    vector<Desempregado> desempregados_com_skill = questao6(skill, vetor_de_desempregado);
    int qnt_desempregados_com_skill = desempregados_com_skill.size();
    vector<Vagas> vagas_com_skill = questao6(skill, vetor_de_vagas);
    int qnt_vagas_com_skill = vagas_com_skill.size();

    sort(desempregados_com_skill.begin(), desempregados_com_skill.end(), ordena_vector_idade);

    cout << " DESEMPREGADOS ------------------" << endl;
    for(int i=0;i<qnt_desempregados_com_skill;i++){
        desempregados_com_skill[i].imprimeDesempregado();
        cout << "**************************************" << endl;
    }
    cout << " VAGAS ------------------" << endl;
    for(int i=0;i<qnt_vagas_com_skill;i++){
        vagas_com_skill[i].imprimeVagas();
        cout << "**************************************" << endl;
    }

    /************************************************************
    *                    QUESTAO 7                              *
    *     mostra vagas referente a empresa ordenadas por id     *
    *************************************************************/
   /*
    vector<Vagas> empresa_ordenado_por_id;
    empresa_ordenado_por_id = retorna_Empresa_e_suas_vagas("city beat",vetor_de_vagas);
    int tam_empres_ordenado = empresa_ordenado_por_id.size();
    for(int i=0;i<tam_empres_ordenado;i++)
    {
        empresa_ordenado_por_id[i].imprimeVagas();
    }
    //fim da impressao
    */
    return 0;
}
