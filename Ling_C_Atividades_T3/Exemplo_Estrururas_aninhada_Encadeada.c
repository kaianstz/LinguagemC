            #include <stdio.h>                
            
            int main() {
                int numero;

                printf("Digite um Numero: ");
                scanf("%d", &numero);

                if(numero > 0){
                    if(numero % 2 == 0)
                    {
                        printf("Numero par\n");
                    } else {
                        printf("Numero Impar\n");
                    }                        
                    printf("O numero é positivo.");
                } else if (numero == 0) {
                    printf("Numero e Zero\n");
                    } else {
                    printf("O numero é negativo.\n");
                }


                return 0;
            }

            
            
           