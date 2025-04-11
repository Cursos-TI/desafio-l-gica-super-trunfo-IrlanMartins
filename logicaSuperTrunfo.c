#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    char pais1 [60], estado1 [60], codigo1 [5], cidade1 [100], pais2 [60], estado2 [60], codigo2 [5], cidade2 [100];
    unsigned int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    
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
    
    float densidadePopulacional1 = populacao1 / area1;
    float pibPercapta1 = pib1 / populacao1;
    
    printf(" - Densidade Populacional: %.2f Habitantes/Km²\n", densidadePopulacional1);
    printf(" - PIB Percapita: %.2f milhões/habitantes\n", pibPercapta1);

    float inversodensidadePopulacional1 = 1.0 / densidadePopulacional1;
    float SuperPodercarta1 = populacao1 + area1 + pib1 + pontosTuristicos1 + inversodensidadePopulacional1;
    
    printf(" - Super Poder da carta 1: %.2f\n\n", SuperPodercarta1);

    printf(" - Carta 02 - \n");
    printf(" - País: %s\n - Código: %s\n - Estado: %s\n - Cidade: %s\n", pais2, codigo2, estado2, cidade2);
    printf(" - População: %d\n - Área: %.2f\n - PIB: %.2f\n - Números de POntos Túristicos: %d\n", populacao2, area2, pib2, pontosTuristicos2);

    float densidadePopulacional2 = populacao2 / area2;
    float pibPercapta2 = pib2 / populacao2;
    
    printf(" - Densidade Populacional: %.2f Habitantes/Km²\n", densidadePopulacional2);
    printf(" - PIB Percapita: %.2f milhões/habitantes\n", pibPercapta2);
    
    float inversodensidadePopulacional2 = 1.0 / densidadePopulacional2;
    float SuperPodercarta2 = populacao2 + area2 + pib2 + pontosTuristicos2 + inversodensidadePopulacional2;

    printf(" - Super Poder da carta 2: %.2f\n\n", SuperPodercarta2);

    printf(" - QUEM VENCEU?\n");
    printf("legenda: (1) = Carta 01 venceu / (0) = Carta 02 venceu\n ***MENOR DENSIDADE POPULACIONAL VENCE***\n\n");
    getchar();

    printf(" Super Poder da CARTA 01 > Super Poder da CARTA 02: %d\n", SuperPodercarta1 > SuperPodercarta2);
    printf(" População da CARTA 01 > População da CARTA 02: %d\n", populacao1 > populacao2);
    printf(" Área  da CARTA 01 > Área da CARTA 02: %d\n", area1 > area2);
    printf(" PIB da CARTA 01 > PIB da CARTA 02: %d\n", pib1 > pib2);
    printf(" Pontos Turísticos da CARTA 01 > Pontos Turísticos da CARTA 02: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf(" Densidade Populacional da CARTA 01 < Densidade Populacional da CARTA 02: %d\n", densidadePopulacional1 < densidadePopulacional2);
    printf(" PIB Per Capita da CARTA 01 > PIB Per Capita da CARTA 02: %d\n\n", pibPercapta1 > pibPercapta2);
    
    printf(" - COMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO) -\n\n");
    printf("CARTA 01: %s (%s): %d\n", cidade1, codigo1, populacao1);
    printf("CARTA 02: %s (%s): %d\n\n", cidade2, codigo2, populacao2);
    if(populacao1 > populacao2) {
        printf("- Carta 1 venceu!\n");
    }else{
        printf("- Carta 2 venceu!\n");
    }
    
    return 0;
}
