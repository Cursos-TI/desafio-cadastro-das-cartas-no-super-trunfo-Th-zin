#include <stdio.h>

// Função para exibir os dados de uma cidade 
int exibirCarta(char estado[], char codigo[], char nomeCidade[], int populacao, float area, float pib, int pontosTuristicos) {
    printf("\n===========================\n");
    printf("Carta\n");
    printf("Estado: %s\n", estado);
    printf("Código da Cidade: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Demográfica: %.2f hab/km²\n", (float)populacao / area); 
    printf("===========================\n");
    return 0; 
}

// Função para exibir o menu de atributos 
int exibirMenu(int atributoEscolhido) {
    printf("\nEscolha um atributo para comparação:\n");
    if (atributoEscolhido != 1) printf("1 - População\n");
    if (atributoEscolhido != 2) printf("2 - Área\n");
    if (atributoEscolhido != 3) printf("3 - PIB\n");
    if (atributoEscolhido != 4) printf("4 - Pontos Turísticos\n");
    if (atributoEscolhido != 5) printf("5 - Densidade Demográfica\n");
    printf("Digite o número correspondente: ");
    return 0; 
}

// Função para comparar dois valores de atributos
int compararAtributos(float valor1, float valor2, int ehDensidade) {
    if (ehDensidade) {
        return valor1 < valor2 ? 1 : (valor1 > valor2 ? -1 : 0); // Menor valor vence (Densidade)
    } else {
        return valor1 > valor2 ? 1 : (valor1 < valor2 ? -1 : 0); // Maior valor vence
    }
}

int main() {
    // Dados da primeira cidade
    char estado1[] = "A"; 
    char codigo1[] = "A01"; 
    char nomeCidade1[] = "Florianópolis";
    int populacao1 = 537211;
    float area1 = 675.4; 
    float pib1 = 23.550; 
    int pontosTuristicos1 = 14;
    float densidade1 = (float)populacao1 / area1;

    // Dados da segunda cidade
    char estado2[] = "B";
    char codigo2[] = "B02";
    char nomeCidade2[] = "Curitiba";
    int populacao2 = 1963726;
    float area2 = 434.967;
    float pib2 = 10.500;
    int pontosTuristicos2 = 20;
    float densidade2 = (float)populacao2 / area2;

    // Exibição dos dados das cidades
    exibirCarta(estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1);
    exibirCarta(estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2);

    int atributo1, atributo2;
    float valor1Atributo1, valor1Atributo2, valor2Atributo1, valor2Atributo2;

    // Escolha do primeiro atributo
    exibirMenu(0);
    scanf("%d", &atributo1);

    // Escolha do segundo atributo (dinâmico)
    exibirMenu(atributo1);
    scanf("%d", &atributo2);

    // Atribuir valores aos atributos escolhidos
    switch (atributo1) {
        case 1: valor1Atributo1 = populacao1; valor2Atributo1 = populacao2; break;
        case 2: valor1Atributo1 = area1; valor2Atributo1 = area2; break;
        case 3: valor1Atributo1 = pib1; valor2Atributo1 = pib2; break;
        case 4: valor1Atributo1 = pontosTuristicos1; valor2Atributo1 = pontosTuristicos2; break;
        case 5: valor1Atributo1 = densidade1; valor2Atributo1 = densidade2; break;
    }

    switch (atributo2) {
        case 1: valor1Atributo2 = populacao1; valor2Atributo2 = populacao2; break;
        case 2: valor1Atributo2 = area1; valor2Atributo2 = area2; break;
        case 3: valor1Atributo2 = pib1; valor2Atributo2 = pib2; break;
        case 4: valor1Atributo2 = pontosTuristicos1; valor2Atributo2 = pontosTuristicos2; break;
        case 5: valor1Atributo2 = densidade1; valor2Atributo2 = densidade2; break;
    }

    // Comparação dos atributos
    int resultadoAtributo1 = compararAtributos(valor1Atributo1, valor2Atributo1, atributo1 == 5);
    int resultadoAtributo2 = compararAtributos(valor1Atributo2, valor2Atributo2, atributo2 == 5);

    // Soma dos atributos
    float somaCarta1 = valor1Atributo1 + valor1Atributo2;
    float somaCarta2 = valor2Atributo1 + valor2Atributo2;

    // Exibição dos resultados
    printf("\nResultados da Comparação:\n");
    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n", nomeCidade2);
    printf("\nAtributo 1: ");
    switch (atributo1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("Valor Carta 1: %.2f\n", valor1Atributo1);
    printf("Valor Carta 2: %.2f\n", valor2Atributo1);
    printf("\nAtributo 2: ");
    switch (atributo2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }
    printf("Valor Carta 1: %.2f\n", valor1Atributo2);
    printf("Valor Carta 2: %.2f\n", valor2Atributo2);
    printf("\nSoma dos Atributos:\n");
    printf("Carta 1: %.2f\n", somaCarta1);
    printf("Carta 2: %.2f\n", somaCarta2);

    // Verificação do vencedor ou empate
    if (somaCarta1 > somaCarta2) {
        printf("\n%s venceu!\n", nomeCidade1);
    } else if (somaCarta2 > somaCarta1) {
        printf("\n%s venceu!\n", nomeCidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}