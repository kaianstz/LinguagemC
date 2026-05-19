        #include <stdio.h>

        int main() {
            
            float Temperatura, umidade;
            unsigned int estoque, estoqueMinimo = 1000;
            
            printf("Digite a temperatura: \n");
            scanf("%f", &Temperatura);
            printf("Digite a umidade: \n");
            scanf("%f", &umidade);
            printf("Digite o estoque: \n");
            scanf("%u", &estoque);

            if (Temperatura > 30.0) {
                printf("Temperatura esta Alta.\n"); // bloco de codigo a ser executado
            } else {
                printf("Temperatura esta dentro dos parametros.\n");
            }
            if (umidade > 50) {
                printf("Umidade esta Elevada.\n");
            } else {
                printf("Umidade esta dentro dos parametros.\n");
            }
            if (estoque < estoqueMinimo) {
                printf("Estoque a baixo do Minimo.\n");
            } else {
                printf("Estoque esta dentro dos parametros.\n");
            }

            return 0;

        }