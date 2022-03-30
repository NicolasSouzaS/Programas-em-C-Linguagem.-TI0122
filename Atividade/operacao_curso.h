#include <stdio.h>
#include <stdlib.h>
#include "unidade.h"
#include "cursos.h"

void gravar(){

    /*
    O tipo FILE é utilizado para criar arquivos.
    Este arquivo deve ser alocado em memória,
    portanto a sua criação deve ser feita como ponteiro.
    */


    FILE*arquivo;

    //A função fopen é responsavel por criar um arquivo
    //Este arquivo fica disponível em memória até o fechamento da mesma
    arquivo=fopen("curso.exe", "w");

    //Verificar se o arquivo existe. Se ele não existe,
    //então irá exibir a mensagem de arquivo não encontrado
    //e sair da execução do programa

    if (arquivo==NULL)
    {
        printf("Arquivo não encontrado ou não existente\n");
        exit(1); //Encerrar o programa
    }

    curso curs, *pcurs;
    unidade uni, *puni;

    pcurs = &curs;
    puni = &uni;

    printf("Entre com o nome do curso e tecle ENTER\n");
    fgets(pcurs->nome_curso,20,stdin);

    printf("Entre com a carga horaria do curso e tecle ENTER\n");
    fgets(pcurs->carga_horaria,20,stdin);

    printf("Digite com a descrição do curso e tecle ENTER\n");
    fgets(pcurs->descricao_curso,50,stdin);

    printf("Digite a data de inicio do curso e tecle ENTER\n");
    fgets(pcurs->data_inicio,10,stdin);

    printf("Digite a data prevista do termino do curso e tecle ENTER\n");
    fgets(pcurs->data_termino,10,stdin);

    printf("Digite o preço do curso e tecle ENTER\n");
    scanf("%f", &pcurs->preco);

    printf("Digite  o nome da unidade e tecle ENTER\n");
    fgets(puni->nome_da_unidade,10,stdin);

    printf("Entre com a localização da unidade e tecle ENTER\n");
    fgets(puni->localizacao,30,stdin);

    printf("Digite o horario de funcionamento da unidade e tecle ENTER\n");
    fgets(puni->horario_funcionamento,10,stdin);

    printf("Digite o telefone de contato da unidade e tecle ENTER\n");
    fgets(puni->telefone_contato,10,stdin);

    //Gravar o nome no arquivo
    fprintf(arquivo,pcurs->nome_curso);
    fprintf(arquivo,pcurs->carga_horaria);
    fprintf(arquivo,pcurs->descricao_curso);
    fprintf(arquivo,pcurs->carga_horaria);
    fprintf(arquivo,pcurs->data_inicio);
    fprintf(arquivo,pcurs->data_termino);
    fprintf(arquivo, &pcurs->preco);
    fprintf(arquivo,puni->nome_da_unidade);
    fprintf(arquivo,puni->localizacao);
    fprintf(arquivo,puni->horario_funcionamento);
    fprintf(arquivo,puni->telefone_contato);

    //tirar o arquivo da memória. Fechar o arquivo
    fclose(arquivo);





}