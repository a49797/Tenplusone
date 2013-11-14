#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int menu_principal ();
int comecar_torneio ();
int pesquisar_equipa ();
int pesquisar_jogador ();
//void seleccionar_equipas ();
void pesquisar_resultados ();
void consultar_torneio ();

struct jogo {

char equipas[30];
int golos_equipa;
char marcadores_golo[30];
char cartoes_jogadores[10];
int resultado_final;
int penaltys;

};

struct estatisticas {

int numero_golos;
char equipas_mais_golos_marcados [30];
char equipa_mais_golos_sofridos [30];
char equipa_media_idade_mais_alta [30];
char equipa_media_idade_mais_baixa [30];
char jogador_mais_velho [20];
char jogador_mais_novo [20];
char melhores_marcadores [20];
char classificacoes [300];

};

int main ( ) {

    char name[50];

        printf("Bem-Vindo/a ao TenPlusOne\n");
	printf("Insira o seu nome\n");
	scanf("%[^\n]s", name);

	printf("A criar nome\n");
	sleep(1);
	printf(".\n");
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
	sleep(1);
	printf(".\n\n");
	
	menu_principal ();

return 0;

}

int menu_principal () {
	
	
    int opcao;

	do
    {
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
		printf("Até à próxima jogador!\n");
		 sleep(2);
		 printf("Aguarde enquanto guardamos os seus dados!\n");
		 sleep(2);
		 printf("Aguarde enquanto encerramos a aplicação!\n");
		 sleep(3);
		return 0;
		break;
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
		 printf("Tente novamente\n");
		 break;
	}


} while( opcao != 0);

}

int comecar_torneio () {

int op;

do
    {
	printf("\n");
        printf("1 - Seleccionar Equipas\n");
        printf("2 - Consultar torneio\n");
	printf("3 - Retroceder\n");
	scanf("%d", &op);
		
	switch (op)
        {
	    
            case 1:
                 //seleccionar_equipas();
		 break;

            case 2:
		 consultar_torneio();
 		 break;

	    case 3:
		 return 0;
		 break;

            default:
		 printf("Tente novamente\n");
	         break;
	}

} while( op != 0);
}

int pesquisar_equipa() {

int op;

do
    {
	printf("\n");
        printf("1 - Adicionar Equipa\n");
        printf("2 - Eliminar Equipa\n");
	printf("3 - Listar Equipa(s)\n");
	printf("4 - Retroceder\n");
	scanf("%d", &op);
		
	switch (op)
        {
            case 1:
                 adiciona_equipa();
		 break;
            case 2:
		 eliminar_equipa();
 		 break;
            case 3:
		 listar_equipa();
		 break;
	    case 4:
		 return 0;
		 break;
	    default:
		 printf("Tente novamente\n");
	         break;
	}

} while( op != 0);

}

void consultar_torneio () {}

int pesquisar_jogador () {

int op;

do
    {
	printf("\n");
        printf("1 - Adicionar Jogador\n");
        printf("2 - Eliminar Jogador\n");
	printf("3 - Listar Jogador(es)\n");
	printf("4 - Retroceder\n");
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
		 return 0;
	    default:
		 printf("Tente novamente\n");
	         break;
	}

} while( op != 0);

}
 
int adiciona_jogador () {

struct jogador {

int numero_camisola;
char nome_jogador[100];
char naturalidade[50];
char posicao[20];
int data_nascimento;

} jogador;

    FILE*fp; 
   fp = fopen("fichJogadores.txt","a+");

      if (fp==NULL)
      printf ("Impossivel abrir o ficheiro\n");
      else
      printf("Ficheiro aberto com sucesso\n"); 

   fp=fopen("fichJogadores.txt","a+");
  
    printf("Numero da Camisola: ");
    scanf("%d", &jogador.numero_camisola);
    
    printf("Nome do Jogador: ");
    scanf("\n%[^\n]s", jogador.nome_jogador);

    printf("Naturalidade: ");
    scanf("\n%[^\n]s", jogador.naturalidade);
    
    printf("Posicao: ");
    scanf("\n%[^\n]s", jogador.posicao);
    
    printf("Data de nascimento: ");
    scanf("%d", &jogador.data_nascimento);

    fprintf(fp,"%d %s %s %s %d",jogador.numero_camisola,jogador.nome_jogador,
 jogador.naturalidade, jogador.posicao, jogador.data_nascimento);

    fprintf(fp, "\n");
    fclose(fp);
    printf("Jogador Adicionado com sucesso!\n");
    getchar();
}

int eliminar_jogador() {}

int listar_jogador() {
int caracter;
FILE*fp;

printf("\n");

fp=fopen("fichJogadores.txt", "r");
while((caracter=fgetc(fp))!=EOF)
    putchar(caracter);
     }

int adiciona_equipa () { 

struct {

char nome_treinador[20];
char nome_equipa[20];
char nome_jogadores[100];

} equipa;

    FILE*fp;

      fp=fopen("fichEquipas.txt","a+");
      if (fp==NULL)
      printf ("Impossivel abrir o ficheiro\n");
      else
      printf("Ficheiro aberto com sucesso\n"); 
    
    fp=fopen("fichEquipas.txt","a+");

    fflush(stdin);     

    printf("Nome de Treinador: ");
    scanf("\n%[^\n]s", equipa.nome_treinador);

    printf("Nome da Equipa: ");
    scanf("\n%[^\n]s", equipa.nome_equipa);

    printf("Nome de um Jogador: ");
    scanf("\n%[^\n]s", equipa.nome_jogadores);

    fprintf(fp,"%s %s %s\n", equipa.nome_treinador, equipa.nome_equipa, ,equipa.nome_jogadores);
    fclose(fp);
    printf("Equipa adicionada com sucesso!\n");
    getchar();
}

int eliminar_equipa() {}

int listar_equipa() {
int caracter;
FILE*fp;

fp=fopen("fichEquipas.txt", "r");
while((caracter=fgetc(fp))!=EOF)
    putchar(caracter);
     }
