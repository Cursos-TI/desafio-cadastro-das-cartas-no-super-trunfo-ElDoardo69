#include <stdio.h>

int main(){

    int populacao1, populacao2, pturisticos1, pturisticos2;
    float area1, area2, pib1, pib2;
    char estado1, estado2, codigo1, codigo2, cidade1[20], cidade2[20]; 
  
    // Cadastro da carta 1:

    printf("Ola, vamos comecar cadastrando os dados da sua primeira carta do jogo super trunfo.\n");
    printf("Comece inserindo uma letra de 'A' a 'H' que ira representar o estado.\n");
    scanf("%c", &estado1);

    printf("Agora acrescentaremos um codigo ao seu estado, escolha um numero de 1 a 4.\n");
    scanf(" %c", &codigo1);

    printf("Cite o nome de uma cidade para representar seu estado.\n");
    scanf("%s", &cidade1);

    printf("Cadastre o numero de habitantes da cidade citada.\n");
    scanf("%d", &populacao1);

    printf("Adicione a area em quilometros quadrados da cidade cadastrada.\n");
    scanf("%f", &area1);

    printf("Acrescente o PIB da cidade cadastrada.\n");
    scanf("%f", &pib1);

    printf("Para finalizar, adicione o numero de pontos turisticos da cidade escolhida.\n");
    scanf("%d", &pturisticos1);

    // Cadastro da carta 2:

    printf("O cadastro da primeira carta foi finalizado com sucesso, vamos iniciar o cadastro da sua segunda carta.\n");
    printf("Comece inserindo uma letra de 'A' a 'H' que ira representar o estado.\n");
    scanf(" %c", &estado2);

    printf("Agora acrescentaremos um codigo ao seu estado, escolha um numero de 1 a 4.\n");
    scanf(" %c", &codigo2);

    printf("Cite o nome de uma cidade para representar seu estado.\n");
    scanf("%s", &cidade2);

    printf("Cadastre o numero de habitantes da cidade citada.\n");
    scanf("%d", &populacao2);

    printf("Adicione a area em quilometros quadrados da cidade cadastrada.\n");
    scanf("%f", &area2);

    printf("Acrescente o PIB da cidade cadastrada.\n");
    scanf("%f", &pib2);

    printf("Para finalizar, adicione o numero de pontos turisticos da cidade escolhida.\n");
    scanf("%d", &pturisticos2);
    printf("\n");

    // Resultado final:

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c0%c\n", estado1, codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n\n", pturisticos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c0%c\n", estado2, codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pturisticos2);

    return 0;
}