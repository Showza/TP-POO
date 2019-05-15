#include "funcoes.hpp"




/***************************
 *   FUNCAO DE LER VAGAS   *
 * *************************/
vector<Vagas> lerVagas()
{
    int id_vagas;
    string skill;
    float horas;
    float remuneracao;
    string nome_empresa;
    int qnt_funcionarios;
    string rua;
    string bairro;
    int numero;
    string cidade;
    vector<Vagas> vetor_de_vagas;

    Vagas vagas_aux = Vagas();
    Empresa empresa_aux = Empresa();
    Endereco endereco_empresa_aux = Endereco();
    ifstream arq_vagas("entradaVagas.txt", ios::in);
    while(!arq_vagas.eof()){
        arq_vagas >> id_vagas;
        arq_vagas.ignore();
        getline(arq_vagas,skill);
        arq_vagas >> horas >> remuneracao;
        arq_vagas.ignore();
        getline(arq_vagas,nome_empresa);
        arq_vagas >> qnt_funcionarios;
        arq_vagas.ignore();
        getline(arq_vagas,rua);
        getline(arq_vagas,bairro);
        arq_vagas >> numero;
        arq_vagas.ignore();
        getline(arq_vagas,cidade);
        //SEPARANDO SKILL
        int i=0;
        string word;//auxiliar para salvar os skillls separados
		stringstream str(skill);
        vector<string> vetor_skill;//tem que ficar aqui pra sempre ir criando uma lista estatica
		while(str >> word){// separa os Skills
            vetor_skill.push_back(word);
            i++;
        }
        //alocacao de variaveis do objeto
        endereco_empresa_aux.setBairro(bairro);
        endereco_empresa_aux.setCidade(cidade);
        endereco_empresa_aux.setNumero(numero);
        endereco_empresa_aux.setRua(rua);
        empresa_aux.setEndereco(endereco_empresa_aux);
        empresa_aux.setNomeEmpresa(nome_empresa);
        empresa_aux.setQntFuncionarios(qnt_funcionarios);
        vagas_aux.setEmpresa(empresa_aux);
        vagas_aux.setHorasVagas(horas);
        vagas_aux.setIdVagas(id_vagas);
        vagas_aux.setRemuneracaoVagas(remuneracao);
        vagas_aux.setSkillVagas(vetor_skill);
        vetor_de_vagas.push_back(vagas_aux);
    }
    return vetor_de_vagas;
}
/**********************************
 *   FUNCAO DE LER DESEMPREGADO   *
 * ********************************/
vector<Desempregado> lerDesempregado()
{
    int tempo;
    string skill;
    vector<string> vetor_de_skill;
    int idade;
    string nome;

    vector<Desempregado> vetor_de_desempregado;

    Desempregado desempregado_aux = Desempregado();
    //abertura do arquivo Des.txt
    ifstream arq_Desempregado("entradaDes.txt",ios::in);
    while(!arq_Desempregado.eof())
    { 
        getline(arq_Desempregado,nome);
        arq_Desempregado >> idade;
        arq_Desempregado.ignore();
        getline(arq_Desempregado,skill);
        arq_Desempregado >> tempo;
        //SEPARANDO SKILL
        int i=0;
        string word;//auxiliar para salvar os skillls separados
		stringstream str(skill);
        vector<string> vetor_de_skill;//tem que ficar aqui pra sempre ir criando uma lista estatica
		while(str >> word){// separa os Skills
            vetor_de_skill.push_back(word);
            i++;
        }
        //alocar o desempregado e jogar dentro do vector
        desempregado_aux.setNomePessoa(nome);
        desempregado_aux.setIdadePessoa(idade);
        desempregado_aux.setTempo(tempo);
        desempregado_aux.setSkill(vetor_de_skill);
        vetor_de_desempregado.push_back(desempregado_aux);
        arq_Desempregado.ignore();
    }
    return vetor_de_desempregado;
}
/************************************************************
*                    QUESTAO 2                              *
* Dado o nome de um desempregado, exibir todas as vagas em  *
* que o desempregado supri osrequisitos de skill, ou seja,  *
* se a vaga requer o skill A e B o desempregado deve possuir*
* pelo menos esses dois skills. O resultado deve ser        *
*                   ordenado pela remuneração;              *
*************************************************************/
Desempregado RetornaDesempregado(string nome_desempregado,vector<Desempregado> vetor_de_desempregado)
{//ESSA FUNCAO FAZ A BUSCA NO VETOR DE DESEMPREGADOS ATE ACHAR O NOME
    Desempregado desempregado_aux;
    int tamanho_vetor_desempregado = vetor_de_desempregado.size();
    for(int i=0;i<tamanho_vetor_desempregado;i++)
    {
        if(nome_desempregado == vetor_de_desempregado[i].getNomePessoa())
        {
            desempregado_aux = vetor_de_desempregado[i];
            return desempregado_aux;
        }
    }
}

