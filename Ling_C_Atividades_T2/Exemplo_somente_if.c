        #include <stdio.h>

        int main() {
            
            int numero1, numero2, nota = 65, numero = 4, resultado, estoque = 3;
            float Temperatura = 32.0;
            

            numero1 = 10;
            numero2 = 5;
            resultado = numero % 2;

            if (numero1 > numero2) {
                printf("numero 1 e Maior que numero2.\n"); // bloco de codigo a ser executado
            }
            if (Temperatura >= 30.0) {
                printf("Esta Calor.\n");
            }
            if (nota >= 60) {
                printf("Aluno aprovado.\n");
            }

            printf("A variavel resultado e: %d\n", resultado);
            if (numero == 0) {
                printf("O numero e par.\n");
            }
            if (estoque <= 5) {
                printf("Estoque baixo\n"); 
            }

            return 0;

        }
        