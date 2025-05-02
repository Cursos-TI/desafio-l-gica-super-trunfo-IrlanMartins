#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

    int main() {
    char pais1 [60], estado1 [60], codigo1 [5], cidade1 [100], pais2 [60], estado2 [60], codigo2 [5], cidade2 [100];
    unsigned int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    int primeiroatributo, segundoatributo;
    int resultado1, resultado2;
    float soma1, soma2;
    
    printf("**Carta 01**\n");
    printf("INSIRA OS DADOS PARA ADICONAR A SUA CARTA\n\n");

    printf("País: \n");
    fgets(pais1, sizeof(pais1), stdin);
    pais1[strcspn(pais1,"\n")] = '\0';
   
    printf("Estado: \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';

    printf("Código: \n");
    scanf("%s", codigo1);
    getchar();

    printf("Cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Areá: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Números de Pontos Túriticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("**CARTA UM CADASTRADA**\n\n");

    printf("**Carta 02**\n");
    printf("INSIRA OS DADOS PARA ADICONAR A SUA CARTA\n\n");
    getchar();
    
    printf("País: \n");
    fgets(pais2, sizeof(pais2), stdin);
    pais2[strcspn(pais2,"\n")] = '\0';
   
    printf("Estado: \n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Código: \n");
    scanf("%s", codigo2);
    getchar();

    printf("Cidade: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Números de Pontos Túriticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("**CARTA DOIS CADASTRADA**\n\n");

    printf(" - AS CARTAS FORAM CADASTRADAS COM SUCESSO!! -\n\n");

    printf(" - Carta 01 - \n");
    printf(" - País: %s\n - Código: %s\n - Estado: %s\n - Cidade: %s\n", pais1, codigo1, estado1, cidade1);
    printf(" - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Números de POntos Túristicos: %d\n", populacao1, area1, pib1, pontosTuristicos1); 
    
    float densidade1 = populacao1 / area1;
    float pibPercapta1 = pib1 / populacao1;
    
    printf(" - Densidade Populacional: %.2f Habitantes/Km²\n", densidade1);
    printf(" - PIB Percapita: %.2f milhões/habitantes\n", pibPercapta1);

    float inversodensidade1 = 1.0 / densidade1;
    float SuperPodercarta1 = populacao1 + area1 + pib1 + pontosTuristicos1 + inversodensidade1;
    
    printf(" - Super Poder da carta 1: %.2f\n\n", SuperPodercarta1);

    printf(" - Carta 02 - \n");
    printf(" - País: %s\n - Código: %s\n - Estado: %s\n - Cidade: %s\n", pais2, codigo2, estado2, cidade2);
    printf(" - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Números de POntos Túristicos: %d\n", populacao2, area2, pib2, pontosTuristicos2);

    float densidade2 = populacao2 / area2;
    float pibPercapta2 = pib2 / populacao2;
    
    printf(" - Densidade Populacional: %.2f Habitantes/Km²\n", densidade2);
    printf(" - PIB Percapita: %.2f milhões/habitantes\n", pibPercapta2);
    
    float inversodensidade2 = 1.0 / densidade2;
    float SuperPodercarta2 = populacao2 + area2 + pib2 + pontosTuristicos2 + inversodensidade2;

    printf(" - Super Poder da carta 2: %.2f\n\n", SuperPodercarta2);

    // Escolha dos Atributos
    printf("Escolha dois Atributos para comparação\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");

    printf("Primeiro Atributo: ");
    scanf("%d", &primeiroatributo);
    
    switch (primeiroatributo) {
        case 1:
            printf("Você escolheu o Atributo de População\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            soma1 = populacao1;
            soma2 = populacao2;
            break;
        case 2:
            printf("Você escolheu o Atributo de Área\n");
            resultado1 = area1 > area2 ? 1 : 0;
            soma1 = area1;
            soma2 = area2;
            break;
        case 3:
            printf("Você escolheu o Atributo de PIB\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            soma1 = pib1;
            soma2 = pib2;
            break;
        case 4:
            printf("Você escolheu o Atributo de Números de Pontos Turísticos\n");
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            soma1 = pontosTuristicos1;
            soma2 = pontosTuristicos2;
            break;
        case 5:
            printf("Você escolheu o Atributo de Densidade Populacional\n");
            resultado1 = densidade1 < densidade2 ? 1 : 0;
            soma1 = densidade1;
            soma2 = densidade2;
            break;
        case 6:
            printf("Você escolheu o Atributo de PIB per capita\n");
            resultado1 = pibPercapta1 > pibPercapta2 ? 1 : 0;
            soma1 = pibPercapta1;
            soma2 = pibPercapta2;
            break;
        case 7:
            printf("Você escolheu o Atributo de Super Poder\n");
            resultado1 = SuperPodercarta1 > SuperPodercarta2 ? 1 : 0;
            soma1 = SuperPodercarta1;
            soma2 = SuperPodercarta2;
            break;
        default:
            printf("Opção Inválida\n");
        
    }

    printf("Escolha o Segundo Atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Números de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    
    printf("Segundo Atributo: ");
    scanf("%d", &segundoatributo);

    if (primeiroatributo == segundoatributo) {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (segundoatributo) {
            case 1:
                printf("Você escolheu o Atributo de População\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                soma1 += populacao1;
                soma2 += populacao2;
                break;
            case 2:
                printf("Você escolheu o Atributo de Área\n");
                resultado2 = area1 > area2 ? 1 : 0;
                soma1 += area1;
                soma2 += area2;
                break;
            case 3:
                printf("Você escolheu o Atributo de PIB\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                soma1 += pib1;
                soma2 += pib2;
                break;
            case 4:
                printf("Você escolheu o Atributo de Números de Pontos Turísticos\n");
                resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
                soma1 += pontosTuristicos1;
                soma2 += pontosTuristicos2;
                break;
            case 5:
                printf("Você escolheu o Atributo de Densidade Populacional\n");
                resultado2 = densidade1 < densidade2 ? 1 : 0;
                soma1 += densidade1;
                soma2 += densidade2;
                break;
            case 6:
                printf("Você escolheu o Atributo de PIB per capita\n");
                resultado2 = pibPercapta1 > pibPercapta2 ? 1 : 0;
                soma1 += pibPercapta1;
                soma2 += pibPercapta2;
                break;
            case 7:
                printf("Você escolheu o Atributo de Super Poder\n");
                resultado2 = SuperPodercarta1 > SuperPodercarta2 ? 1 : 0;
                soma1 += SuperPodercarta1;
                soma2 += SuperPodercarta2;
                break;
            default:
                printf("Opção Inválida\n");
        
        }
    }

    // Exibição do Resultado
    printf("\nResultado da Comparação:\n");
    printf("Carta 1 - País: %s\n", pais1);
    printf("Carta 2 - País: %s\n", pais2);
    printf("Primeiro Atributo: %d, Resultado: %d\n", primeiroatributo, resultado1);
    printf("Segundo Atributo: %d, Resultado: %d\n", segundoatributo, resultado2);
    printf("Soma dos Atributos - Carta 1: %.2f, Carta 2: %.2f\n", soma1, soma2);

    if (soma1 > soma2) {
        printf("Carta 1 vence!\n");
    } else if (soma1 < soma2) {
        printf("Carta 2 vence!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
