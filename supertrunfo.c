#include <stdio.h>

// Desafio Super Trunfo 
// Tema 1 - Comparando Cartas do Super Trunfo

int main() {
    
    // Declaração das Variáveis para a Carta 01

    char estado1[01]; // declaração da variável tipo char com nome estado1
    char codigo1[03]; // declaração da variável tipo char com nome codigo1
    char cidade1[30]; // declaração da variável tipo char com nome cidade1
    unsigned long int populacao1; // declaração da variável tipo int com nome populacao1 - positivo e extremamente grande
    float area1; // declaração da variável tipo float com nome area1
    float pib1; // declaração da variável tipo float com nome pib1
    int pontosturisticos1; // declaração da variável tipo int com nome pontosturisticos1
    
    // novas variáveis para a carta 01
    float densidadepop1 = populacao1/area1; 
	float pibcapita1 = pib1/populacao1;
    
    // Declaração Super_Poder para a carta 01
    unsigned long int superpoder1 = (populacao1 + area1 + pib1 + pontosturisticos1 + pibcapita1 + 1/densidadepop1);

    // Declaração das Variáveis para a Carta 2

    char estado2[01]; // declaração da variável tipo char com nome estado2
    char codigo2[03]; // declaração da variável tipo char com nome codigo2
    char cidade2[30]; // declaração da variável tipo char com nome cidade2
    unsigned int populacao2; // declaração da variável tipo int com nome populacao2 - positivo e extremamente grande
    float area2; // declaraçãop da variável tipo float com nome area2
    float pib2; // declaração da variável tipo float com nome pib2
    int pontosturisticos2; // declaração da variável tipo int com nome pontosturisticos2

    // novas variáveis para a carta 02

    float densidadepop2 = populacao2/area2;
	float pibcapita2 = pib2/populacao2;
    
    // Declaração Super_Poder para a carta 02
    unsigned long int superpoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 +pibcapita2 + 1/densidadepop2);
    
    // Cadastro das Cartas:
    
    // Realização do cadastro para a Carta 01

    printf("Carta 01:\n");

    printf("Digite o nome do Estado:\n ");
    scanf(" %s", &estado1);

    printf("Digite o CÃ³digo da Cidade:\n ");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade:\n ");
    scanf(" %s", &cidade1);

    printf("Digite a quantidade da População:\n ");
    scanf("%lu", &populacao1);

    printf("Digite a Ãrea em  km² da Cidade:\n ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade em bilhões:\n ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos da Cidade:\n ");
    scanf("%d", &pontosturisticos1);


    // Realização do cadastro para a Carta 02

    printf("Carta 02:\n");

    printf("Digite o nome do Estado:\n ");
    scanf(" %s", &estado2);

    printf("Digite o Código da Cidade:\n ");
    scanf("%s", &codigo2);

    printf("Digite o nome da Cidade:\n ");
    scanf(" %s", &cidade2);

    printf("Digite a quantidade da População:\n ");
    scanf("%lu", &populacao2);

    printf("Digite a Área em  km² da Cidade:\n ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade em bilhões:\n ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos da Cidade:\n ");
    scanf("%d", &pontosturisticos2);

    // Exibição dos Dados das Cartas:
    
    // Exibição dos dados para a Carta 01

    printf("\n--- Carta 01 ---\n");

    printf("Nome do Estado: %s\n", estado1);

    printf("CÃ³digo da Cidade: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", cidade1);

    printf("População: %lu\n", populacao1);

    printf("Área da Cidade: %.2f km²\n", area1);

    printf("PIB da Cidade: R$ %.2f bilhões\n", pib1);

   printf("Pontos Turísticos: %d\n", pontosturisticos1);

   // exibição das novas variáveis para a carta 01 

    printf("A Densidade Populacional: %.2f hab/km²\n", densidadepop1);
   
	printf("O PIB per Capita: %.2f reias\n", pibcapita1);

    // Exibição do Super Poder da carta 01
    printf("superpoder1:%lu\n", superpoder1);

    // Exibição dos dados para a Carta 02

    printf("\n--- Carta 02 ---\n");

    printf("Nome do Estado: %s\n", estado2);

    printf("Código da Cidade: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", cidade2);

    printf("População: %lu\n", populacao2);

    printf("Área da Cidade: %.2f km²\n", area2);

    printf("PIB da Cidade: R$ %.2f bilhões\n", pib2);

    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    // exibição das novas variáveis para a carta 02

    printf("A Densidade Populacional: %.2f hab/km²\n", densidadepop2);
	
    printf("O PIB per Capita: %.2f reais\n", pibcapita2);
    
    // Exibição do Super Poder da carta 02
    printf("superpoder2:%lu\n", superpoder2);
    
    
    // Realização da comparação entre as castas 01 e 02 com relação apenas com o PIB

	printf("O valor da carta 1: \n", estado1, pib1);
	
    printf("O valor da carta 2: \n", estado2, pib2);

	if (pib1 > pib2){
	
		printf("o PIB da carta 1 venceu! \n");

	} else {

		printf(" o PIB da carta 1 perdeu! \n");

	}

    return 0;
}