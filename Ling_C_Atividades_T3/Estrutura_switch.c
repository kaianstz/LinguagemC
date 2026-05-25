        #include <stdio.h>
                    
        int main() {
            int opcao;
            float saldo = 1000.00;

            printf("Escolha uma opcao:\n");
            printf("1. Verificar saldo\n");
            printf("2. Fazer Depósito\n");
            printf("3. Fazer Saque\n");
            scanf("%d", &opcao);

            switch (opcao)
            {
                case 1:
                printf("O seu Saldoi é: R$ %.2f\n", saldo);
                break;
                case 2:
                printf("Digite o banco que voce deseja depositar\n");
                printf("Digite a agencia que voce deseja depositar\n");
                printf("Digite a conta que voce deseja depositar\n");
                break;
                case 3:
                printf("Digite o valor a sacar\n");
                break;
                default:
                printf("Opcao invalida!\n");
                break;
            }

        return 0;         
        }
                        
