#include <stdio.h>

// Estrutura para armazenar os dados das cidades
struct Cidade {
    float populacao, area, pib, densidade, pib2;
    int pontos_turisticos;
};

int main() {
    struct Cidade c1, c2, c3;

    // Capturando os dados de São Paulo
    printf("População de SÃO PAULO: ");
    scanf("%f", &c1.populacao);

    printf("Área de SÃO PAULO: ");
    scanf("%f", &c1.area);

    printf("PIB de SÃO PAULO: ");
    scanf("%f", &c1.pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &c1.pontos_turisticos);

    // Pausa antes de capturar os dados da próxima cidade
    printf("\nPressione ENTER para continuar\n");
    while (getchar() != '\n'); // Corrigido para limpar buffer

    // Capturando os dados de Belo Horizonte
    printf("População de BELO HORIZONTE: ");
    scanf("%f", &c2.populacao);

    printf("Área de BELO HORIZONTE: ");
    scanf("%f", &c2.area);

    printf("PIB de BELO HORIZONTE: ");
    scanf("%f", &c2.pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &c2.pontos_turisticos);

    printf("\nPressione ENTER para continuar\n");
    while (getchar() != '\n');

    // Capturando os dados do Rio de Janeiro
    printf("População de RIO DE JANEIRO: ");
    scanf("%f", &c3.populacao);

    printf("Área do RIO DE JANEIRO: ");
    scanf("%f", &c3.area);

    printf("PIB do RIO DE JANEIRO: ");
    scanf("%f", &c3.pib);

    printf("Pontos Turísticos: ");
    scanf("%d", &c3.pontos_turisticos);

    // Cálculo da densidade populacional e PIB per capita
    c1.densidade = c1.populacao / c1.area;
    c1.pib2 = c1.pib / c1.populacao;

    c2.densidade = c2.populacao / c2.area;
    c2.pib2 = c2.pib / c2.populacao;

    c3.densidade = c3.populacao / c3.area;
    c3.pib2 = c3.pib / c3.populacao;

    // Exibindo as cartas das cidades
    printf("\n -CARTA SÃO PAULO- \n");
    printf("População: %.2f\n", c1.populacao);
    printf("Área: %.2f km²\n", c1.area);
    printf("PIB: %.2f bilhões\n", c1.pib);
    printf("Pontos Turísticos: %d\n", c1.pontos_turisticos);
    printf("Densidade populacional: %.2f\n", c1.densidade);
    printf("PIB per Capita: %.2f\n\n", c1.pib2);

    printf("\n -CARTA BELO HORIZONTE- \n");
    printf("População: %.2f\n", c2.populacao);
    printf("Área: %.2f km²\n", c2.area);
    printf("PIB: %.2f bilhões\n", c2.pib);
    printf("Pontos Turísticos: %d\n", c2.pontos_turisticos);
    printf("Densidade populacional: %.2f\n", c2.densidade);
    printf("PIB per Capita: %.2f\n\n", c2.pib2);

    printf("\n -CARTA RIO DE JANEIRO- \n");
    printf("População: %.2f\n", c3.populacao);
    printf("Área: %.2f km²\n", c3.area);
    printf("PIB: %.2f bilhões\n", c3.pib);
    printf("Pontos Turísticos: %d\n", c3.pontos_turisticos);
    printf("Densidade populacional: %.2f\n", c3.densidade);
    printf("PIB per Capita: %.2f\n\n", c3.pib2);

    return 0;
}
