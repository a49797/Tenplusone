#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

void editar_jogador();
void listar_jogador();
void procurar_jogador();
int menu_torneio1 ();
int menu_torneio2 ();
int menu_torneio3 ();
int menu_torneio4 ();
int menu_torneio5 ();

/*!
*
*\file
*\brief Programa que faz a gestão de um torneio de futebol
*\authors:  Hugo Martins, Marta Pereira, Roman Bajireanu, Vasco Andrade
*\date 10 Janeiro de 2014
*\bug sem qualquer tipo de erros
*\copyright GNU Publisher
*
*/

/**
*
*struct Golos: Os golos de cada equipa
*
*\param golosBelenenses : int
*\param golosBenfica : int
*\param golosPorto : int
*\param golosSporting : int
*\param golosBraga : int
*\param golosNacional : int
*\param golosVitoriaSetubal : int
*\param golosVitoriaGuimaraes : int
*\param golosEstoril : int
*\param golosRioAve : int
*\param golosAcademica : int
*\param golosArouca : int
*\param golosOlhanense : int
*\param golosMaritimo : int
*\param golosPacosFerreira : int
*\param golosBeiraMar : int
*
*/

struct 

{

int golosBelenenses;
int golosBenfica;
int golosPorto;
int golosSporting;
int golosBraga;
int golosNacional;
int golosVitoriaSetubal;
int golosVitoriaGuimaraes;
int golosEstoril;
int golosRioAve;
int golosAcademica;
int golosArouca;
int golosOlhanense;
int golosMaritimo;
int golosPacosFerreira;
int golosBeiraMar;

}golos;

/**
*
*struct Idades: As idades dos jogadores de cada equipa
*
*\param idadeJogadorBelenenses[50] : int
*\param idadeJogadorBenfica[50] : int
*\param idadeJogadorPorto[50] : int
*\param idadeJogadorSporting[50] : int
*\param idadeJogadorBraga[50] : int
*\param idadeJogadorNacional[50] : int
*\param idadeJogadorVitoriaSetubal[50] : int
*\param idadeJogadorVitoriaGuimaraes[50] : int
*\param idadeJogadorEstoril[50] : int
*\param idadeJogadorRioAve[50] : int
*\param idadeJogadorAcademica[50] : int
*\param idadeJogadorArouca[50] : int
*\param idadeJogadorOlhanense[50] : int
*\param idadeJogadorMaritimo[50] : int
*\param idadeJogadorPacosFerreira[50] : int
*\param idadeJogadorBeiraMar[50] : int
*
*/

struct {

int idadeJogadorBelenenses[50];
int idadeJogadorPorto[50];
int idadeJogadorBenfica[50];
int idadeJogadorNacional[50];
int idadeJogadorArouca[50];
int idadeJogadorMaritimo[50];
int idadeJogadorSporting[50];
int idadeJogadorBraga[50];
int idadeJogadorEstoril[50];
int idadeJogadorOlhanense[50];
int idadeJogadorPacos[50];
int idadeJogadorRioAve[50];
int idadeJogadorVitoriaGuimaraes[50];
int idadeJogadorVitoriaSetubal[50];
int idadeJogadorAcademica[50];
int idadeJogadorBeiraMar[50];

} idades;

/**
*
*struct Jogo: Apresenta os dados das equipas, numero de golos, etc.
*
*\param numero_golos : int
*\param resultado_final : int
*\param penaltys : int
*\param golos_equipa : int
*\param cartoes_amarelos : int
*\param cartoes_vermelhos : int
*\param equipaA[100] : char
*\param equipaB[100] : char
*\param jogadores_equipaA[11][100] : char
*\param jogadores_equipaB[11][100] : char
*\param marcadores_golo[30] : char
*
*/

struct {

int numero_golos;
char equipaA [100];
char equipaB [100];
char jogadores_equipaA [11][100];
char jogadores_equipaB [11][100];
int golos_equipa;
int cartao_amarelo;
int cartao_vermelho;
char marcadores_golo[30];
int resultado_final;
int penaltys;

} jogo;

/**
*
*struct Jogador: Os dados de um jogador
*
*\param numero_camisola : int
*\param dia : int
*\param mes : int
*\param ano : int
*\param sigla[4] : char
*\param nome[100] : char
*\param naturalidade[50] : char
*\param posicao[20] : char
*
*/

struct {

int numero_camisola;
char sigla[4];
char nome[100];
char naturalidade[50];
char posicao[20];
int dia;
int mes;
int ano;

} jogador;   

/**
*
*struct Estatisticas: As estatisticas do jogo
*
*\param equipa_mais_golos_marcados[30] : char
*\param equipa_mais_golos_sofridos[30] : char
*\param equipa_media_idade_mais_alta[30] : char
*\param equipa_media_idade_mais_baixa[30] : char
*\param jogador_mais_velho[20] : char
*\param jogador_mais_novo[20] : char
*\param melhores_marcadores[20] : char
*\param classificacoes[300] : char
*
*/

struct {

char equipa_mais_golos_marcados [30];
char equipa_mais_golos_sofridos [30];
char equipa_media_idade_mais_alta [30];
char equipa_media_idade_mais_baixa [30];
char jogador_mais_velho [20];
char jogador_mais_novo [20];
char melhores_marcadores [20];
char classificacoes [300];


} estatisticas;

/**
*
*struct Equipa: Dados de uma equipa
*
*\param nome_treinador[20] : char
*\param nome_equipa[20] : char
*\param nome_jogadores[11][100] : char
*\param sigla[4] : char
*
*/

struct {

char nome_treinador[20];
char nome_equipa[20];
char nome_jogadores[11][100];
char sigla[4];

} equipa;
/**
*
*struct Golos: golos dos jogadores de cada equipa 
*
*\param golosJogadorBenfica[20] : int
*\param golosJogadorSporting[20] : int
*\param golosJogadorPorto[20] : int
*\param golosJogadorBraga[20] : int
*\param golosJogadorPacos[20] : int
*\param golosJogadorVitoriaSetubal[20] : int
*\param golosJogadorVitoriaGuimaraes[20] : int
*\param golosJogadorEstoril[20] : int
*\param golosJogadorArouca[20] : int
*\param golosJogadorOlhanense[20] : int
*\param golosJogadorMaritimo[20] : int
*\param golosJogadorNacional[20] : int
*\param golosJogadorAcademica[20] : int
*\param golosJogadorBelenenses[20] : int
*\param golosJogadorRioAve[20] : int
*\param golosJogadorBeiraMar[20] : int
*
*/

struct {

int golosJogadorBenfica[20];
int golosJogadorSporting[20];
int golosJogadorPorto[20];
int golosJogadorBraga[20];
int golosJogadorPacos[20];
int golosJogadorVitoriaSetubal[20];
int golosJogadorVitoriaGuimaraes[20];
int golosJogadorEstoril[20];
int golosJogadorArouca[20];
int golosJogadorOlhanense[20];
int golosJogadorMaritimo[20];
int golosJogadorNacional[20];
int golosJogadorAcademica[20];
int golosJogadorBelenenses[20];
int golosJogadorRioAve[20];
int golosJogadorBeiraMar[20];

} golosJogador;

/**
*
*funcao Main: Introduz e acessa ao Menu Principal
*
*/

int main ( void ) {

    char name[50];

        printf("Bem-Vindo/a ao TenPlusOne\n");
        printf("Insira o seu nome\n");
        scanf("%[^\n]s", name);


        printf("A criar o nome\n");
        sleep(1);
        printf(".\n");
        sleep(1);
        printf(".\n");


        printf("\nExcelente nome, %s\n", name);


        printf("A carregar\n");
        sleep(1);
        printf(".\n");
        sleep(1);
        printf(".\n");

	menu_principal();

return 0;

}

/**
*
*funcao menu_principal do tipo int que mostra o menu principal
*\param opcao: int
*
*/