bool ordena_vector_vagas(Vagas A, Vagas B){
    if (A.getRemuneracaoVagas() < B.getRemuneracaoVagas())
       return true;
    return false;
}

vector<Vagas> questao2(string nome_desempregado,vector<Desempregado> vetor_de_desempregado,vector<Vagas> vetor_de_vagas)
{
    vector<Vagas> vetor_retorno;
    Desempregado desempregado_aux = RetornaDesempregado(nome_desempregado,vetor_de_desempregado);//pesquisa feita
    int qnt_skill_desempregado = desempregado_aux.retorna_qnt_skill();
    int qnt_skill_vagas;
    int qnt_desempregados = vetor_de_desempregado.size();
    int qnt_vagas = vetor_de_vagas.size();

    Vagas vaga_temp;
    vector<string> vetor_skill_desempregado = desempregado_aux.getSkill();
    vector<string> skill_temp_vagas;

    for(int i=0;i<qnt_vagas;i++){//caminhando de vaga em vaga
        vaga_temp = vetor_de_vagas[i];
        skill_temp_vagas = vaga_temp.getSkillVagas();//criando um vetor temporario com as skills da vaga
        qnt_skill_vagas = vaga_temp.retorna_quantidade_skills();//obtenho a quantidade de skills da vaga
        int comparador = 0;//count para verificar se tem todos os requisitos
        for( int q=0;q<qnt_skill_vagas;q++)//caminha na skill de vagas
        {
            if(qnt_skill_vagas<=qnt_skill_desempregado){
                for(int w=0;w<qnt_skill_desempregado;w++)//caminha na skill de desempregado
                {
                    if(skill_temp_vagas[q] == vetor_skill_desempregado[i])
                    {
                        comparador++;
                    }
                }

            }
        }
        if(comparador == qnt_skill_vagas)//se for igual ele atende aos requisitos
                {
                    vetor_retorno.push_back(vaga_temp);
                }

    }
    return vetor_retorno;
}

/************************************************************
*                    QUESTAO 3                              *
*     mostra vagas por skill ordenados pelo id              *
*************************************************************/
vector<Vagas> vagas_com_Skill(string skill_procurada,vector<Vagas> vetor_de_vagas)//retorna a vaga com a skill ordenada por id
{
    vector<Vagas> retorno;
    vector<string> skill_aux;

    int tam_vetor_de_vagas = vetor_de_vagas.size();
    int qnt_skills_por_vaga;
    for(int i=0;i<tam_vetor_de_vagas;i++)
    {
        qnt_skills_por_vaga = vetor_de_vagas[i].retorna_quantidade_skills();//olho a quantidade de skill da primeira pos do vetor ori
        skill_aux = vetor_de_vagas[i].getSkillVagas();//faco a copia desse vetor de skill pro skill_aux
        for(int j=0;j<qnt_skills_por_vaga;j++)//um for da quantidade de skill 
        {
            if(skill_procurada == skill_aux[j]){//se tiver uma skill igual
                retorno.push_back(vetor_de_vagas[i]);//aloco no vetor de retorno
            }
        }
    }
    return retorno;
}
/************************************************************
*                    QUESTAO 5                              *
* Dado o id de uma vaga, exibir todos os desempregados que  *
* possuem os skills requeridos pela vaga. Ordenar os        *
* desempregados por tempo sem emprego;                      *
*************************************************************/
Vagas RetornaVagaPorId(int id_vaga,vector<Vagas> vetor_de_vagas)
{//ESSA FUNCAO FAZ A BUSCA NO VETOR DE DESEMPREGADOS ATE ACHAR O NOME
    Vagas vagas_aux;
    int tamanho_vetor_vagas = vetor_de_vagas.size();
    for(int i=0;i<tamanho_vetor_vagas;i++)
    {
        if(id_vaga == vetor_de_vagas[i].getIdVagas())
        {
            vagas_aux = vetor_de_vagas[i];
            return vagas_aux;
        }
    }
}
// ORDENA O VETOR PELO TEMPO DESEMPREGADO -----------------------------------
bool ordena_vector_desempregado(Desempregado A, Desempregado B)
{
    if (A.getTempo() < B.getTempo())
       return true;
    return false;
}

