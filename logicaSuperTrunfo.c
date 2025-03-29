#include <stdio.h> 

int main(){

//declaração das cartas 

char estado;
char codigo [20];
char nomedacidade [50];
int populacao;
float area, pib;
int turisticos;
float densidadepoulacional;
float pibpercapita;
int escolha1;


//infomações fornecidas

printf("Digite o estado a seguir: ");
scanf(" %c", &estado);

printf("Digite o código da sua primeira carta:  ");
scanf("%s", &codigo);

printf("Digite o nome da sua primeira carta:  ");
scanf("%s", nomedacidade);


printf("Digite a população da sua primeira carta seguir:  ");
scanf("%d", &populacao);


printf("Digite a área da sua primeira carta a seguir:  ");
scanf("%f", &area);


printf("Digite o PIB da sua primeira carta a seguir:  ");
scanf("%f", &pib);


printf("Digite os pontos turíticos da sua primeira carta a seguir:  ");
scanf("%d", &turisticos);


//calculo da densidade populacional 

densidadepoulacional = (float) populacao / area;

//calculo do pib per capita

pibpercapita = (float) ( pib / populacao ) * 1000000000;



//declaração das cartas 

char estade;
char codig [20];
char nomedacid [50];
int popul;
float are, pb;
int turistic;
float densidadepoulaciona;
float pibpercapia;
int cartas;
int informacao;
int escolha2;

//infomações fornecidas

printf("Digite o estado a seguir:  ");
scanf(" %c", &estade);


printf("Digite o código da sua segunda carta:  ");
scanf(" %s", &codig);


printf("Digite o nome da sua segunda carta:  ");
scanf(" %s", nomedacid);


printf("Digite a população da sua segunda carta seguir:  ");
scanf(" %d", &popul);


printf("Digite a área da sua segunda carta a seguir:  ");
scanf(" %f", &are);


printf("Digite o PIB da sua segunda carta a seguir:  ");
scanf(" %f", &pb);


printf("Digite os pontos turíticos da sua segunda carta a seguir:  ");
scanf(" %d", &turistic);


//calculo da densidade populacional 

densidadepoulaciona = (float) popul / are;

//calculo do pib per capita

pibpercapia = (float) ( pb / popul ) * 1000000000;


        printf("***Opções para o Primeiro jogador querer comparar***\n");
        printf("1. População\n" );
        printf("2. Área\n " );
        printf("3. PIB\n ");
        printf("4. Pontos turisticos\n ");
        printf("5. Densidade populacional\n ");
        printf("Escolha a opção que queira comparar: ");
        scanf("%d", &escolha1);


        printf("***Opções para o segundo jogador querer comparar***\n");
        printf("1. População\n" );
        printf("2. Área\n " );
        printf("3. PIB\n ");
        printf("4. Pontos turisticos\n ");
        printf("5. Densidade populacional\n ");
        printf("Escolha a opção que queira comparar: ");
        scanf("%d", &escolha2);
 
        if (escolha1 == escolha2){
            printf("Os jogadores escolheram a mesma opção. Favor tentar novamente\n");
        }else {
            switch (escolha1){
                       
        case 1:
        populacao > popul? 
        printf("A carta 1 venceu pois tem mais população que a carta 2. %s tem %d e %s tem %d\n", nomedacidade, populacao, nomedacid, popul) : 
        printf("A carta 2 venceu pois tem mais área que a carta 1. %s tem %d e %s tem %d\n", nomedacid, popul, nomedacidade, populacao);
        break;
       
        case 2:
        area > are? 
        printf("A carta 1 venceu pois tem mais área que a carta 2. %s tem %.2f e %s tem %.2f\n", nomedacidade, area, nomedacid, are) : 
        printf("A carta 2 venceu pois tem mais área que a carta 1. %s tem %.2f e %s tem %.2f\n", nomedacid, are, nomedacidade, area);
        break;

        case 3:
        pib > pb? 
        printf("A carta 1 venceu pois tem mais PIB que a carta 2. %s tem %.2f e %s tem %.2f\n", nomedacidade, pib, nomedacid, pb) : 
        printf("A carta 2 venceu pois tem mais PIB que a carta 1. %s tem %.2f e %s tem %.2f\n", nomedacid, pib, nomedacidade, pb);
        break;

        case 4:
        turisticos > turistic? 
        printf("A carta 1 venceu pois tem mais pontos turisticos que a carta 2. %s tem %d e %s tem %d\n", nomedacidade, turisticos, nomedacid, turistic) : 
        printf("A carta 2 venceu pois tem mais pontos turisticos que a carta 1. %s tem %d e %s tem %d\n", nomedacid, turistic, nomedacidade, turisticos);
        break;

        case 5:
        densidadepoulacional < densidadepoulaciona? 
        printf("A carta 1 venceu pois tem menos densidadepoulacional que a carta 2. %s tem %.2f e %s tem %.2f\n", nomedacidade, densidadepoulacional, nomedacid, densidadepoulaciona) : 
        printf("A carta 2 venceu pois tem menos densidadepoulacional que a carta 1. %s tem %.2f e %s tem %.2f\n", nomedacid, densidadepoulaciona, nomedacidade, densidadepoulacional);
        break;
    
        default:
        printf("Ocorreu um erro. Tente novamente digitando entre ( 1 até 5 ).\n");
     }

        switch (escolha2){
                       
        case 1:
        populacao > popul? 
        printf("A carta 1 venceu pois tem mais população que a carta 2. %s tem %d e %s tem %d\n", nomedacidade, populacao, nomedacid, popul) : 
        printf("A carta 2 venceu pois tem mais área que a carta 1. %s tem %d e %s tem %d\n", nomedacid, popul, nomedacidade, populacao);
        break;
    
        case 2:
        area > are? 
        printf("A carta 1 venceu pois tem mais área que a carta 2. %s tem %.2f e %s tem %.2f\n", nomedacidade, area, nomedacid, are) : 
        printf("A carta 2 venceu pois tem mais área que a carta 1. %s tem %.2f e %s tem %.2f\n", nomedacid, are, nomedacidade, area);
        break;
        
        case 3:
        pib > pb? 
        printf("A carta 1 venceu pois tem mais PIB que a carta 2. %s tem %.2f e %s tem %.2f\n", nomedacidade, pib, nomedacid, pb) : 
        printf("A carta 2 venceu pois tem mais PIB que a carta 1. %s tem %.2f e %s tem %.2f\n", nomedacid, pib, nomedacidade, pb);
        break;

        case 4:
        turisticos > turistic? 
        printf("A carta 1 venceu pois tem mais pontos turisticos que a carta 2. %s tem %d e %s tem %d\n", nomedacidade, turisticos, nomedacid, turistic) : 
        printf("A carta 2 venceu pois tem mais pontos turisticos que a carta 1. %s tem %d e %s tem %d\n", nomedacid, turistic, nomedacidade, turisticos);
        break;

        case 5:
        densidadepoulacional < densidadepoulaciona? 
        printf("A carta 1 venceu pois tem menos densidadepoulacional que a carta 2. %s tem %.2f e %s tem %.2f\n", nomedacidade, densidadepoulacional, nomedacid, densidadepoulaciona) : 
        printf("A carta 2 venceu pois tem menos densidadepoulacional que a carta 1. %s tem %.2f e %s tem %.2f\n", nomedacid, densidadepoulaciona, nomedacidade, densidadepoulacional);
        break;

        default:
        printf("Ocorreu um erro. Tente novamente digitando entre ( 1 até 5 ).\n");
 }

}    

        printf("Gostaria de ver os dados das cartas?\n");
        printf("1. Sim\n");
        printf("2. Não\n");
        printf("Opção 1 ou 2 ?\n");
        scanf("%d", &informacao);

        switch (informacao){
        case 1:

        printf("***Dados da Primeira Carta***\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da cidade : %s\n", nomedacidade);
        printf("População: %d\n", populacao);
        printf("Área : %.2f km²\n", area);
        printf("PIB : %.2f bilhões de reais\n", pib);
        printf("Pontos turísticos : %d\n", turisticos);
        printf("Densidade populacional : %.2f hab/km²\n", densidadepoulacional);
        printf("Pib per capita : %.2f reais\n", pibpercapita);
        
        printf("***Dados da Segunda Carta***\n");
        printf("Estado: %c\n", estade);
        printf("Código: %s\n", codig);
        printf("Nome da cidade : %s\n", nomedacid);
        printf("População: %d\n", popul);
        printf("Área : %.2f km²\n", are);
        printf("PIB : %.2f bilhões de reais\n", pb);
        printf("Pontos turísticos : %d\n", turistic);
        printf("Densidade populacional : %.2f hab/km²\n", densidadepoulaciona);
        printf("Pib per capita : %.2f reais\n", pibpercapia);
        break;

        case 2:
        printf("Obrigado por ter jogado, espero ter gostado!!\n");
        break;

        default:
        printf("Opção inválida. Tente novamente.");
        break;
    }
}