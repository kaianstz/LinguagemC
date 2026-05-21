            #include <stdio.h>

            int main() {
                //exemplo 1
                int numero1;
                int numero2; 
                //exemplo 2
                int resultado;
                int numero = 17;
                //exemplo 3
                float Temperatura = 32.0;
                //exemplo 4
                int nota = 65;
                //exemplo 5
                int idade = 20;

                numero1 = 10;
                numero2 = 50;

                resultado = numero % 2;

                if(numero1 > numero2) { //exemplo 1
                    // bloco de codigo a ser executado se a condicao for verdadeira
                    printf("numero 1 e Maior que numero 2.\n"); 
                } else {
                    // bloco de codigo a ser executado se a condicao for falsa
                    printf("numero 1 e menor que numero 2.\n");
                }
                if(resultado == 0) { //exemplo 2
                    printf("O numero e Par\n");
                } else {
                    printf("O numero e Impar\n");
                }
                if(Temperatura >= 30.0) { //exemplo 3
                    printf("Esta Calor.\n");
                } else {
                    printf("Nao Esta Calor.\n");
                }
                if(nota >= 60) { //exemplo 4
                    printf("Aluno aprovado.\n");
                } else {
                    printf("Aluno reprovado.\n");
                }
                if(idade >= 18) { //exemplo 5
                    printf("Voce e maior de idade.\n");
                } else {
                    printf("Voce e menor de idade.\n");
                }




            }