int menu_principal () {
system("cls");
        
    int opcao;
do
    {
        system("clear");
        printf("Escolha uma das seguintes opções\n");
        printf("\n");
        printf("1 - Começar torneio\n");
        printf("2 - Pesquisar equipa\n");
        printf("3 - Pesquisar Jogador\n");
        printf("4 - Pesquisar resultados\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);
                
        switch (opcao)
        {
            case 0:
                 printf("Até à próxima jogador\n");
                 sleep(1);
                 printf("Aguarde enquanto guardamos os dados\n");
                 sleep(2);
                 printf("Aguarde enquanto encerramos\n");
                 sleep(3);
                 return 0;
            case 1:
                 comecar_torneio();
                 break;
            case 2:
                 pesquisar_equipa();
                  break;
            case 3:
                 pesquisar_jogador();
                 break;
            case 4:
                 //pesquisar_resultados();
            default:
                 printf("Operação não implementada\n");
                 break;
        }

} while( opcao != 0);


}

/**
*
*funcao sorteio_jogos que vai sortear as equipas
*\param i : int
*\param n : int
*\param aux : int
*\param equipas : int
*
*/

sorteio_jogos() {

int i, n, aux;
int equipas[16];

//system("cls");
system("clear");

printf("\n");
printf("Lista das equipas: \n");
sleep(1);
printf("0 - Benfica\n");
sleep(1);
printf("1 - Sporting\n");
sleep(1);
printf("2 - Braga\n");
sleep(1);
printf("3 - Estoril\n");
sleep(1);
printf("4 - FC Porto\n");
sleep(1);
printf("5 - Olhanense\n");
sleep(1);
printf("6 - Arouca\n");
sleep(1);
printf("7 - Belenseses\n");
sleep(1);
printf("8 - Beira-Mar\n");
sleep(1);
printf("9 - Rio Ave\n");
sleep(1);
printf("10 - Vitória Guimaraes\n");
sleep(1);
printf("11 - Vitória Setubal\n");
sleep(1);
printf("12 - Paços de Ferreira\n");
sleep(1);
printf("13 - Académica\n");
sleep(1);
printf("14 - Nacional\n");
sleep(1);
printf("15 - Marítimo\n");
printf("\n");


  for(i = 0;i < 16;++i)
    equipas[i] = i;
 
  for(i = 0;i < 16;++i)
  {
    n = rand() % 16;
    aux = equipas[n];
    equipas[n] = equipas[i];
    equipas[i] = aux;
  }
 
  for(i = 0;i < 16;++i) {
    printf("%d\n", equipas[i]);
    printf("\n");
    sleep(1);
}

    printf("Aguarde enquanto os jogos são criados\n");
    sleep(1);
    printf(".\n");
    sleep(1);
    printf(".\n");
    sleep(1);
    printf(".\n");


    sleep(2);
    printf("Belenenses X Porto\n");
    sleep(1);
    printf("Benfica X Nacional\n");
    sleep(1);
    printf("Arouca X Maritimo\n");
    sleep(1);
    printf("Olhanense X Paços de Ferreira\n");
    sleep(1);
    printf("Braga X Academica\n");
    sleep(1);
    printf("Sporting X Beira-Mar\n");
    sleep(1);
    printf("Rio Ave X Vitoria Setubal\n");
    sleep(1);
    printf("Estoril vs Vitoria Guimaraes\n");

torneio();

}

/**
*
*funcao menu_torneio1 que mostra o primeiro menu do torneio
*\param opcao : int
*
*/

int menu_torneio1 () {

    int opcao;
do
    {
        printf("Concluiu um jogo da primeira fase!\n");
	printf("E agora?");
        printf("\n");
        printf("1 - Fazer outro jogo da primeira fase\n");
        printf("2 - Passar para os quartos de final\n");

        scanf("%d", &opcao);
                
        switch (opcao)
        {
            case 1:
                 jogar();
                 break;
            case 2:
                 jogar_quartos();
                  break;
            default:
                 printf("Operação não implementada\n");
                 break;
        }

} while( opcao != 0);

}

/**
*
*funcao menu_torneio2 que mostra o segundo menu do torneio
*\param opcao : int
*
*/

int menu_torneio2 () {

    int opcao;
do
    {
        printf("Concluiu um jogo dos quartos de final!\n");
	printf("E agora?");
        printf("\n");
        printf("1 - Fazer outro jogo dos quartos de final\n");
        printf("2 - Passar para as meias finais\n");


        scanf("%d", &opcao);
                
        switch (opcao)
        {
            case 1:
                 jogar_quartos();
                 break;
            case 2:
                 jogar_meias();
                  break;
            default:
                 printf("Operação não implementada\n");
                 break;
        }

} while( opcao != 0);

}

/**
*
*funcao menu_torneio3 que mostra o terceiro menu do torneio
*\param opcao : int
*
*/

int menu_torneio3 () {

    int opcao;
do
    {
        printf("Concluiu um jogo das meias-finais!\n");
	printf("E agora?");
        printf("\n");
        printf("1 - Fazer outro jogo da meias-finais\n");
	printf("2 - Passar para o terceiro e quarto lugar\n");
        printf("3 - Passar para a final\n");

        scanf("%d", &opcao);
                
        switch (opcao)
        {
            case 1:
                 jogar_meias();
                 break;
            case 2:
                 jogar_3e4();
                  break;
	    case 3:
                 jogar_final();
                  break;
            default:
                 printf("Operação não implementada\n");
                 break;
        }

} while( opcao != 0);

}

/**
*
*funcao menu_torneio4 que mostra o quarto menu do torneio
*\param opcao : int
*
*/

int menu_torneio4 () {

        printf("Concluiu o jogo do terceiro e quarto lugar!\n");
	printf("Vai ser redireccionado para a final");
        printf("\n");
	sleep(3);

        jogar_final();

}

/**
*
*funcao menu_torneio5 que mostra o ultimo menu do torneio
*\param opcao : int
*
*/

int menu_torneio5 () {

    int opcao;
do
    {
        printf("Concluiu o torneio! Parabéns!\n");
	printf("E agora?");
        printf("\n");
        printf("1 - Fazer o jogo novamente\n");
	printf("2 - Jogar o terceiro e quarto lugar\n");
	printf("3 - Ir para o menu_pricipal\n");

        scanf("%d", &opcao);
                
        switch (opcao)
        {
            case 1:
                 jogar_final();
                 break;
            case 2:
                 jogar_3e4();
                  break;
	    case 3:
                 menu_principal();
                  break;
            default:
                 printf("Operação não implementada\n");
                 break;
        }

} while( opcao != 0);

}

/**
*
*funcao comecar_torneio do tipo int
*\param op: int
*
*/

int comecar_torneio () {
//system("cls");
system("clear");

int op;


do
    {
        printf("\n");
        printf("1 - Iniciar torneio\n");
        printf("2 - Consultar torneio\n");
        printf("0 - Retroceder\n");
        scanf("%d", &op);
                
        switch (op)
        {
            case 0:
                 return 0;
                 break;
            case 1:
                 iniciar_torneio();
                 break;
            case 2:
                 consultar_torneio();
                  break;
            default:
                 printf("Operação Não Implementada\n");
            break;
        }


} while( op != 0);
}

/**
*
*funcao iniciar_torneio do tipo int que permite fazer o sorteio dos Jogos
*\param op : int
*
*/

int iniciar_torneio () {
system("clear");
//system("cls");

int op;

do
    {   
        printf("\n");
        printf("Bem-vindo ao torneio\n");
        printf("1 - Faça o Sorteio dos jogos!\n");
        printf("2 - Retroceder\n");
        scanf("%d", &op);
                
        switch (op)
        {
          
            case 1:
                 sorteio_jogos();
                 break;
            case 2:
                 return 0;
                 break;
            default:
                 printf("Operação Não Implementada\n");
            break;
        }


} while( op != 0);
}

/**
*
*funcao consultar_torneio do tipo int que vai mostrar um resumo do que se trata
o projecto
*
*/

int consultar_torneio() {

//system("cls")
system("clear");
printf("O torneio TenPlusOne é um projecto que simula uma competição de futebol portuguesa organizada por cinco elementos da Universidade do Algarve no curso de TIC, na cadeira de PMTIA.\nÉ disputado pelos clubes da Primeira Liga.\nO torneio utiliza o sistema de eliminatórias.\n");

}

/**
*
*funcao torneio do tipo int que mostra a página do torneio
*\param op : int
*
*/

int torneio() {

int op;

do
    {   
        printf("\n");
        printf("1 - Ver a árvore do torneio!\n");
        printf("2 - Comece o torneio\n");
        scanf("%d", &op);
                
        switch (op)
        {
          
            case 1:
                 arvore_torneio();
                 break;
            case 2:
                 jogar();
                 break;
            default:
                 printf("Operação Não Implementada\n");
            break;
        }


} while( op != 0);
}

/**
*
*funcao belenenses_porto que mostra o jogo do Belenenses vs Porto
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

belenenses_porto() {

struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar Belenenses X Porto\n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("belenenses.txt", "w+");
fp=fopen("belenenses.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Belenenses: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorBelenenses[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorBelenenses[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("porto.txt", "w+");
        fp2 = fopen("porto.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Porto: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
        scanf("%d", &idades.idadeJogadorPorto[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorPorto[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");

       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar, Belenenses x Porto!\n");
       sleep(3);

       printf("\nA bola vai começar do Belenenses...\n");
       sleep(3);

       printf("\nMinuto 13: Porto ataca pela esquerda com %s a controlar a bola,\ncentra para %s e é Golo!!\n", jogo.jogadores_equipaB[5],jogo.jogadores_equipaB[9]);
    
       sleep(6);
       golosEquipaB++;
       jogo.numero_golos++;
       golos.golosPorto++;
       golosJogador.golosJogadorPorto[9]++;

       printf("\nQue grande golo de cabeça de %s que inaugurou o marcador\n", jogo.jogadores_equipaB[9]);
       sleep(6);
       printf("\nA bola regressa agora para o meio-campo\n");

       sleep(3);
       printf("\nVai começar novamente o jogo\n");

       sleep(4);
       printf("\nMinuto 16: %s vai pelo centro, finta com facildade os defesas e remata ao poste direito!\n", jogo.jogadores_equipaB[8]);

       sleep(5);
       printf("\nMinuto 34: Porto ataca novamente, %s faz um passe fenomenal para a área do Belenenses, %s domina a bola e marca o segundo golo para o Porto!\n", jogo.jogadores_equipaB[3], jogo.jogadores_equipaB[9]);

       sleep(3);
       golosEquipaB++;
       jogo.numero_golos++;
       golos.golosPorto++;
       golosJogador.golosJogadorPorto[9]++;

       printf("\nEstá %d-%d para o FC Porto!\n", golosEquipaB, golosEquipaA );
       
       sleep(3);
       
       printf("\nA bola volta para o meio-campo!\n");
  
       sleep(2);

       printf("\nMinuto 41: Ui Ui! que falta feia de %s, é como dizem: Passa a bola mas não passa o jogador, que feio meu deus!\n", jogo.jogadores_equipaA[3]);

       sleep(3);

       printf("\nO árbitro assinalou falta dentro da grande área, é grande penalidade e %s leva cartão amarelo!\n", jogo.jogadores_equipaA[3]);

       sleep(3);
       jogo.cartao_amarelo++;

       printf("\n%s vai marcar a grande penalidade, ele ajeita a bola, agora é guarda-redes contra atacante, %s contra %s\n", jogo.jogadores_equipaB[8], jogo.jogadores_equipaA[0], jogo.jogadores_equipaB[8]);

       sleep(5);

       printf("\nMarca o penalty e que grande defesa de %s, apesar de ter sofrido %d golos, nao deixou de brilhar neste confronto\n", jogo.jogadores_equipaA[0], golosEquipaB);

       sleep(5);

       printf("\nO árbitro deu mais dois minutos para jogar\n");

       sleep(5);

       printf("\nE vamos para o intervalo!\n");

       sleep(3);
       printf("\nFoi uma primeira parte emocionante\n");

 sleep(3);
       printf("64'	Remate fraco de %s.. Que frango!! \n", jogo.jogadores_equipaA[6]);
       
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosBelenenses++;
       golosJogador.golosJogadorBelenenses[6]++;

printf("\nA bola passa por baixo das perna de %s ! Ja levam peru para o Natal deste ano e do proximo.\n", jogo.jogadores_equipaB[0]);

sleep(3);
printf("88'	Livre bastante perigoso a porta da area! %s bate o livre com forca! Grande golo!\n", jogo.jogadores_equipaB[8]);
sleep(3);
       golosEquipaB++;
       jogo.numero_golos++;
       golos.golosPorto++;
       golosJogador.golosJogadorPorto[6]++; 

printf("\nBola posicionada entre o poste e a barra do lado direto\n");

printf("\n90' Final do Jogo\n");
   sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o Porto!\n", golosEquipaB, golosEquipaA );
       
       sleep(3);

printf("\n\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("Os melhores marcadores foi %s e %s com %d golos\n", jogo.jogadores_equipaB[9], golosJogador.golosJogadorPorto[9]);

printf("\n");

menu_torneio1();

}

/**
*
*funcao benfica_nacional que mostra o jogo do Benfica vs Nacional
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

benfica_nacional() {

struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar SL Benfica X Nacional\n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("benfica.txt", "w+");
fp=fopen("benfica.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Benfica: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a a sua idade: ");
	scanf("%d", &idades.idadeJogadorBenfica[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorBenfica[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("nacional.txt", "w+");
        fp2 = fopen("nacional.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Nacional: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
        scanf("%d", &idades.idadeJogadorNacional[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorNacional[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);
       
        printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

      
printf("\n0'	Pontapé de saída \n");
   sleep(3);
printf("\n1'	%s envia uma bola alta para a marca de grande penalidade.\n",jogo.jogadores_equipaB[5]);
   sleep(3);
printf("\n%s ganha uns metros ao seu marcador e cabeceia em direção ao ângulo mais distante.\n",jogo.jogadores_equipaB[9]);
   sleep(3);
printf("\n%s põe a bola em segurança com a ponta dos dedos.\n",jogo.jogadores_equipaA[1]);
   sleep(3);
printf("\n3'	%s recebe a bola à entrada da área.\n",jogo.jogadores_equipaA[6]);
   sleep(3);
printf("\nEle pica a bola para %s.\n",jogo.jogadores_equipaA[10]);
   sleep(3);
printf("\n%s tenta fazer um chapéu ao guarda-redes.\n",jogo.jogadores_equipaA[10]);
   sleep(3);
printf("\n%s defende\n.",jogo.jogadores_equipaB[1]);
   sleep(3);
printf("5'	%s consegue encontrar %s com algum espaço.\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaA[9]);
   sleep(3);
printf("\n%s aguenta o defesa e consegue fazer o remate.\n",jogo.jogadores_equipaA[9]);
   sleep(3);
printf("\nGOLO!! - A bola é bem colocada e entra junto ao poste.\n");
 
 sleep(6);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosBenfica++;
       golosJogador.golosJogadorBenfica[9]++;

printf("\n20'	 %s leva a bola para a grande área e faz um passe curto na direção do %s.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[9]);
   sleep(3);
printf("\n%s afasta a bola da baliza.\n",jogo.jogadores_equipaA[9]);
   sleep(3);
printf("\n%s faz a defesa.\n",jogo.jogadores_equipaB[1]);
   sleep(3);
printf("\n26'	%s recebe a bola de longe e faz um passe instantaneamente para %s.\n",jogo.jogadores_equipaB[6],jogo.jogadores_equipaB[10]);
   sleep(3);
printf("\n%s empurra a bola para a baliza de curta distância.\n", jogo.jogadores_equipaB[10]);
   sleep(3);
printf("\n%s defende, a bola embate no poste e é agarrada à segunda tentativa.\n",jogo.jogadores_equipaA[1]);
   sleep(3);
printf("\n28'	%s serpenteia pelo meio-campo antes de passar para o %s.\n",jogo.jogadores_equipaA[5],jogo.jogadores_equipaA[10]);
   sleep(3);
printf("\n%s tem uma oportunidade clara de golo e tenta colocá-la por baixo do guarda-redes.\n",jogo.jogadores_equipaA[10]);
   sleep(3);
printf("\nE a bola falha o alvo.\n");
   sleep(3);
printf("\n31'	%s faz um passe para %s.\n",jogo.jogadores_equipaA[8],jogo.jogadores_equipaA[7]);
   sleep(3);
printf("\n%s afasta um defesa e consegue fezer um remate.\n",jogo.jogadores_equipaA[7]);
   sleep(3);
printf("\nA bola vai pingar ao lado do poste.\n");
   sleep(3);
printf("\n41'	%s luta pela bola no meio campo e joga-a para %s.\n",jogo.jogadores_equipaA[7] ,jogo.jogadores_equipaA[5]);
   sleep(3);
printf("\n%s aguenta as cargas e fica desmarcado.\n",jogo.jogadores_equipaA[5]);
   sleep(3);
printf("\nEle bate a bola com um arco fantástico que parece dirigir-se ao canto superior.\n");
   sleep(3);
printf("\nA bola está fora do alcance de %s mas vai para fora.\n",jogo.jogadores_equipaB[1]);
   sleep(3);
printf("\n45'	Intervalo\n");
   sleep(3);
printf("\n46'	%s entra duro sobre %s.\n",jogo.jogadores_equipaB[11] ,jogo.jogadores_equipaA[5]);
   sleep(3);
printf("\nCartão Amarelo - %s entra para o bloco de notas do árbitro.\n",jogo.jogadores_equipaB[11]);
    
   sleep(3);
   jogo.cartao_amarelo++;

printf("\n48'	%s vê um buraco na defesa e faz um passe pelo meio.\n",jogo.jogadores_equipaA[6]);
   sleep(3);
printf("\nUm remate de perto do %s.\n",jogo.jogadores_equipaA[10]);
   sleep(3);
printf("\n%s salta alto e afasta a bola.\n",jogo.jogadores_equipaB[1]);
   sleep(3);
printf("\n51'	%s faz um cruzamento traiçoeiro para a área.\n",jogo.jogadores_equipaB[8]);
   sleep(3);
printf("\n%s leva a bola para baixo e remata para a baliza.\n",jogo.jogadores_equipaB[5]);
   sleep(3);
printf("\n%s atira-se bem e consegue afastar a bola.\n",jogo.jogadores_equipaB[1]);
   sleep(3);
printf("\n52'	%s efetua um belo passe cruzado para %s.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaB[7]);
   sleep(3);
printf("\n%s controla a bola e passa por entre dois defesas.\n",jogo.jogadores_equipaB[7]);
   sleep(3);
printf("\nEle remata em direção ao canto inferior.\n");
   sleep(3);
printf("\n%s atira-se rápido ao lance e atira a bola para longe.\n",jogo.jogadores_equipaB[1]);
   sleep(3);
printf("\n57'	%s derruba %s com um desarme duro\n",jogo.jogadores_equipaB[2],jogo.jogadores_equipaA[11]);
   sleep(3);
printf("\nPontapé-livre para SL Benfica diretamente em frente à baliza.\n");
   sleep(3);
printf("\n%s tenta levantá-la por cima da barreira.\n",jogo.jogadores_equipaA[8]);
   sleep(3);
printf("\nGOLO!! - E entra mesmo ao pé do poste.\n");
   sleep(3);
    golosEquipaA++;
    jogo.numero_golos++;
    golos.golosBenfica++;
    golosJogador.golosJogadorBenfica[8]++;

printf("\nEstá %d-%d para o SL Benfica!\n", golosEquipaA, golosEquipaB );
       sleep(3);
       
printf("\n62'	%s faz um entrada fora de tempo ao %s.\n",jogo.jogadores_equipaA[11],jogo.jogadores_equipaB[10]);
   sleep(3);
printf("\nÉ pontapé-livre para o Nacional.\n");
   sleep(3);
printf("\nCartão Amarelo - O árbitro demora o seu tempo antes de mostrar o cartão ao %s.\n",jogo.jogadores_equipaA[11]);
   sleep(3);
      jogo.cartao_amarelo++;
   
printf("\n%s tenta cobrar o pontapé-livre por cima do guarda-redes.\n",jogo.jogadores_equipaB[8]);
   sleep(3);
printf("\nPassa sobre a barra.\n");
   sleep(3);
printf("\n69'	%s leva a bola para o ataque antes de a chutar para a grande área.\n",jogo.jogadores_equipaA[8]);
   sleep(3);
printf("\n%s ganha uns metros ao seu marcador e cabeceia em direção ao ângulo mais distante.\n",jogo.jogadores_equipaA[10]);
   sleep(3);
printf("\n%s mergulha rapidamente para dar uma palmada na bola para longe.\n",jogo.jogadores_equipaB[1]);
   sleep(3);
printf("\n71'	Um livre é marcado para a área e o %s cabeceia-a para o %s.\n",jogo.jogadores_equipaB[11],jogo.jogadores_equipaB[4]);
   sleep(3);
printf("\n%s cabeceia a bola para golo.\n",jogo.jogadores_equipaB[4]);
   sleep(3);
printf("\nGOLO!! - %s mergulha mas não consegue chegar à bola.\n",jogo.jogadores_equipaA[1]);
   sleep(3);
      golosEquipaB++;
      jogo.numero_golos++;
      golos.golosNacional++;
      golosJogador.golosJogadorNacional[4]++;
    
printf("\n76'	%s envia uma bola alta para a marca de grande penalidade.\n",jogo.jogadores_equipaA[5]);
   sleep(3);
printf("\n%s cabeceia para a baliza adversária.\n",jogo.jogadores_equipaA[10]);
   sleep(3);
printf("\nA bola passa alta e muito ao lado da baliza.\n");
   sleep(3);
printf("\n87'	%s tentou tirar a bola ao %s mas acaba por acertar no %s em vez de na bola.\n",jogo.jogadores_equipaB[3],jogo.jogadores_equipaA[10],jogo.jogadores_equipaA[10]);
   sleep(3);
printf("\nPontapé livre para SL Benfica junto da linha.\n");
   sleep(3);
printf("\n%s cruza a bola para uma zona perigosa.\n",jogo.jogadores_equipaA[8]);
   sleep(3);
printf("\n%s ganha o cabeceamento.\n",jogo.jogadores_equipaA[9]);
   sleep(3);
printf("\nGOLO!! - A bola está fora do alcance do %s e bate no fundo da rede.\n",jogo.jogadores_equipaB[1]);
   sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosBenfica++;
       golosJogador.golosJogadorBenfica[9]++;
   
printf("\n88'	%s avança até à linha de fundo e faz um cruzamento.\n",jogo.jogadores_equipaA[7]);
   sleep(3);
printf("\n%s cabeceia para a baliza adversária.\n",jogo.jogadores_equipaA[10]);
   sleep(3);
printf("%s faz uma grande defesa.\n",jogo.jogadores_equipaB[1]);
   sleep(3);
printf("\n90' Final do Jogo\n");
   sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o SL Benfica!\n", golosEquipaA, golosEquipaB );
printf("\n");
       
       sleep(3);
       
printf("Foram mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("O melhor marcador foi %s com %d golos\n", jogo.jogadores_equipaA[9], golosJogador.golosJogadorBenfica[9]);

printf("\n");

menu_torneio1();

}

/**
*
*funcao arouca_maritimo que mostra o jogo do Arouca vs Maritimo
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

arouca_maritimo() {

struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;


//system("cls");
system("clear");
printf("Escolheu para jogar Arouca X Maritimo\n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("arouca.txt", "w+");
fp=fopen("arouca.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Arouca: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorArouca[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorArouca[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("maritimo.txt", "w+");
        fp2 = fopen("maritimo.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Maritimo: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorMaritimo[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorMaritimo[n]);

       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar, Arouca x Maritimo!\n");
       sleep(3);
       
           
    printf("\n0'	Pontapé de saída\n");
    sleep(3);
    printf("\n11'	%s serpenteia pelo meio-campo antes de passar para o %s.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaB[10]);
    sleep(3);
    printf("\n%s tenta arranjar uma oportunidade de remate e consegue rematar.\n",jogo.jogadores_equipaB[10]);
    sleep(3);  
    printf("\nHouve falta de pontaria neste lance e é pontapé de baliza.\n");
    sleep(3);
    printf("\n18'	%s vê %s numa posição avançada e passa-lhe a bola.\n",jogo.jogadores_equipaB[9],jogo.jogadores_equipaB[7]);
    sleep(3);
    printf("\n%s finta o defesa por fora e faz o remate.\n",jogo.jogadores_equipaB[7]);
    sleep(3);
    printf("\nO guarda-redes está atento e consegue afastar a bola.\n");
    sleep(3);
    printf("\n20'	%s põe a bola nos pés do %s.\n",jogo.jogadores_equipaB[6],jogo.jogadores_equipaB[9]);
    sleep(3);
    printf("\nBons reflexos de %s, que empurra de perto a bola para a baliza.\n",jogo.jogadores_equipaB[9]);
    sleep(3);
    printf("\nA bola não leva muita força e é fácil para o %s.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
    printf("\n23'	%s vê %s numa posição avançada e passa-lhe a bola.\n",jogo.jogadores_equipaB[10],jogo.jogadores_equipaB[11]);
    sleep(3);
    printf("\n%s contorna a defesa e entra na grande área.\n",jogo.jogadores_equipaB[11]);
    sleep(3);
    printf("\nEle tenta colocar um remate por baixo do guarda-redes.\n");
    sleep(3);
    printf("\nGOLO!! - Passa por baixo da mão esticada do %s.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
       golosEquipaB++;
       jogo.numero_golos++;
       golos.golosMaritimo++;
       golosJogador.golosJogadorMaritimo[11]++;

    printf("\n24'	Uma entrada desesperada do %s para evitar que %s consiga rematar. Parece que está dentro da área.\n",jogo.jogadores_equipaA[5],jogo.jogadores_equipaB[8]);
    sleep(3);
    printf("\nO árbitro concede o penálti ao CS Maritimo.\n");
    sleep(3);
    printf("\n%s coloca-a em direção ao canto superior.\n",jogo.jogadores_equipaB[11]);
    sleep(3);
    printf("\nGOLO!! - Bate na barra e entra!");
    sleep(3);
          golosEquipaB++;
          jogo.numero_golos++;
	  golos.golosMaritimo++;
          golosJogador.golosJogadorMaritimo[11]++;
    
    printf("\n36'	%s tentou tirar a bola ao %s mas acaba por acertar no %s em vez de na bola.\n",jogo.jogadores_equipaA[3],jogo.jogadores_equipaB[10],jogo.jogadores_equipaB[10]);
    sleep(3);
    printf("\nPontapé livre para CS Maritimo. Mas parece muito longe para o remate.\n");
    sleep(3);
    printf("\n%s cruza a bola para uma zona perigosa.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
    printf("\nA bola está no caminho do %s que cabeceia em força para a baliza.\n",jogo.jogadores_equipaB[9]);
    sleep(3);
    printf("\nEla queima os dedos do %s quando ele faz a defesa.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
    printf("\n45'	Intervalo\n");
    sleep(3);
    
    
    printf("\n47'	%s faz um passe em profundidade para %s.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaB[10]);
    sleep(3);
    printf("\nGrande trabalho de pés do %s para obter espaço para o remate.\n",jogo.jogadores_equipaB[10]);
    sleep(3);
    printf("\n%s atira-se bem e defende-a com ambas as mãos.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
    printf("\n57'	%s é forçado a afastar-se mas consegue cruzar a bola para a área.\n",jogo.jogadores_equipaB[9]);
    sleep(3);
    printf("\n%s remata a bola pela primeira vez.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
    printf("\nGOLO!! - Ela passa pelo guarda-redes e entra.\n");
    sleep(3);
       golosEquipaB++;
       jogo.numero_golos++;
       golos.golosMaritimo++;
       golosJogador.golosJogadorMaritimo[8]++;
    
    printf("\n66' %s ganha a bola mas entretanto acaba por derrubar %s.\n",jogo.jogadores_equipaA[2],jogo.jogadores_equipaB[6]);
    sleep(3);
    printf("\nPontapé livre para CS Maritimo do lado direito da grande área.\n");
    sleep(3);
    printf("\n%s marca o pontapé livre em força.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
    printf("\nGOLO!! - %s ainda lhe toca mas não consegue evitar que ela entre.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
       golosEquipaB++;
       jogo.numero_golos++;
       golos.golosMaritimo++;
       golosJogador.golosJogadorMaritimo[8]++;

    printf("\n72'	%s executa um desarme duro e faz um passe curvo longo.\n",jogo.jogadores_equipaB[2]);
    sleep(3);
    printf("\n%s controla a bola com o peito e consegue espaço para o remate\n",jogo.jogadores_equipaB[9]);
    sleep(3);
    printf("\nEle dispara para a baliza.\n");
    sleep(3);
    printf("\nA bola atravessa o relvado e passa mesmo ao lado da baliza.\n");
    sleep(3);
    printf("\n76'	%s faz um cruzamento preciso para %s.\n",jogo.jogadores_equipaA[3],jogo.jogadores_equipaA[7]);
    sleep(3);
    printf("\n%s tenta a sua sorte de longe.\n",jogo.jogadores_equipaA[7]);
    sleep(3);
    printf("\n%s conseguiu mantê-la afastada de alguma maneira.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
    printf("\n81'	%s recebe a bola no espaço aberto.\n",jogo.jogadores_equipaA[11]);
    sleep(3);
    printf("\nEle consegue espaço para o cruzamento e envia a bola para a área.\n");
    sleep(3);
    printf("\n%s cabeceia em direção à baliza.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
    printf("\n%s mostra mãos fortes para afastar a bola.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
    printf("\n85'	%s recebe a bola de longe e faz um cruzamento para a área.\n",jogo.jogadores_equipaB[5]);
    sleep(3);
    printf("\n%s tenta um cabeceamento em arco.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
    printf("\n%s faz uma defesa com confiança.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
    printf("\n89'	%s aguenta vários desarmes e passa a bola para %s.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[3]);
    sleep(3);
    printf("\n%s corre pela linha e depois corta para o limite da área\n",jogo.jogadores_equipaA[3]);
    sleep(3);
    printf("\nEle envia um remate rasteiro para a baliza.");
    sleep(3);
    printf("\n%s põe a bola em segurança com a ponta dos dedos.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
    printf("\n90'	Final do Jogo Final do Jogo\n");
       sleep(3);
    printf("\nAssim acaba esta partida %d-%d para o Maritimo!\n", golosEquipaA, golosEquipaB );
       sleep(3);

printf("Foram mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("Os melhores marcadores foram %s e %s com %d golos\n", jogo.jogadores_equipaA[11], jogo.jogadores_equipaA[8], golosJogador.golosJogadorMaritimo[8]);

printf("\n");

menu_torneio1();

}

/**
*
*funcao olhanense_pacos que mostra o jogo do Olhanense vs Paços de Ferreira
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

olhanense_pacos() {

struct jogo;
struct golos;
struct idades;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar Olhanense X Paços\n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("olhanense.txt", "w+");
fp=fopen("olhanense.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Olhanense: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorOlhanense[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorOlhanense[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("paços.txt", "w+");
        fp2 = fopen("paços.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Paços: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorPacos[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }
 
        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n],idades.idadeJogadorPacos[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3); 

       printf("\nO jogo vai começar, Olhanense x Paços!\n");
       sleep(3);
       
       
    
    printf("\n0'	Pontapé de saída\n");
       sleep(3);
    printf("\n2'	%s serpenteia pelo meio-campo antes de passar para o %s.\n",jogo.jogadores_equipaA[8],jogo.jogadores_equipaA[9]);
       sleep(3);
    printf("\n%s consegue fazer um remate.\n",jogo.jogadores_equipaA[9]);
       sleep(3);
    printf("\n%s faz uma grande defesa.\n",jogo.jogadores_equipaB[1]);
       sleep(3);
    printf("\n5'	%s cabeceia a bola para %s.\n",jogo.jogadores_equipaB[9],jogo.jogadores_equipaB[8]);
       sleep(3);
    printf("\nRemate de longe de %s.\n",jogo.jogadores_equipaB[8]);
       sleep(3);
    printf("\nÉ uma boa tentativa mas o %s iguala com uma boa defesa.\n",jogo.jogadores_equipaA[1]);
       sleep(3);
    printf("\n9'	%s troca passes com %s.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[8]);
       sleep(3);
    printf("\n%s faz uma grande corrida pelo meio-campo.\n",jogo.jogadores_equipaA[8]);
       sleep(3);
    printf("\nEle entra na área e dispara-a para a baliza.\n");
       sleep(3);
    printf("\nA bola escapa-se da desesperada saída do guarda-redes passando ao lado do poste.\n");
       sleep(3);
    printf("\n11'	%s derruba %s com um desarme duro\n",jogo.jogadores_equipaA[5],jogo.jogadores_equipaB[7]);
       sleep(3);
    printf("\nPontapé livre do Paços junto da bandeira de canto.\n");
       sleep(3);
    printf("\n%s tira um cruzamento para a grande área.\n",jogo.jogadores_equipaB[8]);
       sleep(3);
    printf("\n%s encontra espaço e faz um cabeceamento poderoso.\n",jogo.jogadores_equipaB[11]);
       sleep(3);
    printf("\nA bola passou bastante por cima da barra.\n");
       sleep(3);
    printf("\n13'	%s entra duro sobre %s.\n",jogo.jogadores_equipaB[11],jogo.jogadores_equipaA[6]);
       sleep(3);
    printf("\nCartão Amarelo - O árbitro mostra o cartão amarelo ao %s.\n",jogo.jogadores_equipaB[11]);
       sleep(3);
      jogo.cartao_amarelo++;
  
    printf("\n15'	%s derruba %s.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaB[10]);
       sleep(3);
    printf("\nCartão Amarelo - %s entra para o bloco de notas do árbitro.\n",jogo.jogadores_equipaA[6]);
       sleep(3);
     jogo.cartao_amarelo++;
  
    printf("\n21'	%s tem uma entrada tardia sobre %s.\n",jogo.jogadores_equipaB[11],jogo.jogadores_equipaA[9]);
       sleep(3);
    printf("\nCartão Vermelho - O árbitro exibe o segundo amarelo ao %s e expulsa-o.\n",jogo.jogadores_equipaB[11]);
       sleep(3);
     jogo.cartao_vermelho++;
  
    printf("\n22'	%s vê %s com muito espaço em redor e faz o passe.\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaA[7]);
       sleep(3);
    printf("\n%s passa por um defesa e remata para a baliza.\n",jogo.jogadores_equipaA[7]);
       sleep(3);
    printf("\nGOLO!! - Escapa de alguma maneira ao guarda-redes e entra.\n");
       sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosOlhanense++;
       golosJogador.golosJogadorOlhanense[7]++;
  
    printf("\n24'	%s faz um cruzamento preciso para %s.\n",jogo.jogadores_equipaB[2],jogo.jogadores_equipaB[7]);
     sleep(3);  
    printf("\n%s remata de longe.\n",jogo.jogadores_equipaB[7]);
     sleep(3);
    printf("\nA bola vai com imensa força contra o guarda-redes e este mantém-na longe da baliza com uma grande defesa.\n");
     sleep(3);
    printf("\n26'	%s recebe a bola do %s e tabela para a sua corrida.\n",jogo.jogadores_equipaA[8],jogo.jogadores_equipaA[10]);
     sleep(3);
    printf("\n%s remata de primeira.\n",jogo.jogadores_equipaA[10]);
     sleep(3);
    printf("\nA bola voa ultrapassando o guarda-redes mas passa longe da baliza.\n");
     sleep(3);  
    printf("\n30'	%s vê a corrida de %s e envia a bola pelo meio dos defesas.\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaA[11]);
  
    printf("\n%s finta para dentro e desfere um remate com efeito para o poste mais distante.\n",jogo.jogadores_equipaA[11]);
     sleep(3);    
    printf("\nGOLO!! - O guarda-redes não lhe consegue chegar à medida que ela entra para dentro.\n");
     sleep(3);
      golosEquipaA++;
      jogo.numero_golos++;
      golos.golosOlhanense++;
      golosJogador.golosJogadorOlhanense[11]++;

    printf("\n41'	%s puxa a camisola de %s para o impedir de fugir com a bola.\n",jogo.jogadores_equipaA[5], jogo.jogadores_equipaB[3]);
    sleep(3);
    printf("\nPontapé livre para Paços do lado direito da grande área.\n");
    sleep(3);
    printf("\nCartão Amarelo - %s entra para o bloco de notas do árbitro.\n",jogo.jogadores_equipaA[5]);
sleep(3);
    jogo.cartao_amarelo++;
   
    printf("\n%s conduz a bola para a pequena área.\n",jogo.jogadores_equipaB[8]);
sleep(3);
    printf("\n%s chega à bola primeiro e tenta cabecear sobre o guarda-redes.\n",jogo.jogadores_equipaB[6]);
sleep(3);
    printf("\nÉ defendida pelo %s.\n",jogo.jogadores_equipaA[1]);
sleep(3);
    printf("\n45'	Intervalo");
sleep(3);

    printf("\n52'	%s recebe a bola na lateral e faz um passe longo através do meio campo.\n",jogo.jogadores_equipaA[3]);
sleep(3);
    printf("\n%s cabeceia para trás da defesa.\n",jogo.jogadores_equipaA[10]);
sleep(3);
    printf("\nEle corre e tenta colocá-la no canto inferior.\n");
sleep(3);
    printf("\nGOLO!! - Ela passa pelo guarda-redes e entra.\n");
sleep(3);
    golosEquipaA++;
    jogo.numero_golos++;
    golos.golosOlhanense++;
    golosJogador.golosJogadorOlhanense[10]++;

    printf("\n61'	%s vê a desmarcação de %s para a área e envia a bola para a sua frente.\n",jogo.jogadores_equipaA[8],jogo.jogadores_equipaA[6]);
sleep(3);
    printf("\n%s cabeceia para a baliza.\n",jogo.jogadores_equipaA[6]);
sleep(3);
    printf("\n%s conseguiu mantê-la afastada de alguma maneira.\n",jogo.jogadores_equipaB[1]);
sleep(3);
    printf("\n68'	%s derruba %s.\n",jogo.jogadores_equipaA[2],jogo.jogadores_equipaB[10]);
sleep(3);
    printf("\nPontapé livre do Paços junto da bandeira de canto.\n");
sleep(3);
    printf("\nCartão Amarelo Cartão Amarelo - O árbitro demora o seu tempo antes de mostrar o cartão ao %s.\n",jogo.jogadores_equipaA[5]);
sleep(3);
    jogo.cartao_amarelo++;

    printf("\n%s cruza a bola para a marca de penálti.\n",jogo.jogadores_equipaB[8]);
sleep(3);
    printf("\n%s faz um cabeceamento firme para a baliza.\n",jogo.jogadores_equipaB[10]);
sleep(3);
    printf("\nA bola passa por cima.\n");
sleep(3);
    printf("\n76'	%s é forçado a afastar-se mas consegue cruzar a bola para a área.\n",jogo.jogadores_equipaA[10]);
sleep(3);
    printf("\n%s chuta de primeira ao canto inferior.\n",jogo.jogadores_equipaA[8]);
sleep(3);
    printf("\nGOLO!! - %s mergulha bem, mas não consegue chegar-lhe.\n",jogo.jogadores_equipaB[1]);
sleep(3);
    golosEquipaA++;
    jogo.numero_golos++;
    golos.golosOlhanense++;
    golosJogador.golosJogadorOlhanense[8]++;
   
    printf("\n77'	%s faz um passe para %s.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaB[7]);
sleep(3);
    printf("\n%s remata a bola pela primeira vez.\n",jogo.jogadores_equipaB[7]);
sleep(3);
    printf("\nA bola sai ao lado do poste.\n");
sleep(3);
    printf("\n83'	%s faz um entrada fora de tempo ao %s.\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaB[7]);
sleep(3);
    printf("\nPontapé-livre para Paços do lado esquerdo da área.\n");
sleep(3);
    printf("\nCartão Amarelo - O árbitro não tem outra hipótese a não ser advertir o jogador.\n");
sleep(3);
    jogo.cartao_amarelo++;

    printf("\n%s tira um cruzamento para o poste mais próximo.\n",jogo.jogadores_equipaB[8]);
sleep(3);
    printf("\nA bola passa por cima de toda a gente e acaba nos pés do %s.\n",jogo.jogadores_equipaB[10]);
sleep(3);
    printf("\nEle remata rasteiro à baliza.\n");
sleep(3);
    printf("\n%s defendeu a bola com uma defesa de enormes reflexos.\n",jogo.jogadores_equipaA[1]);
sleep(3);
    printf("\n90'	Final do Jogo Final do Jogo\n");
       sleep(3);
         printf("\nAssim acaba esta partida %d-%d para o Olhanense!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("O melhor marcador foram %s, %s, %s e %s com %d golo\n", jogo.jogadores_equipaA[7], jogo.jogadores_equipaA[11], jogo.jogadores_equipaA[10], jogo.jogadores_equipaA[8], golosJogador.golosJogadorOlhanense[7]);

printf("\n");

menu_torneio1();

}

/**
*
*funcao braga_academica que mostra o jogo do Braga vs Académica
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

braga_academica() {

struct jogo;
struct golos;
struct idades;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;
//system("cls");
system("clear");
printf("Escolheu para jogar Braga X Academica\n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("braga.txt", "w+");
fp=fopen("braga.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Braga: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorBraga[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorBraga[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("academica.txt", "w+");
        fp2 = fopen("academica.txt", "a+");


        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa da Academica: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorAcademica[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorAcademica[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar, Braga x Academica!\n");
       sleep(3);
       
       
    printf("\n0' Pontapé de saída\n");
    sleep(3);
    printf("\n4' %s desvia-se de uma entrada e faz um passe curto para %s.\n",jogo.jogadores_equipaB[6],jogo.jogadores_equipaB[10]);
    sleep(3);
    printf("\n%s remata pela primeira vez.\n",jogo.jogadores_equipaB[10]);
    sleep(3);
    printf("\nVai direta ao guarda-redes e ele faz a defesa.\n");
    sleep(3);
    printf("\n7'	%s faz um passe demasiado largo.\n",jogo.jogadores_equipaA[9]);
    sleep(3);
    printf("\n%s remata a bola pela primeira vez.\n",jogo.jogadores_equipaA[11]);
    sleep(3);
    printf("\nO guarda-redes está atento e consegue afastar a bola.\n");
    sleep(3);
    printf("\n10'	%s faz uma grande interceção e envia a bola para a ala.\n",jogo.jogadores_equipaA[5]);
    sleep(3);
    printf("\n%s toca a bola para a frente e corre.\n",jogo.jogadores_equipaA[7]);
    sleep(3);
    printf("\nEle tenta um remate que contorne o guarda-redes.\n");
    sleep(3);
    printf("\n%s atira-se bem e defende-a com ambas as mãos.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
    printf("\n12'	%s tem uma entrada tardia sobre %s.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaA[11]);
    sleep(3);
    printf("\nCartão Amarelo Cartão Amarelo - O árbitro mostra o cartão amarelo ao %s.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
       jogo.cartao_amarelo++;

    printf("\n19'	%s faz o cruzamento para a grande área.\n",jogo.jogadores_equipaB[11]);
    sleep(3);
    printf("\n%s tenta cabecear para o poste mais distante.\n",jogo.jogadores_equipaB[9]);
    sleep(3);
    printf("\nA bola não leva muita força e é fácil para o %s.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
    printf("\n25'	Bom trabalho de pés de %s no meio-campo.\n",jogo.jogadores_equipaA[6]);
    sleep(3);
    printf("\nEle vê a desmarcação de %s  e faz o passe.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
    printf("\n%s tenta passar uma por baixo do guarda-redes.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
    printf("\n%s defende com o pé.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
    printf("\n33'	%s faz um passe para o limite da área.\n",jogo.jogadores_equipaB[10]);
    sleep(3);
    printf("\n%s ultrapassa um defesa e tenta a sua sorte.\n",jogo.jogadores_equipaB[11]);
    sleep(3);
    printf("\nO guarda-redes baixa-se rapidamente para defender o remate.\n");
    sleep(3);
    printf("\n38'	%s é enganado por %s\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaB[4]);
    sleep(3);
    printf("\nÉ pontapé-livre para o Sporting de Braga.\n");
    sleep(3);
    printf("\n%s descobre um buraco na barreira e chuta em força.\n",jogo.jogadores_equipaA[8]);
    sleep(3);
    printf("\nGOLO!! - A bola entra junto à base do poste.\n");
      sleep(3);
      golosEquipaA++;
      jogo.numero_golos++;
      golos.golosBraga++;
      golosJogador.golosJogadorBraga[8]++;
  
    printf("\n45'	Intervalo\n");
    sleep(3);
    printf("\n46'	%s dribla a bola através da área.\n",jogo.jogadores_equipaA[7]);
    sleep(3);
    printf("\n%s foge ao desarme e tenta passar a bola pelo guarda-redes.\n",jogo.jogadores_equipaA[8]);
    sleep(3);
    printf("\n%s põe a bola em segurança com a ponta dos dedos.\n", jogo.jogadores_equipaB[1]);
    sleep(3);
    printf("\n55'	%s finta por fora o seu marcador e faz um passe.\n",jogo.jogadores_equipaB[5]);
    sleep(3);
    printf("\n%s coloca o pé na bola e ela voa em direção ao ângulo superior.\n",jogo.jogadores_equipaB[7]);
    sleep(3);
    printf("\nMergulho cedo de %s e ele consegue defendê-la.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
    printf("\n65'	%s faz um entrada fora de tempo ao %s.\n",jogo.jogadores_equipaB[5],jogo.jogadores_equipaA[8]);
    sleep(3);
    printf("\nPontapé livre para o Sporting de Braga longe da área de grande penalidade.\n");
    sleep(3);
    printf("\nCartão Amarelo Cartão Amarelo - O árbitro demora o seu tempo antes de mostrar o cartão ao %s.\n",jogo.jogadores_equipaB[5]);
    sleep(3);
       jogo.cartao_amarelo++;
    
    printf("\n%s tira um cruzamento para o poste mais próximo.\n",jogo.jogadores_equipaA[8]);
    sleep(3);
    printf("\nA bola é milimetricamente colocada para a cabeça do %s.\n",jogo.jogadores_equipaA[6]);
    sleep(3);
    printf("\nEle cabeceou mesmo ao ângulo superior da baliza.\n");
    sleep(3);
    printf("\nA bola passa a razar o poste.\n");
    sleep(3);
    printf("\n77'	%s ganha a bola. Ele leva-a para a frente e faz um passe a rasgar a defesa.\n",jogo.jogadores_equipaA[4]);
    sleep(3);
    printf("\nUm remate à baliza por %s.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
    printf("\nGOLO!! - Bate no poste e resalta.\n");
    sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosBraga++;
       golosJogador.golosJogadorBraga[10]++;
     
    printf("\n90'	Final do Jogo Final do Jogo\n");
  printf("\nAssim acaba esta partida %d-%d para o SC Braga!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("Os melhores marcadores foram %s, %s com %d golo\n", jogo.jogadores_equipaA[10], jogo.jogadores_equipaA[8], golosJogador.golosJogadorBraga[8]);

printf("\n");

menu_torneio1();

}

/**
*
*funcao sporting_beiramar que mostra o jogo do Sporting vs Beira-Mar
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

sporting_beiramar () {
                    
struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar Sporting X Beira-Mar \n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("sporting.txt", "w+");
fp=fopen("sporting.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Sporting: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
        scanf("%d", &idades.idadeJogadorSporting[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorSporting[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);
	
	fp2 = fopen("beira_mar.txt", "w+");
        fp2 = fopen("beira_mar.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Beira-Mar: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorBeiraMar[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorBeiraMar[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar, Sporting X Beira-Mar !\n");
       sleep(3);
       
       
  printf("\n0' Ponta-pé de saída");
    sleep(3);
  printf("\n13' %s derruba %s com um desarme duro\n",jogo.jogadores_equipaA[4],jogo.jogadores_equipaB[9]);
  sleep(3);
  printf("\nPontapé-livre para o Beira-Mar a cerca de 25 metros.\n");
  sleep(3);
  printf("\n%s faz o cruzamento para a frente da baliza.\n",jogo.jogadores_equipaB[8]);
  sleep(3);
  printf("\n%s redireciona o cabeceamento em direção à baliza.\n",jogo.jogadores_equipaB[11]);
  sleep(3);
  printf("\n%s lê bem e faz uma defesa fácil.\n",jogo.jogadores_equipaA[1]);
  sleep(3);
  printf("\n21' %s leva a bola para a grande área e faz um passe curto na direção do %s.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[10]);
  sleep(3);
  printf("\n%s empurra a bola para a baliza.\n",jogo.jogadores_equipaA[10]);
  sleep(3);
  printf("\n%s faz a defesa.\n",jogo.jogadores_equipaB[1]);
  sleep(3);
  printf("\n23' %s ganha a bola mas entretanto acaba por derrubar %s.\n",jogo.jogadores_equipaB[5],jogo.jogadores_equipaA[7]);
  sleep(3);
  printf("\nPontapé-livre para o Sporting CP.\n");
  sleep(3);
  printf("\n%s contornar a barreira com uma bola curva rasteira.\n",jogo.jogadores_equipaA[8]);
  sleep(3);
  printf("\nGOLO!! - O livre voa por cima da barreira!\n");
  sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosSporting++;
       golosJogador.golosJogadorSporting[8]++;

  printf("\n26'	%s faz um cruzamento do canto da grande área.\n",jogo.jogadores_equipaB[6]);
  sleep(3);
  printf("\n%s coloca a bola no relvado e dispara um remate para o canto inferior.\n",jogo.jogadores_equipaB[7]);
  sleep(3);
  printf("\n%s atira-se bem e consegue afastar a bola.\n",jogo.jogadores_equipaA[1]);
  sleep(3);
  printf("\n27' %s puxa a camisola de %s para o impedir de fugir com a bola.\n",jogo.jogadores_equipaB[2], jogo.jogadores_equipaA[9]);
  sleep(3);
  printf("\nCartão Amarelo Cartão Amarelo - %s entra para o bloco de notas do árbitro.\n",jogo.jogadores_equipaB[2]);
  sleep(3);
  jogo.cartao_amarelo++;
 
  printf("\n30'	%s corre para a defesa antes de a entregar a %s.\n",jogo.jogadores_equipaB[9],jogo.jogadores_equipaB[8]);
 sleep(3);
  printf("\n%s remata com efeito à baliza.\n",jogo.jogadores_equipaB[8]);
 sleep(3);
  printf("\nÉ uma defesa fácil para %s.\n",jogo.jogadores_equipaA[1]);
 sleep(3);
  printf("\n43'	O %s passa em trivela uma bola baixa para o segundo poste desde o canto da grande área.\n",jogo.jogadores_equipaA[11]);
 sleep(3);
  printf("\n%s tenta aproximar-se para marcar golo.\n",jogo.jogadores_equipaA[10]);
 sleep(3);
  printf("\nO guarda-redes atirou a mão em direção à bola.\n");
 sleep(3);
  printf("\nBons reflexos do guarda-redes ao fazer a defesa.\n");
 sleep(3);
  printf("\n45'	Intervalo\n");
 sleep(3);
 
 
  printf("\n62' %s faz um cruzamento preciso para %s.\n",jogo.jogadores_equipaA[2], jogo.jogadores_equipaA[8]);
 sleep(3);
  printf("\n%s tenta a sua sorte de longe.\n",jogo.jogadores_equipaA[7]);
 sleep(3);
  printf("\n%s conseguiu mantê-la afastada de alguma maneira.\n",jogo.jogadores_equipaB[1]);
 sleep(3);
  printf("\n68' %s vê o %s a correr nas costas da defesa e faz o passe profundo.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[10]);
 sleep(3);
  printf("\n%s remata de primeira.\n",jogo.jogadores_equipaA[10]);
 sleep(3);
  printf("\n%s baixa-se e desvia a bola para longe.\n",jogo.jogadores_equipaB[1]);
 sleep(3);
  printf("\n78' %s faz um cruzamento preciso para %s.\n",jogo.jogadores_equipaB[3], jogo.jogadores_equipaB[7]);
 sleep(3);
  printf("\n%s desfere um tiro de longa distância.\n",jogo.jogadores_equipaB[11]);
 sleep(3);
  printf("\nO guarda-redes chega-lhe com uma mão e afasta a bola da baliza.\n");
 sleep(3);
  printf("\n86'	%s aguenta vários desarmes e passa a bola para %s.\n",jogo.jogadores_equipaB[7],jogo.jogadores_equipaB[3]);
  sleep(3);
  printf("\n%s contorna um defesa e continua a correr.\n",jogo.jogadores_equipaB[3]);
 sleep(3);
  printf("\nEle tenta bater o guarda-redes.\n");
 sleep(3);
  printf("\n%s salta alto e afasta a bola.\n",jogo.jogadores_equipaA[1]);
 sleep(3);
  printf("\n90'	Final do Jogo\n");
 sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o Sporting!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("O melhor marcador foi %s com %d golo\n", jogo.jogadores_equipaA[8], golosJogador.golosJogadorSporting[8]);

printf("\n");

menu_torneio1();

}

/**
*
*funcao rioAve_Setubal que mostra o jogo do Rio Ave vs Vitória de Setúbal
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

rioAve_setubal () { 
                
struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar Rio Ave x Setubal\n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("setubal.txt", "w+");
fp=fopen("setubal.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Setubal: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorVitoriaSetubal[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorVitoriaSetubal[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("rio_ave.txt", "w+");
        fp2 = fopen("rio_ave.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Rio Ave: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorRioAve[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorRioAve[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar, Rio Ave x Setubal!\n");
       sleep(3);
       
       
    printf("\n0' Pontapé de saída\n");
    sleep(3);
    printf("\n15'	%s e %s entendem-se bem na área.\n",jogo.jogadores_equipaB[10],jogo.jogadores_equipaB[9]);
      sleep(3);
    printf("\n%s dispara um remate fortíssimo.\n",jogo.jogadores_equipaB[9]);
      sleep(3);
    printf("\n%s desvia-a para longe com uma defesa acrobática.\n",jogo.jogadores_equipaA[1]);
       sleep(3);
    printf("\n19'	%s atinge %s por trás com uma entrada feia.\n",jogo.jogadores_equipaB[5],jogo.jogadores_equipaA[9]);
       sleep(3);
    printf("\nCartão Vermelho - %s vai tomar banho mais cedo.\n",jogo.jogadores_equipaB[5]);
         sleep(3);
      jogo.cartao_vermelho++;
    
    printf("\n30'	%s tem uma entrada tardia sobre %s.\n",jogo.jogadores_equipaB[2],jogo.jogadores_equipaA[8]);
       sleep(3);
    printf("\nCartão Amarelo - O árbitro não tem outra hipótese a não ser advertir o jogador.\n");
       sleep(3);
         jogo.cartao_amarelo++;
       
    printf("\n31'	%s faz um passe em profundidade para %s.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaB[10]);
       sleep(3);
    printf("\n%s remata pela primeira vez e parece que vai entrar.\n",jogo.jogadores_equipaB[10]);
      sleep(3);
    printf("\n%s desvia-a para longe com uma defesa acrobática.\n",jogo.jogadores_equipaA[1]);
       sleep(3);
    printf("\n42'	%s entra duro sobre %s.\n",jogo.jogadores_equipaA[11],jogo.jogadores_equipaB[9]);
      sleep(3);
    printf("\nCartão Amarelo - %s entra para o bloco de notas do árbitro.\n",jogo.jogadores_equipaA[11]);
       sleep(3);
         jogo.cartao_amarelo++;
       
    printf("\n45'	Intervalo\n");
      sleep(3);
    printf("\n47'	Rio Ave consegue ganhar o canto.\n");
       sleep(3);
    printf("\n%s cruza a bola para o poste mais afastado.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
    printf("\nO %s faz uma corrida inteligente e remata a bola sem a deixar cair.\n",jogo.jogadores_equipaB[9]);
     sleep(3);
    printf("\nUma defesa incrível do guarda redes à queima-roupa.\n");
     sleep(3);
    printf("\n55'	%s coloca no relvado uma bola alta e joga-a para a frente do %s.\n",jogo.jogadores_equipaA[9],jogo.jogadores_equipaA[11]);
     sleep(3);
    printf("\n%s descobre um caminho para a baliza e tenta passar a bola pelo guarda-redes.\n",jogo.jogadores_equipaA[11]);
     sleep(3);
    printf("\n%s controla o ângulo que a bola faz e consegue defender.\n",jogo.jogadores_equipaB[1]);
     sleep(3);
    printf("\n63'	%s faz um passe para o limite da área.\n",jogo.jogadores_equipaA[9]);
     sleep(3);
    printf("\n%s dá um toque e dispara um remate para o canto inferior.\n",jogo.jogadores_equipaA[8]);
     sleep(3);
    printf("\nO guarda-redes atira-se para o outro lado da baliza e mantém a bola afastada.\n");
  sleep(3);
    printf("\n76'	%s controla uma bola passada por alto e deixa-a para %s.\n",jogo.jogadores_equipaA[11],jogo.jogadores_equipaA[8]);
     sleep(3);
    printf("\n%s leva a bola para a frente e dispara um remate rasteiro.\n",jogo.jogadores_equipaA[8]);
     sleep(3);
    printf("\nGOLO!! - %s olha desesperadamente enquanto a bola bate no fundo da rede.\n",jogo.jogadores_equipaB[1]);
     sleep(3);
     golosEquipaA++;
     jogo.numero_golos++;
     golos.golosVitoriaSetubal++;
     golosJogador.golosJogadorVitoriaSetubal[8]++;

    printf("\n81'	%s envia uma bola alta para o centro do campo.\n",jogo.jogadores_equipaA[10]);
     sleep(3);
    printf("\n%s controla a bola e dirige-se para o canto inferior.\n",jogo.jogadores_equipaA[8]);
     sleep(3);
    printf("\nO guarda-redes atirou a mão em direção à bola.\n");
     sleep(3);
    printf("\nBons reflexos do guarda-redes ao fazer a defesa.\n");
    sleep(3);
  printf("\n90'Final do Jogo\n");
 sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o Setubal!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("O melhor marcador foi %s com %d golo\n", jogo.jogadores_equipaA[8], golosJogador.golosJogadorVitoriaSetubal[8]);

printf("\n");

menu_torneio1();

}

/**
*
*funcao estoril_guimaraes que mostra o jogo do Estoril vs Vitória de Guimarães
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

estoril_guimaraes() { 
                
struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar Estoril x Guimaraes \n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("guimaraes.txt", "w+");
fp=fopen("guimaraes.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador: ");	
        scanf("\n%[^\n]s", aux);

	printf("Adicione a sua idade: ");	
	scanf("%d", &idades.idadeJogadorVitoriaGuimaraes[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorVitoriaGuimaraes[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);
	
	fp2 = fopen("estoril.txt", "w+");
        fp2 = fopen("estoril.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Estoril: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorEstoril[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorEstoril[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar, Estoril x Guimaraes!\n");
       sleep(3);
       
       
  printf("\n0' Ponta-pé de saída\n");
    sleep(3);
    printf("\n4'	%s faz um passe do canto para a grande área.\n",jogo.jogadores_equipaB[10]);
          sleep(3);
    printf("\n%s transporta a bola para a grande área e remata com força.\n",jogo.jogadores_equipaB[11]);
          sleep(3);
    printf("\n%s mergulha para o lado e defende-a.",jogo.jogadores_equipaA[1]);
        sleep(3);  
    printf("\n20'	%s vê a corrida de %s e faz um passe que rasga a defesa.\n",jogo.jogadores_equipaA[8],jogo.jogadores_equipaA[10]);
          sleep(3);
    printf("\n%s dá um toque e tenta desviar a bola do guarda-redes.\n",jogo.jogadores_equipaA[10]);
          sleep(3);
    printf("\nA bola não leva muita força e é fácil para o %s.\n",jogo.jogadores_equipaB[1]);
          sleep(3);
    printf("\n40'	%s faz um passe simples para %s.\n",jogo.jogadores_equipaB[11],jogo.jogadores_equipaB[8]);
          sleep(3);
    printf("\n%s coloca o pé na bola e ela voa em direção ao ângulo superior.\n",jogo.jogadores_equipaA[8]);
          sleep(3);
    printf("\nBons reflexos do %s que faz a defesa parecer fácil.\n",jogo.jogadores_equipaA[1]);
          sleep(3);
    printf("\n42'	%s cabeceia a bola para %s.\n",jogo.jogadores_equipaB[10],jogo.jogadores_equipaB[8]);
          sleep(3);
    printf("\n%s tem um remate ambicioso.\n",jogo.jogadores_equipaB[8]);
          sleep(3);
    printf("\nGOLO!! - É boa de mais para %s e acaba no fundo da baliza.\n",jogo.jogadores_equipaA[1]);
          sleep(3);
       golosEquipaB++;
       jogo.numero_golos++;
       golos.golosEstoril++;
       golosJogador.golosJogadorEstoril[8]++;
   
    printf("\n45'	Intervalo\n");
           sleep(3);
    printf("\n46'	Vitória de Guimarães consegue ganhar o canto.\n");
          sleep(3);
    printf("\n%s bate o canto em balanço.\n",jogo.jogadores_equipaA[8]);
           sleep(3);
    printf("\n%s cabeceia a bola para golo.\n",jogo.jogadores_equipaA[3]);
           sleep(3);
    printf("\nGOLO!! - A bola desliza para trás do guarda-redes e cai sobre a linha.\n");
            sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosVitoriaGuimaraes++;
       golosJogador.golosJogadorVitoriaGuimaraes[8]++;
    
    printf("\n52'	Uma tentativa de cruzamento é desviada para fora para canto a favor do Vitória de Guimarães.\n",jogo.jogadores_equipaA[1]);
           sleep(3);
    printf("\n%s bate o canto em balanço.\n",jogo.jogadores_equipaA[8]);
           sleep(3);
    printf("\n%s ganha o cabeceamento.\n",jogo.jogadores_equipaA[11]);
           sleep(3);
    printf("\nGOLO!! - A bola desliza para trás do guarda-redes e cai sobre a linha.\n");
           sleep(3);
     golosEquipaA++;
     jogo.numero_golos++;
     golos.golosVitoriaGuimaraes++;
     golosJogador.golosJogadorVitoriaGuimaraes[11]++;
   
    printf("\n59' Um brilhante passe aéreo para %s.\n",jogo.jogadores_equipaA[6]);
           sleep(3);
    printf("\nEle faz um passe em volley para a frente de %s.\n",jogo.jogadores_equipaA[10]);
           sleep(3);
    printf("\n%s salta alto e redireciona a bola en direção à baliza.\n",jogo.jogadores_equipaA[10]);
           sleep(3);
    printf("\nO guarda-redes baixa-se rapidamente para defender o remate.\n");
         sleep(3);
    printf("\n69'	%s pica a bola para a frente para o %s.\n",jogo.jogadores_equipaB[7],jogo.jogadores_equipaB[11]);
           sleep(3);
    printf("\n%s envia a bola para o relvado com o peito e dispara um remate rasteiro.\n",jogo.jogadores_equipaA[11]);
           sleep(3);
    printf("\n%s atira-se rápido ao lance e atira a bola para longe.\n",jogo.jogadores_equipaA[1]);
           sleep(3);
    printf("\n75'	%s põe a bola nos pés do %s.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaB[9]);
           sleep(3);
    printf("\n%s tenta aproximar-se para marcar golo.\n",jogo.jogadores_equipaB[9]);
           sleep(3);
    printf("\n%s põe a bola em segurança com a ponta dos dedos.\n",jogo.jogadores_equipaA[1]);
         sleep(3);
  printf("\n90'Final do Jogo\n");
 sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o Guimaraes!\n", golosEquipaA, golosEquipaB );
           sleep(3);
printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("Os melhores marcadores foram %s, %s e %s com %d golo\n", jogo.jogadores_equipaA[8], jogo.jogadores_equipaB[8], jogo.jogadores_equipaA[11], golosJogador.golosJogadorVitoriaGuimaraes[8]);

printf("\n");

menu_torneio1();

}


/**
*
*funcao porto_benfica que mostra o jogo do Porto vs Benfica
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

porto_benfica () {
                    
struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar Porto X Benfica \n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("benfica.txt", "w+");
fp=fopen("benfica.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Benfica: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorBenfica[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorBenfica[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("porto.txt", "a+");
        fp2 = fopen("porto.txt", "a+");


        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Porto: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorPorto[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorPorto[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar,  FC Porto X Benfica  !\n");
       sleep(3);
       
       
  printf("\n0' Pontapé de saída");
    sleep(3);
printf("\n3'	%s vê a desmarcação de %s e faz um passe em profundidade para ele.\n",jogo.jogadores_equipaB[7],jogo.jogadores_equipaB[3]);
       sleep(3);
printf("\n%s dispara um remate de longa distância.\n",jogo.jogadores_equipaB[3]);
       sleep(3);
printf("\n%s chega ao outro lado da baliza e defende o remate.\n",jogo.jogadores_equipaA[1]);
       sleep(3);
printf("\n8'	%s vê um espaço na defesa e é por lá que passa a bola.\n",jogo.jogadores_equipaA[8]);
       sleep(3);
printf("\n%s afasta a bola da baliza.\n",jogo.jogadores_equipaB[10]);
       sleep(3);
printf("\nGOLO!! - Passa por baixo do guarda-redes e entra.\n");
       sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosBenfica++;
       golosJogador.golosJogadorBenfica[10]++;
 
printf("\n18' %s envia uma bola alta para a marca de grande penalidade.\n",jogo.jogadores_equipaA[6]);
       sleep(3);
printf("\n%s cabeceia em direção à baliza.\n",jogo.jogadores_equipaA[10]);
       sleep(3);
printf("\nPassa sobre a barra.\n");
       sleep(3);
printf("\n23'	 %s executa o passe em direção a %s.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[9]);
       sleep(3);
printf("\nGrande trabalho de pés do %s para obter espaço para o remate.\n",jogo.jogadores_equipaA[9]);
       sleep(3);
printf("\nGOLO!! - Ela passa pelo guarda-redes e entra.\n");
       sleep(3);
printf("\nGolo anulado por fora de jogo. FORA DE JOGO! A bandeirola está levantada para fora de jogo, não contou.");
       sleep(3);
printf("\n27'	%s insulta o árbitro após uma decisão duvidosa.\n",jogo.jogadores_equipaA[8]);
       sleep(3);
printf("\nCartão Amarelo - O árbitro demora o seu tempo antes de mostrar o cartão ao %s.\n",jogo.jogadores_equipaA[8]);
       sleep(3);
         jogo.cartao_amarelo++;

printf("\n31'	%s tenta desarmar %s mas chega muito tarde.\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaB[7]);
       sleep(3);
printf("\nPontapé livre para o FC Porto do lado direito da grande área.\n");
       sleep(3);
printf("\nCartão Amarelo - O árbitro mostra o cartão amarelo ao %s.\n",jogo.jogadores_equipaA[10]);
       sleep(3);
         jogo.cartao_amarelo++;

    printf("\n%s cruza a bola para a área.\n",jogo.jogadores_equipaB[8]);
       sleep(3);
    printf("\n%s livra-se do seu marcador e cabeceia para a baliza.\n",jogo.jogadores_equipaB[10]);
       sleep(3);
printf("\nPassa sobre a barra.\n");
       sleep(3);
printf("\n37'	%s vê um espaço na defesa e é por lá que passa a bola.\n",jogo.jogadores_equipaB[6]);
       sleep(3);
printf("\n%s encontrar uma brecha para passar a bola pelo guarda-redes.\n",jogo.jogadores_equipaB[10]);
       sleep(3);
printf("\nGOLO!! - Passa por baixo do guarda-redes e entra.\n");
       sleep(3);
        golosEquipaB++;
        jogo.numero_golos++;
        golos.golosPorto++;
        golosJogador.golosJogadorPorto[10]++;

printf("\n40'	%s faz o cruzamento para a grande área.\n",jogo.jogadores_equipaA[6]);
       sleep(3);
printf("\n%s coloca a sua cabeça na bola e ela parece estar a cair.\n",jogo.jogadores_equipaA[10]);
       sleep(3);
printf("\nA bola passa um pouco ao lado do poste.\n");
       sleep(3);
printf("\n42'	%s recebe a bola no limite da grande área.\n",jogo.jogadores_equipaA[11]);
       sleep(3);
printf("\nEle passa pelo seu marcador e chuta a bola para uma área perigosa.\n");
       sleep(3);
printf("\n%s remata rasteiro para a baliza.\n",jogo.jogadores_equipaA[9]);
       sleep(3);
printf("\nO guarda redes sai bem da sua baliza e consegue defender.\n");
       sleep(3);
printf("\n45'	Intervalo\n");
       sleep(3);
printf("\n51'	%s faz um passe rasteiro para os pés de %s.\n",jogo.jogadores_equipaA[11],jogo.jogadores_equipaA[10]);
       sleep(3);
printf("\n%s controla a bola, arrasta-o para trás passa o seu marcador e remata para golo.\n",jogo.jogadores_equipaA[10]);
       sleep(3);
printf("\nGOLO!! - Está fora do alcance do %s ao atravessar a linha de baliza.\n",jogo.jogadores_equipaB[1]);
       sleep(3);
        golosEquipaA++;
        jogo.numero_golos++;
        golos.golosBenfica++;
        golosJogador.golosJogadorBenfica[10]++;

printf("\n55'	%s serpenteia pelo meio-campo antes de passar para o %s.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[9]);
       sleep(3);
printf("\n%s consegue fazer um remate.\n",jogo.jogadores_equipaA[6]);
       sleep(3);
printf("\nEle tem o %s a movimentar-se à frente da baliza.\n",jogo.jogadores_equipaB[1]);
       sleep(3);
printf("\nA bola cai junto ao poste.\n");
       sleep(3);
printf("\n57'	%s interceta um passe fraco.\n",jogo.jogadores_equipaB[4]);
       sleep(3);
printf("\nEle faz imediatamente um passe rasteiro para %s.\n",jogo.jogadores_equipaB[7]);
       sleep(3);
printf("\n%s finta em direção à área e tenta colocar a balo no poste mais próximo.\n",jogo.jogadores_equipaB[7]);
       sleep(3);
printf("\nA bola passa ao lado do poste.\n");
       sleep(3);
printf("\n77'	%s derruba %s com um desFC Porto X arme duro\n",jogo.jogadores_equipaB[3],jogo.jogadores_equipaA[6]);
       sleep(3);
printf("\nPontapé livre para o Benfica no limite da área.\n");
       sleep(3);
printf("\n%s marca o pontapé-livre com a parte de dentro do pé.\n",jogo.jogadores_equipaA[8]);
       sleep(3);
printf("\nGOLO!! - E entra mesmo ao pé do poste.\n");
       sleep(3);
        golosEquipaA++;
        jogo.numero_golos++;
        golos.golosBenfica++;
        golosJogador.golosJogadorBenfica[8]++;

printf("\n80'	%s envia um passe alto para %s.\n",jogo.jogadores_equipaB[6],jogo.jogadores_equipaB[7]);
       sleep(3);
printf("\n%s domina com o peito e tenta colocá-la no canto.\n",jogo.jogadores_equipaB[7]);
       sleep(3);
printf("\nO guarda-redes atira-se para o outro lado da baliza e mantém a bola afastada.\n");
       sleep(3);
printf("\n81'	%s põe a bola nos pés do %s.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[9]);
       sleep(3);
printf("\n%s remata bem a bola.\n",jogo.jogadores_equipaA[9]);
       sleep(3);
printf("\nA bola passa pelo guarda-redes mas vai ao lado do poste.\n");
       sleep(3);
printf("\n82'	%s tentou tirar a bola ao %s mas acaba por acertar no %s em vez de na bola.\n",jogo.jogadores_equipaB[5],jogo.jogadores_equipaA[7],jogo.jogadores_equipaA[7]);
       sleep(3);
printf("\nPontapé livre para Benfica do lado esquerdo da área.\n");

printf("\n%s marca o pontapé livre rasteiro e forte.\n",jogo.jogadores_equipaA[8]);
       sleep(3);
printf("\nGOLO!! - %s ainda lhe toca mas não consegue evitar que ela entre.\n",jogo.jogadores_equipaB[1]);
 sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosBenfica++;
       golosJogador.golosJogadorBenfica[8]++;
 
  printf("\n90'Final do Jogo Final do Jogo\n");
 sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o Benfica!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("Os melhores marcadores foram %s e %s com %d golos\n", jogo.jogadores_equipaA[8], jogo.jogadores_equipaB[10], golosJogador.golosJogadorBenfica[8]);

printf("\n");

menu_torneio2();

}

/**
*
*funcao olhanense_maritimo que mostra o jogo do Olhanense vs Maritimo
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

olhanense_maritimo () {
                    
struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar Olhanense X Maritimo \n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("olhanense.txt", "w+");
fp=fopen("olhanense.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Olhanense: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorOlhanense[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorOlhanense[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("maritimo.txt", "w+");
        fp2 = fopen("maritimo.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Maritimo: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorMaritimo[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorMaritimo[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar,  Olhanense X Maritimo !\n");
       sleep(3);
       
  printf("\n0' Pontapé de saída\n");
    sleep(3);
printf("\n7'	Canto para Maritimo.\n");
    sleep(3);
printf("\n%s bate uma bola rasteira para a área.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
printf("\n%s remata à baliza.\n",jogo.jogadores_equipaB[6]);
    sleep(3);
printf("\nÉ uma defesa fácil para %s.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
printf("\n15'	%s entrega a bola ao %s.\n",jogo.jogadores_equipaB[9],jogo.jogadores_equipaB[6]);
    sleep(3);
printf("\n%s dispara um remate de longa distância.\n",jogo.jogadores_equipaB[6]);
    sleep(3);
printf("\n%s mergulha para o lado e defende-a.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
printf("\n20'	 %s leva a bola para a grande área e faz um passe curto na direção do %s.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaB[10]);
    sleep(3);
printf("\n%s controla a bola, arrasta-o para trás passa o seu marcador e remata para golo.\n",jogo.jogadores_equipaB[10]);
    sleep(3);
printf("\nO guarda-redes chega-lhe com uma mão e afasta a bola da baliza.\n");
    sleep(3);
printf("\n26'	%s segura a bola e passa-a ao %s.\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaA[6]);
    sleep(3);
printf("\n%s tenta tenta a sorte de longa distância.\n",jogo.jogadores_equipaA[6]);
    sleep(3);
printf("\n%s atira-se bem e consegue afastar a bola.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
printf("\n44'	%s entra duro de carrinho para tentar recuperar a bola.\n",jogo.jogadores_equipaA[4]);
    sleep(3);
printf("\nÉ pontapé livre para o Maritimo.\n");

printf("\n%s marca o pontapé livre rasteiro e forte.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
printf("\nGOLO!! - A bola vai entrar junto ao poste.\n");
    sleep(3);
       golosEquipaB++;
       jogo.numero_golos++;
       golos.golosMaritimo++;
       golosJogador.golosJogadorMaritimo[8]++;

printf("\n45'	Intervalo\n");
    sleep(3);
printf("\n46'	%s faz um passe simples para %s.\n",jogo.jogadores_equipaB[6],jogo.jogadores_equipaB[8]);
    sleep(3);
printf("\n%s tem um remate abicioso.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
printf("\n%s atira-se rápido ao lance e atira a bola para longe.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
printf("\n47'	%s recebe a bola de um médio e passa em profundidade para %s.\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaA[7]);
    sleep(3);
printf("\n%s finta em direção à área e tenta colocar a balo no poste mais próximo.\n",jogo.jogadores_equipaA[7]);
    sleep(3);
printf("\nA bola vai direta para %s e este defende-a facilmente.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
printf("\n51'	%s recebe a bola de longe e faz um passe instantaneamente para %s.\n",jogo.jogadores_equipaA[5],jogo.jogadores_equipaA[9]);
    sleep(3);
printf("\n%s encontrar uma brecha para passar a bola pelo guarda-redes.\n",jogo.jogadores_equipaA[9]);
    sleep(3);
printf("\nA bola não perturba o guarda-redes e sai para pontapé de baliza.\n");
    sleep(3);
printf("\n52'	%s vê %s desmarcado.\n",jogo.jogadores_equipaA[11],jogo.jogadores_equipaA[9]);
    sleep(3);
printf("\nEle aguenta as cargas e envia uma grande bola.\n");
    sleep(3);
printf("\n%s executa um potente remate à baliza.\n",jogo.jogadores_equipaA[9]);
    sleep(3);
printf("\nGOLO!! - %s mergulha bem, mas não consegue chegar-lhe.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosOlhanense++;
       golosJogador.golosJogadorOlhanense[9]++;

printf("\n53'	%s cabeceia a bola para a ala.\n",jogo.jogadores_equipaA[4]);
    sleep(3);
printf("\n%s coloca a bola no relvado e deixa o defesa para trás.\n",jogo.jogadores_equipaA[7]);
    sleep(3);
printf("\nEle faz um remate rasteiro a partir de um ângulo apertado.\n");
    sleep(3);
printf("\nUma defesa incrível do guarda redes à queima-roupa.\n");
    sleep(3);
printf("\n62'	Grande troca de passes entre %s and %s.\n",jogo.jogadores_equipaA[9],jogo.jogadores_equipaA[10]);
    sleep(3);
printf("\n%s controla a bola e executa um bonito remate.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
printf("\nGOLO!! - Esgueira-se por baixo da barra e bate no fundo das redes.\n");
    sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosOlhanense++;
       golosJogador.golosJogadorOlhanense[10]++;

printf("\n63' %s joga uma grande bola para %s.\n",jogo.jogadores_equipaB[11],jogo.jogadores_equipaB[2]);
    sleep(3);
printf("\n%s tenta a sorte de longa distância.\n",jogo.jogadores_equipaA[2]);
    sleep(3);
printf("\n%s mostra umas mãos fortes e faz a defesa.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
printf("\n66'	%s vê um buraco na defesa e faz um passe pelo meio.\n",jogo.jogadores_equipaA[6]);
    sleep(3);
printf("\n%s finta por dentro o defesa e dispara um remate rasteiro.\n",jogo.jogadores_equipaA[11]);
    sleep(3);
printf("\n%s defende com o pé.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
printf("\n80'	 %s faz um passe na direção de %s.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[4]);
    sleep(3);
printf("\n%s leva a bola para a frente e dispara um remate rasteiro.\n",jogo.jogadores_equipaA[4]);
    sleep(3);
printf("\n%s mergulha e faz uma grande defesa.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
printf("\n81'	%s insulta o árbitro após uma decisão duvidosa.\n",jogo.jogadores_equipaA[11]);
    sleep(3);
printf("\nCartão Amarelo - O árbitro demora o seu tempo antes de mostrar o cartão ao %s.\n",jogo.jogadores_equipaA[11]);
 sleep(3);
  jogo.cartao_amarelo++;

  printf("\n90'Final do Jogo Final do Jogo\n");
   sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o Olhanense!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("Os melhores marcadores foram %s, %s e %s com %d golo\n", jogo.jogadores_equipaA[8], jogo.jogadores_equipaA[10], jogo.jogadores_equipaA[11], golosJogador.golosJogadorOlhanense[8]);

printf("\n");

menu_torneio2();

}

/**
*
*funcao braga_sporting que mostra o jogo do Braga vs Sporting
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

braga_sporting () {
                    
struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar Braga X Sporting   \n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("sporting.txt", "w+");
fp=fopen("sporting.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Sporting: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorSporting[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorSporting[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("braga.txt", "w+");
        fp2 = fopen("braga.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorBraga[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorBraga[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar, Braga X Sporting   !\n");
       sleep(3);
       
       
    printf("\n0' Pontapé de saída");
    sleep(3);
printf("\n13'	%s derruba %s com um desarme duro\n",jogo.jogadores_equipaA[4],jogo.jogadores_equipaB[9]);
    sleep(3);
printf("\nPontapé livre para o Braga a cerca de 25 metros.\n");
    sleep(3);
printf("\n%s faz o cruzamento para a frente da baliza.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
printf("\n%s redireciona o cabeceamento em direção à baliza.\n",jogo.jogadores_equipaB[11]);
    sleep(3);
printf("\n%s  lê bem e faz uma defesa fácil.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
printf("\n21'	 %s  leva a bola para a grande área e faz um passe curto na direção do %s.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[11]);
    sleep(3);
printf("\n%s  empurra a bola para a baliza.\n",jogo.jogadores_equipaA[11]);
    sleep(3);
printf("\n%s  faz a defesa.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
printf("\n23'	%s  ganha a bola mas entretanto acaba por derrubar %s.\n",jogo.jogadores_equipaB[5],jogo.jogadores_equipaA[7]);
    sleep(3);
printf("\nPontapé livre para o Sporting CP.\n");
    sleep(3);
printf("\n%s  contornar a barreira com uma bola curva rasteira.\n",jogo.jogadores_equipaA[8]);
    sleep(3);
printf("\nGOLO!! - O livre voa por cima da barreira!\n");
    sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosSporting++;
       golosJogador.golosJogadorSporting[8]++;

printf("\n26'	%s  faz um cruzamento do canto da grande área.\n",jogo.jogadores_equipaB[6]);
    sleep(3);
printf("\n%s  coloca a bola no relvado e dispara um remate para o canto inferior.\n",jogo.jogadores_equipaB[7]);
    sleep(3);
printf("\n%s  atira-se bem e consegue afastar a bola.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
printf("\n27'	%s  puxa a camisola de %s  para o impedir de fugir com a bola.\n",jogo.jogadores_equipaB[2],jogo.jogadores_equipaA[10]);
    sleep(3);
printf("\nCartão Amarelo - %s  entra para o bloco de notas do árbitro.\n",jogo.jogadores_equipaB[2]);
    sleep(3);
      jogo.cartao_amarelo++;

printf("\n30'	%s  corre para a defesa antes de a entregar a %s.\n",jogo.jogadores_equipaB[9],jogo.jogadores_equipaB[8]);
    sleep(3);
printf("\n%s  remata com efeito à baliza.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
printf("\nÉ uma defesa fácil para %s.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
printf("\n43'	O %s  passa em trivela uma bola baixa para o segundo poste desde o canto da grande área.\n",jogo.jogadores_equipaA[11]);
    sleep(3);
printf("\n%s  tenta aproximar-se para marcar golo.\n",jogo.jogadores_equipaA[2]);
    sleep(3);
printf("\nO guarda-redes atirou a mão em direção à bola.\n");
    sleep(3);
printf("\nBons reflexos do guarda-redes ao fazer a defesa.\n");
    sleep(3);
printf("\n45'	Intervalo\n");
    sleep(3);
printf("\n62'	%s  faz um cruzamento preciso para %s.\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaA[2]);
    sleep(3);
printf("\n%s  tenta a sua sorte de longe.\n",jogo.jogadores_equipaA[2]);
    sleep(3);
printf("\n%s  conseguiu mantê-la afastada de alguma maneira.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
printf("\n68'	%s  vê o %s  a correr nas costas da defesa e faz o passe profundo.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[10]);
    sleep(3);
printf("\n%s  remata de primeira.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
printf("\n%s  baixa-se e desvia a bola para longe.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
printf("\n78'	%s faz um cruzamento preciso para %s.\n",jogo.jogadores_equipaB[3],jogo.jogadores_equipaB[11]);
    sleep(3);
printf("\n%s  desfere um tiro de longa distância.\n",jogo.jogadores_equipaB[11]);
    sleep(3);
printf("\nO guarda-redes chega-lhe com uma mão e afasta a bola da baliza.\n");
    sleep(3);
printf("\n86'	%s  aguenta vários desarmes e passa a bola para %s.\n",jogo.jogadores_equipaB[7],jogo.jogadores_equipaB[3]);
    sleep(3);
printf("\n%s  contorna um defesa e continua a correr.\n",jogo.jogadores_equipaB[3]);
    sleep(3);
printf("\nEle tenta bater o guarda-redes.\n");
    sleep(3);
printf("\n%s  salta alto e afasta a bola.\n",jogo.jogadores_equipaA[1]);
 sleep(3);
  printf("\n90'Final do Jogo\n");
 sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o Sporting!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("O melhores marcador foi %s com %d golo\n", jogo.jogadores_equipaA[8], golosJogador.golosJogadorSporting[8]);

printf("\n");

menu_torneio2();

}

/**
*
*funcao setubal_guimaraes que mostra o jogo do Vitória de Setúbal vs Vitória de Guimarães
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

setubal_guimaraes () {
                    
struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar Setúbal x Guimarães  \n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("setubal.txt", "w+");
fp=fopen("setubal.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Setubal: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorVitoriaSetubal[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorVitoriaSetubal[n]);
       }

        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("guimaraes.txt", "w+");
        fp2 = fopen("guimaraes.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Guimaraes: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorVitoriaGuimaraes[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorVitoriaGuimaraes[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar, Setúbal x Guimarães  !\n");
       sleep(3);
       
       
    printf("\n0' Pontapé de saída\n");
    sleep(3);
printf("\n13'	%s recebe a bola de longe e faz um passe instantaneamente para %s.\n",jogo.jogadores_equipaA[8],jogo.jogadores_equipaA[9]);
    sleep(3);
printf("\nBons reflexos de %s, que empurra de perto a bola para a baliza.\n",jogo.jogadores_equipaA[9]);
    sleep(3);
printf("\nO guarda-redes atira-se para o outro lado da baliza e mantém a bola afastada.\n");
    sleep(3);
printf("\n22'	 %s leva a bola para a grande área e faz um passe curto na direção do %s.\n",jogo.jogadores_equipaA[1],jogo.jogadores_equipaA[9]);
    sleep(3);
printf("\n%s ataca a bola e impede o golo.\n",jogo.jogadores_equipaA[9]);
    sleep(3);
printf("\n%s defendeu a bola com uma defesa de enormes reflexos.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
printf("\n23'	%s vê a desmarcação de %s para a área e envia a bola para a sua frente.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[8]);
    sleep(3);
printf("\n%s cabeceia para a baliza.\n",jogo.jogadores_equipaA[8]);
    sleep(3);
printf("\nO guarda-redes chega-lhe com uma mão e afasta a bola da baliza.\n");
    sleep(3);
printf("\n33'	Uma entrada desesperada do %s para evitar que %s consiga rematar. Parece que está dentro da área.\n",jogo.jogadores_equipaA[2],jogo.jogadores_equipaB[6]);
    sleep(3);
printf("\nO penálti é atribuido a Vitória de Guimarães.\n");
    sleep(3);
printf("\n%s faz um arranque e tenta colocar a bola no ângulo.\n",jogo.jogadores_equipaB[11]);
    sleep(3);
printf("\nGOLO!! - A bola entra junto ao poste.\n");
    sleep(3);
      golosEquipaB++;
      jogo.numero_golos++;
      golos.golosVitoriaGuimaraes++;
      golosJogador.golosJogadorVitoriaGuimaraes[11]++;

printf("\n34'	A bola rola para fora para canto a favor do Vitória de Guimarães.\n");
    sleep(3);
printf("\n%s cruza a bola para o poste mais afastado.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
printf("\n%s faz um cabeceamento firme para a baliza.\n",jogo.jogadores_equipaB[9]);
    sleep(3);
printf("\nÉ defendida pelo %s.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
printf("\n37'	%s faz um passe para %s.\n",jogo.jogadores_equipaB[9],jogo.jogadores_equipaB[3]);
    sleep(3);
printf("\n%s vê o guarda-redes adiantado e tenta o chapéu.\n",jogo.jogadores_equipaB[3]);
    sleep(3);
printf("\n%s defende.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
printf("\n42'	%s recebe a bola no espaço aberto.\n",jogo.jogadores_equipaA[11]);
    sleep(3);
printf("\nEle consegue espaço para o cruzamento e envia a bola para a área.\n");
    sleep(3);
printf("\n%s cabeceia em direção ao canto superior.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
printf("\nGOLO!! - A potência fa-la passar pelo %s.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosVitoriaSetubal++;
       golosJogador.golosJogadorVitoriaSetubal[10]++;

printf("\n45' Intervalo");
    sleep(3);
printf("\n50'	%s faz um passe em profundidade para %s.\n",jogo.jogadores_equipaB[6],jogo.jogadores_equipaB[10]);
    sleep(3);
printf("\n%s tem uma oportunidade clara de golo e tenta colocá-la por baixo do guarda-redes.\n",jogo.jogadores_equipaB[10]);
    sleep(3);
printf("\nO guarda redes estica-se muito bem e consegue parar o remate.\n");
    sleep(3);
printf("\n66'	%s descobre %s com espaço e envia o passe.\n",jogo.jogadores_equipaB[5],jogo.jogadores_equipaB[3]);
    sleep(3);
printf("\n%s controla a bola e remata com alguma esperança.\n",jogo.jogadores_equipaB[3]);
    sleep(3);
printf("\n%s atira-se bem e consegue afastar a bola.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
printf("\n67'	%s faz um cruzamento preciso para %s.\n",jogo.jogadores_equipaB[3],jogo.jogadores_equipaB[11]);
    sleep(3);
printf("\n%s tem um golaço à distância.\n",jogo.jogadores_equipaB[11]);
    sleep(3);
printf("\n%s faz a defesa.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
printf("\n74'	%s cai depois de uma falta de %s.\n",jogo.jogadores_equipaB[11],jogo.jogadores_equipaA[7]);
    sleep(3);
printf("\nCartão Amarelo - O árbitro não tem outra hipótese a não ser advertir o jogador.\n");
    sleep(3);
      jogo.cartao_amarelo++;

printf("\n75'	Bom trabalho de pés de %s no meio-campo.\n",jogo.jogadores_equipaA[8]);
    sleep(3);
printf("\nEle vê a desmarcação de %s e faz o passe.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
printf("\nUm remate à baliza por %s.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
printf("\nA bola não leva muita força e é fácil para o %s.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
printf("\n88'	%s é enganado por %s\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaB[5]);
    sleep(3);
printf("\nPontapé livre para Guimarães diretamente em frente à baliza.\n");
    sleep(3);
printf("\n%s tenta o canto superior com o pontapé-livre.\n",jogo.jogadores_equipaA[8]);
    sleep(3);
printf("\nGOLO!! - E entra mesmo ao pé do poste.\n");
 sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosVitoriaSetubal++;
       golosJogador.golosJogadorVitoriaSetubal[8]++;

  printf("\n90'	Final do Jogo\n");
 sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o Setubal!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("Os melhores marcadores foram %s, %s e %s com %d golo\n", jogo.jogadores_equipaA[8], jogo.jogadores_equipaA[10], jogo.jogadores_equipaA[11], golosJogador.golosJogadorVitoriaSetubal[8]);

printf("\n");

menu_torneio2();

}

/**
*
*funcao benfica_olhanense que mostra o jogo do Benfica vs Olhanense
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

benfica_olhanense () {
                    
struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar Benfica X Olhanense \n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("benfica.txt", "w+");
fp=fopen("benfica.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Benfica: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorBenfica[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorBenfica[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("olhanense.txt", "w+");
        fp2 = fopen("olhanense.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Olhanense: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorOlhanense[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorOlhanense[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar, SL Benfica X Olhanense!\n");
       sleep(3);
       
       
  printf("\n0' Ponta-pé de saída\n");
    sleep(3); 
printf("\nGOLO!! - A bola voa passando pelo guarda-redes, golo de %s.\n", jogo.jogadores_equipaA[11]);
    sleep(3); 
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosBenfica++;
       golosJogador.golosJogadorBenfica[11]++;

 printf("\n14'Canto para SL Benfica.\n");
   sleep(3); 
 printf("\n%s bate um canto.\n",jogo.jogadores_equipaA[11]);
   sleep(3); 
 printf("\nA bola passa por cima do guarda-redes e passa ao lado do poste mais distante.\n");
   sleep(3); 
 printf("\n32'%s recebe a bola à entrada da área.\n",jogo.jogadores_equipaB[10]);
   sleep(3); 
 printf("\nEle pica a bola para %s.\n",jogo.jogadores_equipaB[9]);
   sleep(3); 
 printf("\nUm remate à baliza por %s.\n",jogo.jogadores_equipaB[9]);
   sleep(3); 
 printf("\n%s mergulha cedo e faz uma defesa confortável.\n",jogo.jogadores_equipaA[1]);
   sleep(3); 
 printf("\n45'	Intervalo\n");
   sleep(3); 
 printf("\n46'%s puxa a camisola de %s para o impedir de fugir com a bola.\n",jogo.jogadores_equipaB[4],jogo.jogadores_equipaA[11]);
   sleep(3); 
 printf("\nCartão Amarelo - O árbitro não tem outra hipótese a não ser advertir o jogador.\n");
   sleep(3); 
   jogo.cartao_amarelo++;
 
 printf("\n48'%s derruba %s.\n",jogo.jogadores_equipaA[5],jogo.jogadores_equipaB[6]);
   sleep(3); 
 printf("\nCartão Amarelo - %s entra para o bloco de notas do árbitro.\n",jogo.jogadores_equipaA[5]);
   sleep(3);
      jogo.cartao_amarelo++;
   
 printf("\n50'%s recebe a bola do %s e tabela para a sua corrida.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaB[9]);
   sleep(3); 
 printf("\n%s treina o remate.\n",jogo.jogadores_equipaB[9]);
   sleep(3); 
 printf("\n%s atira-se rápido ao lance e atira a bola para longe.\n",jogo.jogadores_equipaA[1]);
   sleep(3); 
 printf("\n58'%s vê a desmarcação de %s para a área e envia a bola para a sua frente.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaB[10]);
   sleep(3); 
 printf("\n%s leva a bola para baixo e remata para a baliza.\n",jogo.jogadores_equipaB[10]);
   sleep(3); 
 printf("\n%s mergulha e faz uma grande defesa.\n",jogo.jogadores_equipaA[1]);
   sleep(3); 
 printf("\n70'%s leva a bola pelo campo e joga-a para %s.\n",jogo.jogadores_equipaA[11],jogo.jogadores_equipaA[7]);
   sleep(3); 
 printf("\n%s leva-a para a área e tenta colocá-la no ângulo.\n",jogo.jogadores_equipaA[7]);
   sleep(3); 
 printf("\nHouve falta de pontaria neste lance e é pontapé de baliza.\n");
   sleep(3); 
 printf("\n81'%s leva a bola para a grande área e faz um passe curto na direção do %s.\n",jogo.jogadores_equipaB[6],jogo.jogadores_equipaB[9]);
   sleep(3); 
 printf("\n%s tenta a sua sorte com um toque em jeito.\n",jogo.jogadores_equipaB[9]);
   sleep(3); 
 printf("\n%s defende a bola com as duas mãos.\n",jogo.jogadores_equipaA[1]);
   sleep(3); 
 printf("\n83'%s encontra algum espaço na área e o %s faz-lhe uma assistência.\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaA[7]);
   sleep(3); 
 printf("\n%s direciona o remate à baliza a uma curta distância.\n",jogo.jogadores_equipaA[10]);
   sleep(3); 
 printf("\nParecia golo mas a bola passa um pouco ao lado da baliza.\n");
   sleep(3); 
 printf("\n87'	%s recebe a bola de longe e faz um passe instantaneamente para %s.\n",jogo.jogadores_equipaB[10], jogo.jogadores_equipaB[11]);
   sleep(3); 
 printf("\nBons reflexos de %s, que empurra de perto a bola para a baliza.\n",jogo.jogadores_equipaB[9]);
   sleep(3); 
 printf("\n%s põe a bola em segurança com a ponta dos dedos.\n",jogo.jogadores_equipaB[9]);
   sleep(3); 
 printf("\n88'%s revela um trabalho de pés inteligente para manter a posse de bola.\n",jogo.jogadores_equipaA[8]);
   sleep(3); 
 printf("\nEle faz um passe preciso para %s.\n",jogo.jogadores_equipaA[11]);
   sleep(3); 
 printf("\n%s remata de primeira.\n",jogo.jogadores_equipaA[11]);
  sleep(3);
  printf("\n90' Final do Jogo\n");
 sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o Benfica!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("O melhor marcador foi %s com %d golo\n", jogo.jogadores_equipaA[11], golosJogador.golosJogadorBenfica[11]);

printf("\n");

menu_torneio3();

}

/**
*
*funcao sporting_setubal que mostra o jogo do Sporting vs Vitória de Setúbal
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

sporting_setubal () {
                    
struct jogo;
struct golos;
struct idades;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
system("clear");
printf("Escolheu para jogar Sporting X Setubal \n");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("sporting.txt", "w+");
fp=fopen("sporting.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Sporting: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorSporting[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorSporting[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("setubal.txt", "w+");
        fp2 = fopen("setubal.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Setubal: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorVitoriaSetubal[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorVitoriaSetubal[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar, Sporting X Setúbal !\n");
       sleep(3);
       
       
  printf("\n0' Pontapé de saída\n");
    sleep(3); 
 printf("\n9'	%s entra duro sobre %s.\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaB[6]);
     sleep(3); 
 printf("\nCartão Amarelo - O árbitro demora o seu tempo antes de mostrar o cartão ao %s.\n",jogo.jogadores_equipaA[10]);
    sleep(3); 
    jogo.cartao_amarelo++;
 printf("\n11'%s coloca a bola no caminho do %s.\n",jogo.jogadores_equipaA[9],jogo.jogadores_equipaA[6]);
     sleep(3); 
 printf("\n%s foge ao desarme e tenta fazer passar a bola pelo guarda-redes.\n",jogo.jogadores_equipaA[6]);
    sleep(3); 
 printf("\nO guarda-redes atirou a mão em direção à bola.\n");
    sleep(3); 
 printf("\nBons reflexos do guarda-redes ao fazer a defesa.\n");
    sleep(3); 
 printf("\n18'%s tem uma entrada tardia sobre %s.\n",jogo.jogadores_equipaB[3],jogo.jogadores_equipaA[6]);
    sleep(3); 
 printf("\nCartão Amarelo - O árbitro demora o seu tempo antes de mostrar o cartão ao %s.\n",jogo.jogadores_equipaB[3]);
    sleep(3); 
     jogo.cartao_amarelo++;

 printf("\n27'%s deixa um defesa para trás e passa-a para %s.\n",jogo.jogadores_equipaB[7],jogo.jogadores_equipaB[10]);
    sleep(3); 
 printf("\n%s empurra a bola para a baliza de curta distância.\n",jogo.jogadores_equipaB[10]);
    sleep(3); 
 printf("\nO guarda-redes atira-se para o outro lado da baliza e mantém a bola afastada.\n");
    sleep(3); 
 printf("\n39'%s cai com a entrada de %s.\n",jogo.jogadores_equipaA[10],jogo.jogadores_equipaB[9]);
    sleep(3); 
 printf("\nCartão Amarelo Cartão Amarelo - O árbitro mostra o cartão amarelo ao %s.\n",jogo.jogadores_equipaB[9]);
    sleep(3); 
     jogo.cartao_amarelo++;

 printf("\n40'%s faz um passe para %s.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[11]);
    sleep(3); 
 printf("\n%s arranja espaço para um remate e dispara à baliza.\n",jogo.jogadores_equipaA[11]);
    sleep(3); 
 printf("\n%s defende com o pé.\n",jogo.jogadores_equipaB[1]);
    sleep(3); 
 printf("\n42'%s vê %s numa posição avançada e passa-lhe a bola.\n",jogo.jogadores_equipaB[7],jogo.jogadores_equipaB[6]);
    sleep(3); 
 printf("\n%s passa por um defesa e remata para a baliza.\n",jogo.jogadores_equipaB[6]);
    sleep(3); 
 printf("\n%s atira-se rapidamente e consegue defender com o seu corpo.\n",jogo.jogadores_equipaA[1]);
    sleep(3); 
 printf("\n45'	Intervalo\n");
    sleep(3); 
 
 printf("\n54'%s recebe a bola de longe e faz um passe instantaneamente para %s.\n",jogo.jogadores_equipaA[8],jogo.jogadores_equipaA[9]);
  sleep(3);
 printf("\n%s empurra a bola para a baliza de curta distância.\n",jogo.jogadores_equipaA[9]);
  sleep(3);
 printf("\nO guarda-redes atira-se para o outro lado da baliza e mantém a bola afastada.\n");
  sleep(3);
 printf("\n56'	%s faz um cruzamento preciso para %s.\n",jogo.jogadores_equipaA[2],jogo.jogadores_equipaA[7]);
  sleep(3);
 printf("\n%s remate de longe.\n",jogo.jogadores_equipaA[7]);
  sleep(3);
 printf("\n%s defende a bola e consegue mantê-la afastada.\n",jogo.jogadores_equipaB[1]);
  sleep(3);
 printf("\n58'%s  bate a bola para a área.\n",jogo.jogadores_equipaB[11]);
  sleep(3);
 printf("\n%s  salta alto e redireciona a bola en direção à baliza.\n",jogo.jogadores_equipaB[9]);
  sleep(3);
 printf("\nO guarda redes sai bem da sua baliza e consegue defender.\n");
  sleep(3);
 printf("\n61'%s pensa num remate de longe, mas em vez disso entrega-a a %s.\n",jogo.jogadores_equipaA[9],jogo.jogadores_equipaA[8]);
  sleep(3);
 printf("\n%s  tenta a sua sorte de longe.\n",jogo.jogadores_equipaA[9]);
  sleep(3);
 printf("\nGOLO!! - A bola vai como um foguete por cima do guarda-redes e entra no fundo da baliza.\n");
 sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosSporting++;
       golosJogador.golosJogadorSporting[9]++;

 printf("\n67' %s  insulta o árbitro após uma decisão duvidosa.\n",jogo.jogadores_equipaB[4]);
  sleep(3);
 printf("\nCartão Amarelo - O árbitro mostra o cartão amarelo ao %s.\n",jogo.jogadores_equipaB[4]);
 sleep(3);
  jogo.cartao_amarelo++;

 printf("\n90'Final do Jogo Final do Jogo\n");
 sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o Sporting!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("O melhor marcador foi %s com %d golo\n", jogo.jogadores_equipaA[9], golosJogador.golosJogadorSporting[9]);

printf("\n");

menu_torneio3();

}

/**
*
*funcao olhanense_setubal que mostra o jogo do Olhanense vs Setubal
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

olhanense_setubal () {
                    
struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("olhanense.txt", "w+");
fp=fopen("olhanense.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Olhanense: ");
        scanf("\n%[^\n]s", aux);
        printf("Adicione a sua idade: ");
        scanf("%d", &idades.idadeJogadorOlhanense[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdades: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorOlhanense[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("setubal.txt", "w+");
        fp2 = fopen("setubal.txt", "a+");


        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Setubal: ");
        scanf("\n%[^\n]s", aux);
        printf("Adicione a sua idade: ");
        scanf("%d", &idades.idadeJogadorVitoriaSetubal[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\n", jogo.jogadores_equipaB[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);
       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);
       printf("\nO jogo vai começar,  Olhanense X Setúbal !\n");
       sleep(3);
       
  printf("\n0' Ponta-pé de saída Ponta-pé de saída");
    sleep(3);
printf("\n2'%s vê o %s a correr nas costas da defesa e faz o passe profundo.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaB[9]);
       sleep(3);
printf("\n%s livra-se da defesa e tenta colocar a bola por baixo do guarda-redes.\n",jogo.jogadores_equipaB[9]);
       sleep(3);
printf("\nGOLO!! - %s fecha bem o ângulo, mas a bola passa por baixo do seu corpo e entra na baliza.\n",jogo.jogadores_equipaA[1]);
       sleep(3);
printf("\nGolo anulado por fora de jogo. FORA DE JOGO! - %s foi apanhado fora de jogo pela defesa.\n",jogo.jogadores_equipaB[9]);
       sleep(3);
printf("\n12'	%s tem uma entrada tardia sobre %s.\n",jogo.jogadores_equipaB[8],jogo.jogadores_equipaA[7]);
       sleep(3);
printf("\nPontapé livre para o SC Olhanense a cerca de 25 metros.\n");
       sleep(3);
printf("\nCartão Amarelo - O árbitro não tem outra hipótese a não ser advertir o jogador.\n");
       sleep(3);
         jogo.cartao_amarelo++;
printf("\n%s cruza a bola para uma zona perigosa.\n",jogo.jogadores_equipaA[8]);
       sleep(3);
printf("\n%s encontra espaço e faz um cabeceamento poderoso.\n",jogo.jogadores_equipaA[9]);
       sleep(3);
printf("\nA bola passa por cima da barra.\n");
       sleep(3);
printf("\n17'	Um grande cruzamento para %s que cabeceia a bola para %s.\n",jogo.jogadores_equipaA[9],jogo.jogadores_equipaA[10]);
       sleep(3);
printf("\n%s coloca a sua cabeça na bola e ela parece estar a cair.\n",jogo.jogadores_equipaA[10]);
       sleep(3);
printf("\n%s chega-lhe com uma mão e consegue mantê-la afastada.\n",jogo.jogadores_equipaB[1]);
       sleep(3);
printf("\n18'	%s é obrigado a recuar no terreno e faz um passe para %s.\n",jogo.jogadores_equipaA[9],jogo.jogadores_equipaA[4]);
       sleep(3);
printf("\nGrande esforço de %s.\n",jogo.jogadores_equipaA[4]);
       sleep(3);
printf("\n%s agarra a bola com as duas mãos.\n",jogo.jogadores_equipaB[1]);
       sleep(3);
printf("\n40'	%s consegue um metro de espaço e cruza para a pequena área.\n",jogo.jogadores_equipaB[10]);
       sleep(3);
printf("\n%s foge ao desarme e tenta fazer passar a bola pelo guarda-redes.\n",jogo.jogadores_equipaB[6]);
       sleep(3);
printf("\n%s atira-se bem e defende-a com ambas as mãos.\n",jogo.jogadores_equipaA[1]);
       sleep(3);
printf("\n42'	%s consegue um metro de espaço e cruza para a pequena área.\n",jogo.jogadores_equipaB[10]);
       sleep(3);
printf("\n%s remata de dentro da área.\n",jogo.jogadores_equipaA[1]);
       sleep(3);
printf("\n%s atira-se rápido ao lance e atira a bola para longe.\n",jogo.jogadores_equipaB[6]);
       sleep(3);
printf("\n44'	%s cabeceia a bola para trás através da área, a partir de um pontapé livre..\n",jogo.jogadores_equipaA[10]);
       sleep(3);
printf("\n%s redireciona o cabeceamento em direção à baliza.\n",jogo.jogadores_equipaA[9]);
       sleep(3);
printf("\nO guarda-redes atira-se para o outro lado da baliza e mantém a bola afastada.\n");
       sleep(3);
printf("\n45'	 Intervalo\n");
       sleep(3);
printf("\n65'	%s derruba %s.\n",jogo.jogadores_equipaB[11],jogo.jogadores_equipaA[10]);
       sleep(3);
printf("\nCartão Amarelo - O árbitro mostra o cartão amarelo ao %s.\n",jogo.jogadores_equipaB[11]);
       sleep(3);
         jogo.cartao_amarelo++;
printf("\n70'	%s recebe a bola no limite da grande área.\n",jogo.jogadores_equipaA[11]);
       sleep(3);
printf("\nEle passa pelo seu marcador e chuta a bola para uma área perigosa.\n");
       sleep(3);
printf("\n%s direciona o remate à baliza a uma curta distância.\n",jogo.jogadores_equipaA[9]);
       sleep(3);
printf("\n%s defende facilmente.\n",jogo.jogadores_equipaB[1]);
       sleep(3);
printf("\n74'	%s vê-se em apuros e consegue jogar a bola de volta para %s.\n",jogo.jogadores_equipaA[11],jogo.jogadores_equipaA[5]);
       sleep(3);
printf("\n%s remate de longe.\n",jogo.jogadores_equipaA[5]);
       sleep(3);
printf("\nGOLO!! - A bola passa por cima do guarda-redes e entra.\n");
       sleep(3);
         golosEquipaA++;
         jogo.numero_golos++;
         golos.golosOlhanense++;
         golosJogador.golosJogadorOlhanense[5]++;
  
printf("\n81'	%s derruba %s.\n",jogo.jogadores_equipaB[11],jogo.jogadores_equipaA[7]);
       sleep(3);
printf("\nCartão Vermelho - O árbitro exibe o segundo amarelo ao %s e expulsa-o.\n",jogo.jogadores_equipaB[11],jogo.jogadores_equipaA[1]);
       sleep(3);
         jogo.cartao_vermelho++;
printf("\n82'	%s recebe a bola de longe e faz um cruzamento para a área.\n",jogo.jogadores_equipaB[8]);
       sleep(3);
printf("\n%s tenta um cabeceamento em arco.\n",jogo.jogadores_equipaB[6]);
       sleep(3);
printf("\nO guarda-redes mergulha para trás e consegue afastá-la para longe.\n");
       sleep(3);
  printf("\n90'Final do Jogo\n");
 sleep(3);
  printf("\nAssim acaba esta partida %d-%d para o Olhanense!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("O melhor marcador foi %s com %d golo\n", jogo.jogadores_equipaA[5], golosJogador.golosJogadorOlhanense[5]);

printf("\n");

menu_torneio4();


}

/**
*
*funcao sporting_benfica que mostra o jogo do Sporting vs Benfica
*\param op : int
*\param n : int
*\param golosEquipaA : int
*\param golosEquipaB : int
*\param aux[200] : char
*
*/

sporting_benfica() {
                    
struct jogo;
struct idades;
struct golos;
struct golosJogador;

FILE*fp;
FILE*fp2;

char aux[200];
int n,op;
int golosEquipaA = 0;
int golosEquipaB = 0;

//system("cls");
sleep(1);
printf("\n");
printf("Vai agora criar a sua equipa\n");
printf("\n");

fp=fopen("benfica.txt", "w+");
fp=fopen("benfica.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Benfica: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade");
        scanf("%d", &idades.idadeJogadorBenfica[n]);
        strcpy(jogo.jogadores_equipaA[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaA[n], idades.idadeJogadorBenfica[n]);
       }
        fprintf(fp, "\n");
        fclose(fp);

	fp2 = fopen("sporting.txt", "w+");
        fp2 = fopen("sporting.txt", "a+");

        for (n = 0; n < 11; n++)
        {

        printf("Adicione um novo jogador para a equipa do Sporting: ");
        scanf("\n%[^\n]s", aux);
	printf("Adicione a sua idade: ");
	scanf("%d", &idades.idadeJogadorSporting[n]);
        strcpy(jogo.jogadores_equipaB[n],aux);

        }

        for (n = 0; n < 11; n++) {
        fprintf(fp2,"Jogadores: %s\tIdade: %d\n", jogo.jogadores_equipaB[n], idades.idadeJogadorSporting[n]);
       }
        fprintf(fp2, "\n");
        fclose(fp2);

       printf("\n");
       
       printf("As equipas foram criadas com sucesso!\n");
       sleep(1);

       printf("\nO jogo vai iniciar dentro de segundos!...\n");
       sleep(3);

       printf("\nO jogo vai começar, Benfica X Sporting!\n");
       sleep(3);
       
       
  printf("\n0' Pontapé de saída\n");
    sleep(3);
 printf("\n1'	%s ganha a bola. Ele leva-a para a frente e faz um passe a rasgar a defesa.\n",jogo.jogadores_equipaB[5]);
    sleep(3);
 printf("\n%s remata de primeira.\n",jogo.jogadores_equipaB[10]);
    sleep(3);
 printf("\n%s baixa-se e desvia a bola para longe.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
 printf("\n3'	%s põe a bola nos pés do %s.\n",jogo.jogadores_equipaA[8],jogo.jogadores_equipaA[10]);
    sleep(3);
 printf("\n%s estoura.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
 printf("\n%s demonstra grandes reflexos ao fazer a defesa.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
 printf("\n41' %s faz um passe demasiado largo.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
 printf("\n%s leva a bola para a área.\n",jogo.jogadores_equipaA[11]);
    sleep(3);
 printf("\nEle tenta o canto inferior.\n");
    sleep(3);
 printf("\nGOLO!! - O guarda-redes é apanhado em desequilíbrio e a bola entra.\n");
    sleep(3);
       golosEquipaA++;
       jogo.numero_golos++;
       golos.golosBenfica++;
       golosJogador.golosJogadorBenfica[11]++;

printf("\n42'	 %s faz um passe na direção de %s.\n",jogo.jogadores_equipaA[8],jogo.jogadores_equipaA[2]);
    sleep(3);
printf("\n%s tenta um remate de longa distância.\n",jogo.jogadores_equipaA[2]);
    sleep(3);
printf("\n%s conseguiu mantê-la afastada de alguma maneira.\n",jogo.jogadores_equipaB[1]);
    sleep(3);
printf("\n44'	%s vê a corrida de %s e faz um passe que rasga a defesa.\n",jogo.jogadores_equipaA[6],jogo.jogadores_equipaA[10]);
    sleep(3);
printf("\n%s tenta passar uma por baixo do guarda-redes.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
printf("\nGOLO!! - A bola saltita passando pelo guarda-redes e passa a linha.\n");
    sleep(3);
 printf("\nGolo anulado por fora de jogo. FORA DE JOGO! %s estava à frente do último defesa quando a bola foi jogada.\n",jogo.jogadores_equipaA[10]);
    sleep(3);
 printf("\n45'	Intervalo\n");
    sleep(3);
 
 printf("\n47' %s leva a bola pelo relvado e passa-a a %s.\n",jogo.jogadores_equipaB[11],jogo.jogadores_equipaB[2]);
    sleep(3);
 printf("\n%s faz uma grande corrida pelo meio-campo.\n",jogo.jogadores_equipaB[2]);
    sleep(3);
 printf("\nEle entra na área e dispara-a para a baliza.\n");
    sleep(3);
 printf("\n%s atira-se rápido ao lance e atira a bola para longe.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
 printf("\n54'%s vai a linha final e cruza a bola para o limite da grande área.\n",jogo.jogadores_equipaA[7]);
    sleep(3);
 printf("\n%s finta um defesa e tenta encontrar o ângulo inferior.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
 printf("\nO guarda redes sai bem da sua baliza e consegue defender.\n");
    sleep(3);
 printf("\n65'%s insulta o árbitro após uma decisão duvidosa.\n",jogo.jogadores_equipaA[3]);
    sleep(3);
 printf("\nCartão Amarelo - O árbitro mostra o cartão amarelo ao %s.\n",jogo.jogadores_equipaA[3]);
    sleep(3);
      jogo.cartao_amarelo++;
      
 printf("\n67'%s recebe a bola no espaço aberto.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
 printf("\nEle consegue espaço para o cruzamento e envia a bola para a área.\n");
    sleep(3);
 printf("\n%s cabeceia para a baliza adversária.\n",jogo.jogadores_equipaB[7]);
    sleep(3);
 printf("\nÉ uma defesa normal para o %s.\n",jogo.jogadores_equipaB[9]);
    sleep(3);
 printf("\n71'%s faz um cruzamento para a marca de penálti.\n",jogo.jogadores_equipaB[7]);
    sleep(3);
 printf("\n%s cabeceia para a baliza.\n",jogo.jogadores_equipaB[6]);
    sleep(3);
 printf("\n%s chega ao outro lado da baliza e defende o remate.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
 printf("\n82'%s recebe a bola do guarda-redes e joga-a para a frente.\n",jogo.jogadores_equipaA[1]);
    sleep(3);
 printf("\n%s dispara um remate de longa distância.\n",jogo.jogadores_equipaA[6]);
    sleep(3);
 printf("\n%s mergulha e faz uma grande defesa.\n",jogo.jogadores_equipaB[5]);
    sleep(3);
 printf("\n88'%s cai depois de uma falta de %s.\n",jogo.jogadores_equipaB[6],jogo.jogadores_equipaA[11]);
    sleep(3);
 printf("\nPontapé livre para Sporting do lado direito da grande área.\n");
    sleep(3);
 printf("\nCartão Amarelo - %s entra para o bloco de notas do árbitro.\n",jogo.jogadores_equipaA[11]);
    sleep(3);
      jogo.cartao_amarelo++;
      
 printf("\n%s cruza a bola para a marca de penálti.\n",jogo.jogadores_equipaB[8]);
    sleep(3);
 printf("\n%s faz um cabeceamento firme para a baliza.\n",jogo.jogadores_equipaB[6]);
    sleep(3);
 printf("\nO guarda-redes mergulha para trás e consegue afastá-la para longe.\n");
 sleep(3);
  printf("\n90'Final do Jogo\n");
 sleep(3);
   printf("\nAssim acaba esta partida %d-%d para o Benfica!\n", golosEquipaA, golosEquipaB );
           sleep(3);

printf("\nForam mostrados %d cartões amarelos!\n", jogo.cartao_amarelo);
printf("Foram mostrados %d cartões vermelhos!\n", jogo.cartao_vermelho);
printf("O melhor marcador foi %s com %d golo\n", jogo.jogadores_equipaA[11], golosJogador.golosJogadorBenfica[11]);

printf("\n");

menu_torneio5();

}

/**
*
*funcao jogar que realiza os jogos
*\param op : int
*
*/

int jogar() {

//system("cls");
system("clear");
int op;
struct jogo;
 
    printf("Escolha um dos seguintes jogos para jogar!\n");
    printf("\n");
    sleep(1);
    printf("Belenenses X Porto\n");
    printf("Benfica X Nacional\n");
    printf("Arouca X Maritimo\n");
    printf("Olhanense X Paços de Ferreira\n");
    printf("Braga X Academica\n");
    printf("Sporting X Beira-Mar\n");
    printf("Rio Ave X Vitoria de Setubal\n");
    printf("Estoril vs Vitoria de Guimaraes\n");  
    printf("\n");
    printf("Escolha a primeira Equipa:\n");
    scanf("\n%[^\n]s", jogo.equipaA);
    printf("Escolha a segunda Equipa:\n");
    scanf("\n%[^\n]s", jogo.equipaB);

    if (!strcmp(jogo.equipaA, "Belenenses") && !strcmp(jogo.equipaB, "Porto"))
      {
      belenenses_porto();
      }
    if (!strcmp(jogo.equipaA, "Benfica") && !strcmp(jogo.equipaB, "Nacional"))
      {
      benfica_nacional();
      }
    if (!strcmp(jogo.equipaA, "Arouca") && !strcmp(jogo.equipaB, "Maritimo"))
      {
      arouca_maritimo();
      }
    if (!strcmp(jogo.equipaA, "Olhanense") && !strcmp(jogo.equipaB, "Paços de Ferreira"))
      {
      olhanense_pacos();
      }
    if (!strcmp(jogo.equipaA, "Braga") && !strcmp(jogo.equipaB, "Academica"))
      {
      braga_academica();
      }
    if (!strcmp(jogo.equipaA, "Sporting") && !strcmp(jogo.equipaB, "Beira-Mar"))
      {
      sporting_beiramar();
      }
    if (!strcmp(jogo.equipaA, "Rio Ave") && !strcmp(jogo.equipaB, "Vitoria de Setubal"))
      {
      rioAve_setubal();
      }
    if (!strcmp(jogo.equipaA, "Estoril") && !strcmp(jogo.equipaB, "Vitoria de Guimaraes"))
      {
      estoril_guimaraes();
      }
}

int jogar_quartos() {

//system("cls");
system("clear");
int op;
struct jogo;
 
    printf("Escolha um dos seguintes jogos para jogar!\n");
    printf("\n");
    sleep(1);
    printf("Porto X Benfica\n");
    printf("Olhanense X Maritimo\n");
    printf("Braga X Sporting\n");
    printf("Vitoria de Setubal X Vitoria de Guimaraes\n");
    printf("\n");
    printf("Escolha a primeira Equipa:\n");
    scanf("\n%[^\n]s", jogo.equipaA);
    printf("Escolha a segunda Equipa:\n");
    scanf("\n%[^\n]s", jogo.equipaB);

    if (!strcmp(jogo.equipaA, "Porto") && !strcmp(jogo.equipaB, "Benfica"))
      {
      porto_benfica();
      }
    if (!strcmp(jogo.equipaA, "Olhanense") && !strcmp(jogo.equipaB, "Maritimo"))
      {
      olhanense_maritimo();
      }
    if (!strcmp(jogo.equipaA, "Braga") && !strcmp(jogo.equipaB, "Sporting"))
      {
      braga_sporting();
      }
    if (!strcmp(jogo.equipaA, "Vitoria de Setubal") && !strcmp(jogo.equipaB, "Vitoria de Guimaraes"))
      {
      setubal_guimaraes();
      }     

}

int jogar_meias() {

//system("cls");
system("clear");
int op;
struct jogo;
 
    printf("Escolha um dos seguintes jogos para jogar!\n");
    printf("\n");
    sleep(1);
    printf("Benfica X Olhanense\n");
    printf("Sporting X Vitoria de Setubal\n");    
    printf("\n");
    printf("Escolha a primeira Equipa:\n");
    scanf("\n%[^\n]s", jogo.equipaA);
    printf("Escolha a segunda Equipa:\n");
    scanf("\n%[^\n]s", jogo.equipaB);

    if (!strcmp(jogo.equipaA, "Benfica") && !strcmp(jogo.equipaB, "Olhanense"))
      {
      benfica_olhanense();
      }
    if (!strcmp(jogo.equipaA, "Sporting") && !strcmp(jogo.equipaB, "Vitoria de Setubal"))
      {     
      sporting_setubal();
}
}

jogar_3e4() {

//system("cls");
system("clear");
 
printf("Vai jogar Olhanense X Setubal\n");
sleep(3);

olhanense_setubal();
    
}

int jogar_final() {

//system("cls");
system("clear");
 
printf("Vai jogar Sporting X Benfica\n");
sleep(3);

sporting_benfica();
    
}


/**
*
*funcao arvore_torneio que vai mostrar os jogos dos 16 avos
*
*/

int arvore_torneio () {
//system("cls");
system("clear");

printf("|------------------------|\n");
printf("|  Belenenses x FC Porto |----|\n");
printf("|------------------------|    |\n");
printf("                              |\n");
printf("                              |\n");
printf("|------------------------|    |\n");
printf("| SL Benfica x Nacional  |----|\n");
printf("|------------------------|    |\n");
printf("                              |\n");
printf("                              |\n");
printf("|------------------------|    |\n");
printf("|   Arouca vs Maritimo   |----|\n");
printf("|------------------------|    |\n");
printf("                              |\n");
printf("                              |\n");
printf("|------------------------|    |\n");
printf("|    Olhanense x Paços   |----|\n");
printf("|------------------------|    |\n");
printf("                              |\n");
printf("                              |\n");
printf("|------------------------|    |\n");
printf("|    Braga X Académica   |----|\n");
printf("|------------------------|    |\n");
printf("                              |\n");
printf("                              |\n");
printf("|------------------------|    |\n");
printf("|  Sporting X Beira-Mar  |----|\n");
printf("|------------------------|    |\n");
printf("                              |\n");
printf("                              |\n");
printf("|------------------------|    |\n");
printf("|    Rio Ave x Setubal   |----|\n");
printf("|------------------------|    |\n");
printf("                              |\n");
printf("                              |\n");
printf("|------------------------|    |\n");
printf("|   Estoril x Guimaraes  |----|\n");
printf("|------------------------|     \n");


printf("\n");
sleep(5);
jogar();

}

int pesquisar_jogador () { 
//system ("cls");
system("clear");
int op;


do
    {
        printf("\n");
        printf("1 - Adicionar Jogador\n");
        printf("2 - Eliminar Jogador(es)\n");
        printf("3 - Listar Jogador(es)\n");
        printf("4 - Procurar Jogador(es)\n");
        printf("5 - Editar Jogador(es)\n");
        printf("0 - Retroceder\n");
        scanf("%d", &op);
                
        switch (op)
        {
            case 1:
                 adiciona_jogador();
                 break;
            case 2:
                 eliminar_jogador();
                  break;
            case 3:
                 listar_jogador();
		 break;
            case 4:
                 procurar_jogador();
		 break;
            case 5:
                 editar_jogador();
		 break;
            case 0:
                  return 0;
            default:
                 printf("Operação Não Implementada\n");
            break;
        }


} while( op != 0);
}

/**
*
*funcao editar_jogador do tipo void que vai editar o Jogador a querer adicionar
*\param i : int
*\param l : int
*\param found : int
*\param ch : int
*\param query : char
*\param nome : char
*
*/

void editar_jogador () {
int i,l,found,ch;
     char query[20],nome[20];
     struct jogador;
     FILE *fp,*ft;
//system("cls");
system("clear");
fp=fopen("fichJogadores.txt","r");
ft=fopen("ct.txt","w");
fflush(stdin);
printf("Edit contact\n===============================\n\n\tEnter the name of contact to edit:");
scanf("\n%[^\n]s",nome);
while(fread(&jogador,sizeof(jogador),1,fp)==1)
{
if(strcmp(nome,jogador.nome)!=0)
fwrite(&jogador,sizeof(jogador),1,ft);
}

fflush(stdin);
printf("\n\n..::Editing '%s'\n\n",nome);
printf("..::Name(Use identical):");
scanf("\n%[^\n]s", jogador.nome);
fflush(stdin);
printf("..::sigla:");
scanf("%s", jogador.sigla);
fflush(stdin);
printf("..::n.camisola:");
 scanf("%d",&jogador.numero_camisola );
fflush(stdin);
printf("..::naturalidade:");
scanf("\n%[^\n]s", jogador.naturalidade);
printf("\n");
 printf("Posicao: ");
    scanf("\n%[^\n]s", jogador.posicao);
    fflush(stdin);
    printf("Dia de nascimento: ");
    scanf("%d", &jogador.dia);
fflush(stdin);

    printf("Mes de nascimento: ");
    scanf("%d", &jogador.mes);
fflush(stdin);

    printf("Ano de nascimento: ");
    scanf("%d", &jogador.ano);
printf("\n");
fwrite(&jogador,sizeof(jogador),1,ft);
fclose(fp);
fclose(ft);
remove("fichJogadores.txt");
rename("ct.txt","fichJogadores.txt");
}

/**
*
*funcao procurar_jogador do tipo void que vai procurar o jogador que o utilizador quer
*\param i : int
*\param l : int
*\param found : int
*\param ch : int
*\param query : char
*\param nome : char
*
*/

void procurar_jogador() {
     int i,l,found,ch;
     char query[20],nome[20];
     struct jogador;
     FILE *fp;
//system("cls");
system("clear");
do
{
found=0;
printf("Procurar Nome\n");
printf("====================\n");
printf("Nome a Procurar: ");
fflush(stdin);
scanf("\n%[^\n]s", query);
l=strlen(query);
fp=fopen("fichJogadores.txt","r");
 
//system("cls");
system("clear");
printf("Procurar resultado para '%s'\n================================\n",query);
while(fread(&jogador,sizeof(jogador),1,fp)==1)
{
for(i=0;i<=l;i++)
nome[i]=jogador.nome[i];//name[i]=list.name[i];
nome[l]='\0';
if(strcmp(nome,query)==0)//if(stricmp(name,query)==0)
{

printf("Nome: %s\nSigla: %s\nNumero da Camisola: %d\nNaturalidade: %s\nPosição: %s\nData de Nascimento: %d/%d/%d\nIdade: %d anos\n\n",jogador.nome, jogador.sigla, jogador.numero_camisola, jogador.naturalidade, jogador.posicao, jogador.dia, jogador.mes, jogador.ano, 2013-jogador.ano);
 
found++;
if (found%8==0)
{
printf("Carregar qualquer botão para continuar");
getchar();
}
}
}
 
if(found==0)
printf("Nao foi encontrado\n!");
else
printf("%d resultado(s) encontrado(s)!\n",found);
fclose(fp);
printf("Tentar de Novo?\n");
printf("1 - Sim\n"); 
printf("0 - Nao\n");
scanf("%d",&ch);
}while(ch!=0);

}

/**
*
*funcao adiciona_jogador do tipo int que vai adicionar um Jogador
*\param i : int
*\param l : int
*\param found : int
*\param ch : int
*\param query : char
*\param nome : char
*
*/

int adiciona_jogador() {
   int i,l,found,ch;
 
     char query[20],nome[20];
     struct jogador;
     FILE *fp;
 
//system("cls");
system("clear");
fp=fopen("fichJogadores.txt","a");
fflush(stdin);
printf("\nAdicionar Jogador\n==========================\n");
printf("Nome: ");
scanf("\n%[^\n]s", jogador.nome);
 printf("Sigla da equipa onde joga: ");
    scanf("%s", jogador.sigla);
fflush(stdin);
 printf("Numero da Camisola: ");
 scanf("%d",&jogador.numero_camisola );
fflush(stdin);
  printf("Naturalidade: ");
scanf("\n%[^\n]s", jogador.naturalidade);
    
    printf("Posicao: ");
    scanf("\n%[^\n]s", jogador.posicao);
    
    printf("Dia de nascimento: ");
    scanf("%d", &jogador.dia);


    printf("Mes de nascimento: ");
    scanf("%d", &jogador.mes);


    printf("Ano de nascimento: ");
    scanf("%d", &jogador.ano);

printf("\n");
  
fwrite(&jogador,sizeof(jogador),1,fp);
fclose(fp);
}

/**
*
*funcao eliminar_jogador do tipo int que vai eliminar o jogador anteriormente adiconado
*\param i : int
*\param l : int
*\param found : int
*\param ch : int
*\param query : char
*\param nome : char
*/

int eliminar_jogador () {
    struct jogador;
    FILE *fp,*ft;
     int i,l,found,ch;
 char query[20],nome[20];
//system("cls");
system("clear");
fflush(stdin);
printf("\nEliminar Jogador\n==========================\nQual o nome do jogador que quer eliminar: ");
scanf("\n%[^\n]s", nome);
printf("\nJogador Eliminado com sucesso!");
fp=fopen("fichJogadores.txt","r");
ft=fopen("temp.dat","w");
while(fread(&jogador,sizeof(jogador),1,fp)!=0)
if (strcmp(nome,jogador.nome)!=0)
fwrite(&jogador,sizeof(jogador),1,ft);
fclose(fp);
fclose(ft);
remove("fichJogadores.txt");
rename("temp.dat","fichJogadores.txt");
}

/**
*
*funcao listar_jogador do tipo void que vai listar os jogadores já adicionados
*\param i : int
*\param found : int
*
*/


void listar_jogador (){
system("cls");
struct jogador;
FILE *fp; 
int i,found;
printf("\nLISTA JOGADORES\n\n");
printf("==================================================\n");

for(i=97;i<=122;i=i+1) {

fp=fopen("fichJogadores.txt","r");
fflush(stdin);
found=0;
while(fread(&jogador,sizeof(jogador),1,fp)==1) {
if(jogador.nome[0]==i || jogador.nome[0]==i-32) {
printf("Nome: %s\nSigla: %s\nNumero da Camisola %d\nNaturalidade: %s\nPosição: %s\nData de Nascimento: %d/%d/%d\nIdade: %d anos\n\n\n",jogador.nome, jogador.sigla, jogador.numero_camisola, jogador.naturalidade, jogador.posicao, jogador.dia, jogador.mes, jogador.ano, 2013-jogador.ano);

found++;
}
}
if(found!=0) {
printf("==================================================\n\n",i-32,found);
getchar();
}
fclose(fp);

}
}

/**
*
*funcao pesquisar_equipa do tipo int 
*\param op : int
*
*/


int pesquisar_equipa () {
system("cls");

int op;


do
    {
        printf("\n");
        printf("1 - Adicionar Equipa\n");
        printf("2 - Eliminar Equipa(s)\n");
        printf("3 - Listar Equipa(s)\n");
        printf("0 - Retroceder\n");
        scanf("%d", &op);
                
        switch (op)
        {


            case 1:
                 adicionar_equipa();
                 break;
            case 2:
                 eliminar_equipa();
                  break;
            case 3:
                 listar_equipa();
            case 0:
                 return 0;
            default:
                 printf("Operação Não Implementada\n");
            break;
        }


} while( op != 0);


}

/**
*
*funcao adicionar_equipa do tipo int que vai adicionar uma equipa
*\param aux : char
*\param n : int
*
*/


int adicionar_equipa () {
system("cls");

struct equipa;
FILE*fp;
    
      fp=fopen("fichEquipas.txt","a+");
    
    printf("Nome do treinador: ");
    scanf("\n%[^\n]s", equipa.nome_treinador);
    
    printf("Nome da equipa: ");
    scanf("\n%[^\n]s", equipa.nome_equipa);


    printf("Nome de um jogador: ");
    scanf("\n%[^\n]s", equipa.nome_jogadores[0]);


        char aux[200];
        int n;
        for (n = 0; n < 11; n++)
        {


        printf("Adicione um novo jogador: ");
        scanf("\n%[^\n]s", aux);
        strcpy(equipa.nome_jogadores[n],aux);


        }


    fprintf(fp,"Treinador: %s\nEquipa: %s \n",equipa.nome_treinador, equipa.nome_equipa);
        
        for (n = 0; n < 11; n++) {
    fprintf(fp,"Jogadores: %s\n", equipa.nome_jogadores[n]);
}
    fprintf(fp, "\n");
    fclose(fp);
    printf("Equipa adicionada com sucesso!\n");
    getchar();


}

/**
*
*funcao eliminar_equipa do tipo int que vai eliminar uma equipa
*\param opcao : int
*
*/

int eliminar_equipa () {
system("cls");

struct equipa;

FILE*fp;


int opcao;
    
      fp=fopen("fichEquipas.txt","r"); 
    
    printf("Tem a certeza que quer remover as equipas?\n");
    printf("1 - Sim\n");
    printf("2 - Não\n");
    scanf("%d", &opcao);


    if(opcao == 1) {
    fp=fopen("fichEquipas.txt","w+");
    printf("Aguarde uns instantes\n");
    sleep(2);
    printf(".\n");
    sleep(1);
    printf(".\n");
    printf("Todo o conteúdo foi removido!\n");
    }
}

/**
*
*funcao listar_equipa do tipo int que vai listar as equipas já adicionadas
*\param caracter : int
*
*/


int listar_equipa () {
system("cls");

struct equipa;

FILE*fp;
    
    int caracter;
     fp=fopen("fichEquipas.txt","r");
      if (fp==NULL)
      printf ("Impossivel abrir o ficheiro\n");
      else
      printf("Ficheiro aberto com sucesso\n"); 
    while((caracter=fgetc(fp))!=EOF) {
    putchar(caracter);
}
    pesquisar_equipa();       
}

