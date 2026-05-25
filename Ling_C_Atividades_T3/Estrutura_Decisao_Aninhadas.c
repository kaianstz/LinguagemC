            #include <stdio.h>

            int main() {
            
              int idade;
              float renda;
              int dependentes;
                
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
                programa 02 - Ele verifica se uma pessoa esta qualificada para um desconto especial com base na idade e na renda mensal e numeros de dependentes.
                //A peimreira condicao e idade do usuario esta entre 18 e 65 anos.
                //A segunda condicao e que a pessoa deve ter uma renda mensal abaixo de R$ 2000.
                //A terceira condicao e que a pessoa deve ter o numero de dependentes maior que 2.
                */

              printf("Digite a sua idade: ");
              scanf("%d", &idade);
              printf("Digite a sua renda mensal: ");
              scanf("%f", &renda);
              printf("Digite o numero de dependentes: ");
              scanf("%d", &dependentes);
              
              if(idade >= 18 && idade < 65){
                if (renda < 3000){
                    if(dependentes > 2)
                    {
                        printf("voce atende a todos os Criterio\n");
                    } else {
                        printf("voce nao atende ao criterio dependetes!\n");
                    }
                } else {
                    printf("voce nao atende ao criterio de renda!\n");
                }
                
              } else {
                printf("voce nao atende ao criteiro de idade!\n");
              }


            


                return 0;

            }