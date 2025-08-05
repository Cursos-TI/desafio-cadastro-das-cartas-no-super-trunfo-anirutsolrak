#include <stdio.h>

int main() {
    // separei em dois blocos pra ficar mais organizado

    // Variáveis para a CARTA 1
    char  estado1;
    char  codigo1[4]; // "A01" mais o caractere nulo '\0' = 4 caracteres
    char  cidade1[50];
    int   populacao1;
    float area1;
    float pib1;
    int   pontosTuristicos1;

    // Variáveis para a CARTA 2
    char  estado2;
    char  codigo2[4];
    char  cidade2[50];
    int   populacao2;
    float area2;
    float pib2;
    int   pontosTuristicos2;

    /*
     * =====================================================================
     *  ENTRADA DE DADOS - CARTA 1
     * =====================================================================
    */
    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite o Estado (APENAS UMA LETRA de A-a-H) e pressione Enter: ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (A letra do estado + um numero de 01 a 04 ex: B02) e pressione Enter: ");
    scanf("%s", codigo1);

    getchar(); 

    printf("Digite o Nome da Cidade e pressione Enter: ");
    fgets(cidade1, 50, stdin);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km2, use ponto. ex: 1521.11): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes, use ponto. ex: 699.28): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n--- CARTA 1 CADASTRADA COM SUCESSO! ---\n\n");


    /*
     * =====================================================================
     *  ENTRADA DE DADOS - CARTA 2
     * =====================================================================
    */
    printf("--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o Estado (APENAS UMA LETRA de A-a-H) e pressione Enter: ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (A letra do estado + um numero de 01 a 04 ex: B02) e pressione Enter: ");
    scanf("%s", codigo2);
    
    getchar();

    printf("Digite o Nome da Cidade e pressione Enter: ");
    fgets(cidade2, 50, stdin);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2, use ponto. ex: 1200.25): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes, use ponto. ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n--- CARTA 2 CADASTRADA COM SUCESSO! ---\n\n");


    /*
     * =====================================================================
     *  EXIBIÇÃO DOS DADOS
     * =====================================================================
    */
    printf("======================================\n");
    printf("      CARTAS DO SUPER TRUNFO\n");
    printf("======================================\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1); 
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    
    printf("\n--------------------------------------\n\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    //Por fim se tudo der certo, amem e return 0 pra finalizar o main.
    return 0; 
}

/*
eu encontrei uma limpeza de buffer usando whille que parecia ser uma ideia boa, mas não consegui mas parecia que iria violar as regras do desafio (a restriçãO parece ser a loops no geral)
então não usei, mas para referencia seria assim 

while (getchar() != '\n'); // Limpa o buffer de entrada

mas não usei porque não sei se é permitido, então deixei o espaço antes do %c para limpar o buffer de entrada, o que funcionou parcialmente então adicionei um  

getchar()  que 'come' essa tecla que sobra, evitando problemas de leitura.

*/
