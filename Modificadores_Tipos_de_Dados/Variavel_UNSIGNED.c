        #include <stdio.h>

            int main(){
                int numeroSinal = 3000000000; // Esse valor excede o limite de um int normal
                unsigned int numeroSemSinal = 3000000000; // Usando unsigned int para armazenar o valor corretamente

                printf("Numero com sinal (int): %d\n", numeroSinal); // Pode resultar em um valor negativo devido ao estouro
                printf("Numero sem sinal (unsigned int): %u\n", numeroSemSinal); // Exibe o valor corretamente como um número positivo

                return 0;




            }