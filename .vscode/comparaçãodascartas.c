#include <stdio.h>

int main() {
    // Dados da primeira cidade
    char estado1[] = "A";
    char codigo1[] = "A01";
    char nomeCidade1[] = "Florianópolis";
    int populacao1 = 537211;
    float area1 = 675.4;
    float pib1 = 23.550;
    int pontosTuristicos1 = 14;
    float densidadeDemografica1 = populacao1 / area1;  // Densidade demográfica

    // Dados da segunda cidade
    char estado2[] = "B";
    char codigo2[] = "B02";
    char nomeCidade2[] = "Curitiba";
    int populacao2 = 1963726;
    float area2 = 434.967;
    float pib2 = 10.500;
    int pontosTuristicos2 = 20;
    float densidadeDemografica2 = populacao2 / area2;  // Densidade demográfica

    int opcao;

    // Exibindo o menu interativo
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Sair\n");

    // Solicitando a opção do usuário
    printf("\nEscolha uma opção (1-6): ");
    scanf("%d", &opcao);

    // Comparando com base na opção escolhida
    if (opcao == 1) {
        printf("\nComparando População:\n");
        printf("%s: %d habitantes\n", nomeCidade1, populacao1);
        printf("%s: %d habitantes\n", nomeCidade2, populacao2);
        if (populacao1 > populacao2) {
            printf("%s venceu!\n", nomeCidade1);
        } else if (populacao1 < populacao2) {
            printf("%s venceu!\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    } else if (opcao == 2) {
        printf("\nComparando Área:\n");
        printf("%s: %.2f km²\n", nomeCidade1, area1);
        printf("%s: %.2f km²\n", nomeCidade2, area2);
        if (area1 > area2) {
            printf("%s venceu!\n", nomeCidade1);
        } else if (area1 < area2) {
            printf("%s venceu!\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    } else if (opcao == 3) {
        printf("\nComparando PIB:\n");
        printf("%s: %.2f bilhões de reais\n", nomeCidade1, pib1);
        printf("%s: %.2f bilhões de reais\n", nomeCidade2, pib2);
        if (pib1 > pib2) {
            printf("%s venceu!\n", nomeCidade1);
        } else if (pib1 < pib2) {
            printf("%s venceu!\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    } else if (opcao == 4) {
        printf("\nComparando Pontos Turísticos:\n");
        printf("%s: %d pontos turísticos\n", nomeCidade1, pontosTuristicos1);
        printf("%s: %d pontos turísticos\n", nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("%s venceu!\n", nomeCidade1);
        } else if (pontosTuristicos1 < pontosTuristicos2) {
            printf("%s venceu!\n", nomeCidade2);
        } else {
            printf("Empate!\n");
        }
    } else if (opcao == 5) {
        printf("\nComparando Densidade Demográfica:\n");
        printf("%s: %.2f habitantes/km²\n", nomeCidade1, densidadeDemografica1);
        printf("%s: %.2f habitantes/km²\n", nomeCidade2, densidadeDemografica2);
        if (densidadeDemografica1 < densidadeDemografica2) {
            printf("%s venceu!\n", nomeCidade1);  // Menor densidade vence
        } else if (densidadeDemografica1 > densidadeDemografica2) {
            printf("%s venceu!\n", nomeCidade2);  // Menor densidade vence
        } else {
            printf("Empate!\n");
        }
    } else if (opcao == 6) {
        printf("Saindo...\n");
    } else {
         printf("Opção inválida! Tente novamente.\n");
    }

   return 0;
}
