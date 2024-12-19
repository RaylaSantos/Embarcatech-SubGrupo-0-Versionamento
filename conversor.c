#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void comprimento();
void temperature();

int volume(){
   //codigo
   return 0;
    
}

int main(){
    int esc;
    printf("Escolha o tipo de conversão que deseja fazer: \n");
    printf("[1] para conversao de volume\n");
    printf("[2] para conversao de comprimento\n");
    printf("[3] para conversao de temperatura\n");
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
        temperature();
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

// Função para o usuário escolher qual unidade de temperatura ele quer converter.
void temperature() {
    int choice = 1;
    float temperature;

    while(choice != 0) {
        printf("\nESCOLHA QUAL CONVERSAO DE TEMPERATURA VOCE QUER FAZER\n\n");
        printf("CELSIUS PARA FAHRENHEIT            [1]\n");
        printf("CELSIUS PARA KELVIN                [2]\n");
        printf("FAHRENHEIT PARA CELSIUS            [3]\n");
        printf("FAHRENHEIT PARA KELVIN             [4]\n");
        printf("KELVIN PARA CELSIUS                [5]\n");
        printf("KELVIN PARA FAHRENHEIT             [6]\n");
        printf("SAIR DO CONVERSOR DE TEMPERATURA   [0]\n\n");

        printf("DIGITE SUA ESCOLHA: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("DIGITE A TEMPERATURA EM CELSIUS: ");
                scanf("%f", &temperature);
                printf("%.2f C EM FARENHEIT E %.2f F\n", temperature, (temperature * 1.8) + 32);
                break;
            case 2:
                printf("DIGITE A TEMPERATURA EM CELSIUS: ");
                scanf("%f", &temperature);
                printf("%.2f C EM KELVIN E %.2f K\n", temperature, temperature + 273.15);
                break;
            case 3:
                printf("DIGITE A TEMPERATURA EM FARENHEIT: ");
                scanf("%f", &temperature);
                printf("%.2f F EM CELSIUS E %.2f C\n", temperature, (temperature - 32) / 1.8);
                break;
            case 4:
                printf("DIGITE A TEMPERATURA EM FARENHEIT: ");
                scanf("%f", &temperature);
                printf("%.2f F EM KELVIN E %.2f K\n", temperature, ((temperature - 32) / 1.8) + 273.15);
                break;
            case 5:
                printf("DIGITE A TEMPERATURA EM KELVIN: ");
                scanf("%f", &temperature);
                printf("%.2f K EM CELSIUS E %.2f C\n", temperature, temperature - 273.15);
                break;
            case 6:
                printf("DIGITE A TEMPERATURA EM KELVIN: ");
                scanf("%f", &temperature);
                printf("%.2f K EM FRENHEIT E %.2f F\n", temperature, ((temperature - 273.15) * 1.8) + 32);
                break;
            case 0:
                return;
            default:
                printf("Escolha invalida, digit um número de 0 a 6.\n\n");
        }
    }
}