vector<Desempregado> questao5(int id_vagas,vector<Desempregado> vetor_de_desempregado,vector<Vagas> vetor_de_vagas)
{
    vector<Desempregado> vetor_retorno;
    Vagas vaga_aux = RetornaVagaPorId(id_vagas,vetor_de_vagas);//retornado a vaga certa
    int qnt_skill_vaga = vaga_aux.retorna_quantidade_skills();
    int qnt_skill_desempregado;
    int qnt_desempregados = vetor_de_desempregado.size();
    int qnt_vagas = vetor_de_vagas.size();

    Desempregado desempregado_temp;
    vector<string> vetor_skill_vagas = vaga_aux.getSkillVagas();//skills de vaga armazenado aqui
    vector<string> vetor_skill_desempregado;

    for(int i=0;i<qnt_desempregados;i++)
    {
        desempregado_temp = vetor_de_desempregado[i];
        vetor_skill_desempregado = desempregado_temp.getSkill();//vetor de skill de desempregado aqui
        qnt_skill_desempregado = desempregado_temp.retorna_qnt_skill();
        int comparador = 0;
        int aux_local = qnt_skill_desempregado;
        if(qnt_skill_desempregado >= qnt_skill_vaga)
        {
            //for feito para tratar repeticao da skill no arquivo
            for(int x = 0;x<aux_local;x++)
        {
            if(vetor_skill_desempregado[0]==vetor_skill_desempregado[1])
            {
                qnt_skill_desempregado--;
            }
            if(vetor_skill_desempregado[1] == vetor_skill_desempregado[2])
            {
                qnt_skill_desempregado--;
            }
            if(vetor_skill_desempregado[0] == vetor_skill_desempregado[2])
            {
                qnt_skill_desempregado--;
            }
            //////////////////////////////////////////////////////////////
        }
            for(int q=0;q<qnt_skill_vaga;q++)
            {
                for(int w=0;w<qnt_skill_desempregado;w++)
                {
                    if(vetor_skill_vagas[q] == vetor_skill_desempregado[w])
                    {
                        comparador++;
                    }
                }
            }
            if(comparador == qnt_skill_vaga)
            {
                vetor_retorno.push_back(desempregado_temp);
            }
        }
    }
    return vetor_retorno;
}

/************************************************************
*                    QUESTAO 6                              *
*     mostra vagas referente a skill ordenado por id        *
*************************************************************/    

vector<Desempregado> questao6(string skill, vector<Desempregado> vetor_de_desempregado){
    vector<Desempregado> desempregado_com_skill;
    vector<string> skill_desempregado;
    for(int i = 0; i < vetor_de_desempregado.size(); i++){
        skill_desempregado = vetor_de_desempregado[i].getSkill();
        for(int j = 0; j<skill_desempregado.size(); j++){
            if(skill_desempregado[j] == skill){
                desempregado_com_skill.push_back(vetor_de_desempregado[i]);
                break;
            }
        }
    }
    return desempregado_com_skill;
}
// ORDENA DESEMPREGADO POR IDADE -------------------------------
bool ordena_vector_idade(Desempregado A, Desempregado B)
{
    if (A.getIdadePessoa() < B.getIdadePessoa())
       return true;
    return false;
}

vector<Vagas> questao6(string skill, vector<Vagas> vetor_de_vagas){
    vector<Vagas> vagas_com_skill;
    vector<string> skill_vaga;
    for(int i = 0; i < vetor_de_vagas.size(); i++){
        skill_vaga = vetor_de_vagas[i].getSkillVagas();
        for(int j = 0; j<skill_vaga.size(); j++){
            if(skill_vaga[j] == skill){
                vagas_com_skill.push_back(vetor_de_vagas[i]);
                break;
            }
        }
    }
    return vagas_com_skill;
}

/************************************************************
*                    QUESTAO 7                              *
*     mostra vagas referente a empresa ordenadas por id     *
*************************************************************/
vector<Vagas> retorna_Empresa_e_suas_vagas(string empresa_procurada,vector<Vagas> vetor_de_vagas)//retorna a vaga com a skill ordenada por id
{
    vector<Vagas> retorno;
    Empresa empresa_aux;
    string nome_empresa_aux;
    
    int tam_vetor_de_vagas = vetor_de_vagas.size();
    for(int i=0;i<tam_vetor_de_vagas;i++)
    {
        empresa_aux = vetor_de_vagas[i].getEmpresa();//faco a copia desse vetor de skill pro skill_aux
        nome_empresa_aux = empresa_aux.getNomeEmpresa();
        if(empresa_procurada == empresa_aux.getNomeEmpresa()){//se tiver um nomedeEMpresa igual
            retorno.push_back(vetor_de_vagas[i]);//aloco no vetor de retorno
        }
    }
    return retorno;
}