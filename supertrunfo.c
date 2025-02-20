#include <stdio.h>

int main() {
    
    // Dados da primeira cidade
    char estado1[] = "A"; 
    char codigo1[] = "A01"; 
    char nomeCidade1[] = "Florianópolis";
    int populacao1 = 537211;
    float area1 = 675.4; 
    float pib1= 23.550; 
    int pontosTuristicos1 = 14;

    // Dados da segunda cidade
     char estado2[] = "B";
    char codigo2[] = "B02";
    char nomeCidade2[] = "Curitiba";
    int populacao2 = 1963726;
    float area2 = 434.967;
    float pib2 = 10.500;
    int pontosTuristicos2 = 20;


// Exibição dos dados da primeira cidade
    printf("\n===========================\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Cidade: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("===========================\n");

    // Exibição dos dados da segunda cidade
    printf("\n===========================\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("\n===========================\n");

    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}