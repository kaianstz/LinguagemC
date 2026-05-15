            #include <stdio.h>

            int main(){     
                //Declarar Variaveis Produto, u i estoque, double valor unitario, double valor total
                // u i quantidade minima
                char produtoA[30] = "Produto A";
                char ProdutoB[30] = "Produto B";

                unsigned int estoqueA = 1000;
                unsigned int estoqueB = 2000;

                float valorA = 10.50;
                float valorB = 20.40;

                unsigned int estoqueMinimoA = 500;
                unsigned int estoqueMinimoB = 2500;

                double valorTotalA;
                double valorTotalB;

                int resultadoA, resultadoB;


                // Exibir as informacoes dos produtos 
                printf("Produto %s tem estoque %u e o valor unitario e R$%.2f\n", produtoA, estoqueA, valorA);
                printf("Produto %s tem estoque %u e o valor unitario e R$%.2f\n", ProdutoB, estoqueB, valorB);

                printf("_______________________________________________________________________________________\n");
                // Comparacoes com o valor minimo de estoque
                resultadoA = estoqueA > estoqueMinimoA;
                resultadoB = estoqueB > estoqueMinimoB;

                printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
                printf("O produto %s tem estoque minimo %d\n", ProdutoB, resultadoB);

                printf("_______________________________________________________________________________________\n");
                //comparacoes entre os valores totais dos produtos
                printf("O valor total de A (R$ %.2f) e Maior que o valor total de B (R$ %.2f)? %d\n", estoqueA * valorA, estoqueB * valorB, 
                                                                                                    (estoqueA * valorA) > (estoqueB * valorB));

















            }