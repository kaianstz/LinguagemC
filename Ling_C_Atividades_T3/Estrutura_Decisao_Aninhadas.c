            #include <stdio.h>

            int main() {
              int idade;
              float renda;
                
                /*
                programa 01 - Ele verifica se uma pessoa esta qualificada para um desconto especial com base na idade e na renda mensal.
                A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter uma renda mensal abaixo de R$ 2000
                */
                
              printf("Digite a sua idade: ");
              scanf("%d", &idade);
              printf("Digite a sua renda mensal: ");
              scanf("%f", &renda);

                if(idade <= 18 || idade >= 60) 
                {
                    if (renda < 2000)
                    {
                        printf("voce tem direito ao desconto!\n");
                    } else {
                        printf("voce nao tem direito ao desconto devido a renda!\n");
                    }

                } else {
                    printf("voce nao tem direito ao desconto devido a idade!\n");
                }

                /*
                programa 02 - Ele verifica se uma pessoa esta qualificada para um desconto especial com base na idade e na renda mensal.
                A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter uma renda mensal abaixo de R$ 2000
                */






                return 0;

            }