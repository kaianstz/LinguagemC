            #include <stdio.h>

            int main() {
                int a = 5, b = 10;

                int A1 = 5, B1 = -10, C1 = 1;

                int idade = 20;
                float altura = 1.75;

                // Operador lógico AND (&&)
                if (a > 0 && b > 0) {
                    printf("A e B são positivos.\n");
                } else {
                    printf("A ou B não são positivos.\n");
                }

                // Operador lógico OR (||)
                if (a > 0 || b > 0) { 
                    printf("Pelo menos um dos valores é positivo.\n");
                } else {
                    printf("Os dois valores são negativos.\n");
                }

                // Operador lógico NOT (!)
                if (!(a > 0)) {
                    printf("A não é positivo.\n");
                } else {
                    printf("A é positivo.\n");
                }

                // A1 > 0 => Verdadeiro
                // B1 < 0 => Verdadeiro
                // Verdadeiro && Verdadeiro => Verdadeiro
                // Verdadeiro || C1 == 0
                // Verdadeiro || Falso => Verdadeiro

                if (A1 > 0 && B1 < 0 || C1 == 0) {
                    printf("A expressão é verdadeira.\n");
                } else {
                    printf("A expressão é falsa.\n");
                }

                //idade >= 18 => Verdadeiro
                //idade <= 30 => Verdadeiro
                //Verdadeiro && Verdadeiro
                //Verdadeiro && altura > 1.70
                //Verdadeiro && Verdadeiro => Verdadeiro

                if (idade >= 18 && idade <= 30 && altura > 1.70) {
                    printf("A pessoa é adulta e tem altura adequada.\n");
                } else {
                    printf("A pessoa não atende aos critérios de idade ou altura.\n");
                }

                return 0;
            }