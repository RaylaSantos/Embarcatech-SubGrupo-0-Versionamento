#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void comprimento();
float celsios_to_fahrenheit(float temperature);
float celsios_to_kelvin(float temperature);
float fahrenheit_to_celsios(float temperature);
float fahrenheit_to_kelvin(float temperature);
float kelvin_to_celsios(float temperature);
float kelvin_to_fahrenheit(float temperature);

int volume(){
   //codigo
   return 0;
    
}

int main(){
    int esc;
    printf("Escolha o tipo de conversão que deseja fazer: \n");
    printf("[1] para conversao de volume\n");
    printf("[2] para conversao de comprimento\n");
    printf("[3] para conversao de \n");
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

// Converte de Celsios para Fahrenheit
float celsios_to_fahrenheit(float temperature) {
    return (temperature * 1.8) + 32;
}

// Converte de Celsios para Kelvin
float celsios_to_kelvin(float temperature) {
    return temperature + 273.15;
}

// Converte de Farenheit para Celsios
float fahrenheit_to_celsios(float temperature) {
    return (temperature - 32) / 1.8;
}

// Converte de Fahrenheit para Kelvin
float fahrenheit_to_kelvin(float temperature) {
    return ((temperature - 32) / 1.8) + 273.15;
}

// Converte de Kelvin para Celsios
float kelvin_to_celsios(float temperature) {
    return temperature - 273.15;
}

// Converte de Kelvin para Fahrenheit
float kelvin_to_fahrenheit(float temperature) {
    return ((temperature - 273.15) * 1.8) + 32;
}