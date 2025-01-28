#include <stdio.h>
#include <string.h>

// Definindo a estrutura Carta
typedef struct {
    char nome[50];
    int populacao;
    float pib;
    float area;
    float qualidade_vida;
} Carta;

// Função para exibir o menu de escolha de atributos
void menu_atributos(int *atributo1, int *atributo2) {
    printf("Escolha dois atributos para comparar:\n");
    printf("1. População\n");
    printf("2. PIB\n");
    printf("3. Área\n");
    printf("4. Qualidade de Vida\n");
    
    printf("Escolha o primeiro atributo: ");
    scanf("%d", atributo1);
    
    printf("Escolha o segundo atributo: ");
    scanf("%d", atributo2);
}

// Função para comparar as cartas com base nos atributos escolhidos
void comparar_cartas(Carta carta1, Carta carta2, int atributo1, int atributo2) {
    float valor1a, valor2a, valor1b, valor2b;
    
    // Escolher os atributos de acordo com as escolhas do usuário
    if (atributo1 == 1) valor1a = carta1.populacao;
    else if (atributo1 == 2) valor1a = carta1.pib;
    else if (atributo1 == 3) valor1a = carta1.area;
    else if (atributo1 == 4) valor1a = carta1.qualidade_vida;
    
    if (atributo2 == 1) valor2a = carta1.populacao;
    else if (atributo2 == 2) valor2a = carta1.pib;
    else if (atributo2 == 3) valor2a = carta1.area;
    else if (atributo2 == 4) valor2a = carta1.qualidade_vida;
    
    if (atributo1 == 1) valor1b = carta2.populacao;
    else if (atributo1 == 2) valor1b = carta2.pib;
    else if (atributo1 == 3) valor1b = carta2.area;
    else if (atributo1 == 4) valor1b = carta2.qualidade_vida;
    
    if (atributo2 == 1) valor2b = carta2.populacao;
    else if (atributo2 == 2) valor2b = carta2.pib;
    else if (atributo2 == 3) valor2b = carta2.area;
    else if (atributo2 == 4) valor2b = carta2.qualidade_vida;
    
    // Comparando os dois atributos escolhidos
    if (valor1a > valor1b && valor2a > valor2b) {
        printf("A carta vencedora é: %s\n", carta1.nome);
    } else if (valor1a < valor1b && valor2a < valor2b) {
        printf("A carta vencedora é: %s\n", carta2.nome);
    } else {
        printf("Empate! Nenhuma carta é vencedora.\n");
    }
}

int main() {
    // Criando duas cartas com os dados dos países
    Carta carta1 = {"Brasil", 211000000, 2055000.0, 8515767.0, 0.781};
    Carta carta2 = {"Argentina", 45195777, 637500.0, 2780400.0, 0.807};
    
    int atributo1, atributo2;
    
    // Exibindo menu para o usuário escolher os atributos
    menu_atributos(&atributo1, &atributo2);
    
    // Comparando as cartas com os atributos escolhidos
    comparar_cartas(carta1, carta2, atributo1, atributo2);
    
    return 0;
}
