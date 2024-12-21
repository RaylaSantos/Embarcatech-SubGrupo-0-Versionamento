#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>


void comprimento();
void temperature();
void area();
void volume();
void tempo();

int main(){
    bool sair=false;
    int esc;
    do{
    printf("Escolha o tipo de conversao que deseja fazer: \n");
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
        temperature();
        break;
    
    case 5:
        tempo();
        break;
    
    case 11:
        sair=true;
        break;

    default:
        printf("Escolha invalida.\n");
        break;
    }
    }while(sair!=true);
 return 0;
}

void comprimento(){
    int escolha,escolha2;
    bool repete = true;
    double n;
    do{
    printf("Qual unidade deseja converter? \n");
    printf("[1] para quilometro [km]\n");
    printf("[2] para metros [m] \n");
    printf("[3] para centimetros [cm]\n");
    printf("[4] para milimetros [mm]\n");
    scanf("%d",&escolha2);
    fflush(stdin);
    printf("Entre com um valor em para ser convertido: ");
    scanf("%lf",&n);
    fflush(stdin);
    printf("Qual a unidade desejada? \n");
    printf("[1] para quilometro [km]\n");
    printf("[2] para metros [m]\n");
    printf("[3] para centimetros [cm]\n");
    printf("[4] para milimetros [mm]\n");
    printf("[Outro] Retornar ao principal.\n");
    scanf("%d",&escolha);
    fflush(stdin);
    switch(escolha2){
        case 1: //Quilometro
                    switch(escolha)
                    {
                    case 1:
                        printf("%.3lfkm em km: %.3lf\n",n,n);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 2:
                        printf("%.3lfkm em m: %.1lf\n",n,n*1000);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 3:
                        printf("%.3lfkm em cm: %.1lf\n",n,n*100000);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 4:
                        printf("%.3lfkm em mm: %.1lf\n",n,n*1000000);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    default:
                        printf("Saindo...\n");
                        repete = false;
                        break;
                    }
                    break;

        case 2: //Metro
                    switch(escolha)
                    {
                    case 1:
                        printf("%.3lfm em km: %.3lf\n",n,n/1000);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 2:
                        printf("%.3lfm em m: %.1lf\n",n,n);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 3:
                        printf("%.3lfm em cm: %.1lf\n",n,n*100);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 4:
                        printf("%.3lfm em mm: %.1lf\n",n,n*1000);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    default:
                        printf("Saindo...\n");
                        repete = false;
                        break;
                    }
                    break;

        case 3: //centimetro
            switch(escolha)
                    {
                    case 1:
                        printf("%.3lfcm em km: %.8f\n",n,n/100000);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 2:
                        printf("%.3lfcm em m: %.3lf\n",n,n/100);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 3:
                        printf("%.3lfcm em cm: %.3lf\n",n,n);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 4:
                        printf("%.3lfcm em mm: %.3lf\n",n,n*10);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    default:
                        printf("Saindo...\n");
                        repete = false;
                        break;
                    }
                    break;

        case 4: //milimetro
            switch(escolha)
                    {
                    case 1:
                        printf("%.3lfcm em km: %.8lf\n",n,n/1000000);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 2:
                        printf("%.3lfcm em m: %.4lf\n",n,n/1000);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 3:
                        printf("%.3lfcm em cm: %.3lf\n",n,n/10);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    case 4:
                        printf("%.3lfcm em mm: %.3lf\n",n);
                        printf("Entre com qualquer tecla para retornar.\n");
                        getchar();
                        break;
                    default:
                        printf("Saindo...\n");
                        repete = false;
                        break;
                    }
                    break;
        default:
        printf("Escolha invalida...\n");
        
        break;
    }
    }while(repete==true);
}