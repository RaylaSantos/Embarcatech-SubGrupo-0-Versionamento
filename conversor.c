#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void comprimento();

int volume(){
   return 0;
    //codigo
}

int main(){
 //volume();
    comprimento();


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
    if(escolha>0||escolha<4){
        repete=true;
    }
    switch (escolha)
    {
    case 1:
        printf("km: %.3lf\n",n/1000);
        break;
    case 2:
        printf("cm: %.1lf\n",n*100);
        break;
    case 3:
        printf("mm: %.1lf\n",n*1000);
        break;
    default:
        printf("Retornando ao menu inicial...\n");
        repete = false;
        break;
    }
    }while(repete==true);
}