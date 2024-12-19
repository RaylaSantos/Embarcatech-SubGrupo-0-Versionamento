#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void comprimento();

int volume(){
   //codigo
   return 0;
    
}

int main(){
    int esc;
    printf("Escolha o tipo de conversão que deseja fazer: \n");
    printf("[1] para conversao de volume\n");
    printf("[2] para conversao de comprimento\n");
    printf("[3] para conversao de área\n");
    printf("[4] para conversao de \n");

    scanf("%d",&esc);
    switch(esc){
    case 1:
    volume();
    break;

    case 2:
    comprimento();
    break;

    case 3:
    area();
    break;
    
    case 4:
    
    break;
    
    case 5:
    
    break;
    
    case 6:
    
    break;

    default:
        printf("Escolha invalida.\n");
        break;
    }

 return 0;
}

void comprimento(){
    int escolha;
    bool repete = true;
    double n;
    printf("Entre com um valor em [m] para conversão: ");
    scanf("%lf",&n);
    do{
    printf("Qual a unidade desejada? \n");
    printf("[1] para km\n");
    printf("[2] para cm\n");
    printf("[3] para mm\n");
    printf("[Outro] Retornar ao principal.\n");
    scanf("%d",&escolha);
    fflush(stdin);
    if(escolha>0||escolha<4){
        repete=true;
    }
    switch (escolha)
    {
    case 1:
        printf("km: %.3lf\n",n/1000);
        printf("Entre com qualquer tecla para retornar.\n");
        getchar();
        break;
    case 2:
        printf("cm: %.1lf\n",n*100);
        printf("Entre com qualquer tecla para retornar.\n");
        getchar();
        break;
    case 3:
        printf("mm: %.1lf\n",n*1000);
        printf("Entre com qualquer tecla para retornar.\n");
        getchar();
        break;
    default:
        printf("Retornando ao menu inicial...\n");
        repete = false;
        break;
    }
    }while(repete==true);
}

void area(){
    int in, out, dif, s;
    unsigned int multi;
    float valor, conv;
        do{ // Adição de laço de repetição.
            printf("\nEscolha a unidade de área de entrada:");
            printf("\n[1] km²");
            printf("\n[2] hm²");
            printf("\n[3] dam²");
            printf("\n[4] m²");
            printf("\n[5] dm²");
            printf("\n[6] cm²");
            printf("\n[7] mm²\n");
            scanf("\n%d", &in);
            printf("Insira o valor de entrada:\n");
            scanf("\n%f", &valor);

            printf("\nEscolha a unidade de área de saída:");
            printf("\n[1] km²");
            printf("\n[2] hm²");
            printf("\n[3] dam²");
            printf("\n[4] m²");
            printf("\n[5] dm²");
            printf("\n[6] cm²");
            printf("\n[7] mm²\n");
            scanf("%d", &out);
            dif = in-out;
            multi = pow(100,fabs(dif)); // Exclusão da variável conv para reduzir quantidade de variável.
                if (dif<0){   
                    printf("O valor convertido é %.4e\n.", valor*multi); // Alteração do formato para notação científica.        
                }
                if (dif>0){
                    printf("O valor convertido é %.4e\n.", valor/multi);
                }
                if (dif==0){
                    printf("O valor é %f\n.", valor*multi);
                }
                printf("Deseja realizar outra operação de conversão para área?\n");
                printf("[1] Sim\n");
                printf("[2] Não\n");
                scanf("%d", &s);
        } while (s==1);
        
        printf("Entre com qualquer tecla para retornar.\n"); // Adição de saída para melhorar interface.
        getchar();
        getchar();
}
