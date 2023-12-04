#include <stdio.h>

#define pi 3.14

int main() {
    int opcao;

    do {
        printf("Escolha a figura geometrica para calcular a area:\n");
        printf("1. Triangulo\n");
        printf("2. Circulo\n");
        printf("3. Losango\n");
        printf("4. Retangulo\n");
        printf("5. Trapezio\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                // Triângulo
                {
                    float base, altura;
                    printf("Digite a base do triangulo: ");
                    scanf("%f", &base);
                    printf("Digite a altura do triangulo: ");
                    scanf("%f", &altura);
                    float area = 0.5 * base * altura;
                    printf("A area do triangulo e: %.2f\n", area);
                }
                break;

            case 2:
                // Círculo
                {
                    float raio;
                    printf("Digite o raio do circulo: ");
                    scanf("%f", &raio);
                    float area = pi * raio * raio;
                    printf("A area do circulo e: %.2f\n", area);
                }
                break;

            case 3:
                // Losango
                {
                    float diagonal1, diagonal2;
                    printf("Digite a diagonal maior do losango: ");
                    scanf("%f", &diagonal1);
                    printf("Digite a diagonal menor do losango: ");
                    scanf("%f", &diagonal2);
                    float area = 0.5 * diagonal1 * diagonal2;
                    printf("A area do losango e: %.2f\n", area);
                }
                break;

            case 4:
                // Retângulo
                {
                    float comprimento, largura;
                    printf("Digite o comprimento do retangulo: ");
                    scanf("%f", &comprimento);
                    printf("Digite a largura do retangulo: ");
                    scanf("%f", &largura);
                    float area = comprimento * largura;
                    printf("A area do retangulo e: %.2f\n", area);
                }
                break;

            case 5:
                // Trapézio
                {
                    float baseMaior, baseMenor, altura;
                    printf("Digite a base maior do trapezio: ");
                    scanf("%f", &baseMaior);
                    printf("Digite a base menor do trapezio: ");
                    scanf("%f", &baseMenor);
                    printf("Digite a altura do trapezio: ");
                    scanf("%f", &altura);
                    float area = 0.5 * (baseMaior + baseMenor) * altura;
                    printf("A area do trapezio e: %.2f\n", area);
                }
                break;

            case 0:
                printf("Obrigado! :D\n");
                break;

            default:
                printf("Opção invalida. Escolha um numero entre 1 e 5.\n");
        }

    } while (opcao != 0);

    return 0;
}
