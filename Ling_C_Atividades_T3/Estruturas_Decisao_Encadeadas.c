                    #include <stdio.h>
                    
                    int main() {

                        int idade;

                        int nota;

                        printf("Digite a Sua idade: ");
                        scanf("%d", &idade);

                        //Crianca < 12
                        //adolecente 12 <= x < 18
                        //adulto 18 <= x < 60
                        //idoso >= 60

                        if (idade < 12) {
                            printf("Voce e uma crianca\n");
                        } else if (idade >= 12 && idade < 18) {
                            printf("Voce e um adolecente\n");
                        } else if (idade >= 18 && idade < 60) {
                            printf("Voce e um adulto\n");
                        } else {
                            printf("Voce e um idoso\n");
                        }

                        
                        printf("Digite a sua nota: ");
                        scanf("%d", &nota);
                        // A >= 90
                        // B >= 80
                        // C >= 70
                        // D >= 60
                        // E >= 50
                        // F

                        if (nota >= 90) {
                            printf("Voce tirou A\n");
                        } else if (nota >= 80) {
                            printf("Voce tirou B\n");
                        } else if (nota >= 70) {
                            printf("Voce tirou C\n");
                        } else if (nota >= 60) {
                            printf("Voce tirou D\n");
                        } else if (nota >= 50) {
                            printf("Voce tirou E\n");
                        } else {
                            printf("Voce tirou F\n");
                        }
                        

                        if (nota < 50) {
                            printf("Voce tirou F\n");
                        } else if (nota >= 50 && nota < 60) {
                            printf("Voce tirou E\n");
                        } else if (nota >= 60 && nota < 70) {
                            printf("Voce tirou D\n");
                        } else if (nota >= 70 && nota < 80) {
                            printf("Voce tirou C\n");
                        } else if (nota >= 80 && nota < 90) {
                            printf("Voce tirou B\n");
                        } else {
                            printf("Voce tirou A\n");
                        }

            









                        return 0;
                    }