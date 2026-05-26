        #include <stdio.h>
        #include <stdlib.h>
        #include <time.h>

        int main () 
        {
            int opcao, regras;
            int numeroSecreto, palpite;
            
            printf("Menu Principal\n");
            printf("1. iniciar Jogo\n");
            printf("2. Ver Regras\n");
            printf("3. Sair\n");
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);

            switch(opcao) 
            {
                case 1:
                srand(time(0));
                numeroSecreto = rand() % 10;
                printf("Digite um Numero de 0 a 9: ");
                scanf("%d", &palpite);
                    if (numeroSecreto == palpite) 
                    {
                        printf("Parabéns! Você acertou o número secreto!\n");
                    } else {
                        printf("Que pena! O número secreto era %d.\n", numeroSecreto);
                    }
                    printf("Iniciando jogo...\n");
                    break;
                case 2:
                    printf("A Explicacao das Regras!\n");
                    printf("Digite a opcao relacionada as regras do jogo!\n");
                    scanf("%d", &regras);
                    switch (regras) 
                    {
                    case 1:
                        printf("Regra 1");
                        break;
                    case 2:
                        printf("Regra 2");
                        break;
                    default:
                        printf("Opção inválida!\n");
                        break;
                    }
                case 3:
                    printf("Saindo do Jogo...\n");
                    break;
                default:
                    printf("Opção inválida!\n");
                    break;
            }

            return 0;

        }
    

