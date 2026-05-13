        #include <stdio.h>  

            int main(){
                int numeroNormal = 2147483647; // Valor máximo para um int normal
                long int numeroGrande = 2147483647; // Valor que excede o limite de um int normal, mas pode ser armazenado em um long int

                double numeroPreciso = 3.141592653589793; // Exemplo de um número com precisão decimal usando o tipo double
                long double numeroMuitoPreciso = 3.141592653589793238463; // Exemplo de um número com ainda mais precisão usando o tipo long double

                printf("Numero Regular (int): %ld\n", numeroNormal); // Exibe o valor do int normal
                printf("Numero Grande (Long int): %ld\n", numeroGrande);

                numeroGrande = 2147483649; // Valor que excede o limite de um int normal, mas pode ser armazenado em um long int
                printf("Numero Grande (Long int) atualizado: %ld\n", numeroGrande); // Exibe o valor atualizado do long int

                printf("Numero Preciso (double): %.15f\n", numeroPreciso);
                printf("Numero Muito Preciso (long double): %Lf\n", numeroMuitoPreciso);

                return 0;
            }