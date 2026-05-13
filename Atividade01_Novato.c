    #include <stdio.h>
    
        int main(){
            int idade, matricula;
            float altura;  
            char nome[50];

            printf("Digite sua Idade: \n");
            scanf("%d", &idade);
            printf("Digite sua Matricula: \n");
            scanf("%d", &matricula);
            printf("Digite sua Altura: \n");
            scanf("%f", &altura);
            printf("Digite seu Nome: \n");
            scanf("%s", &nome);

            printf("Nome do Aluno: %s - Matricula: %d \n", nome, matricula);
            printf("Sua Idade: %d - Altura: %f", idade, altura);

2
            return 0;


        }