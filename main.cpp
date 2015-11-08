#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
int isNumero(char *num);
int main(){
    int v1=0, v2=0, v3=0, nulo=0, cant;
    int i=0, j=0 ;
    char dato[30],cantStr[3];
    int votos, error=0;
    do{
        printf("Ingresa tu numero de cedula de cedula\n");
        scanf("%s",dato);
        fflush(stdin);
        if(!isNumero(dato))
        printf("Numero de cedula incorreco invalido\n");
    }
    while(!isNumero(dato));
    do{
        printf("cantidad de votos\n");
        scanf("%3s",&cantStr);
        if(!isNumero(cantStr))
        printf("Cantidad de votos invalido\n");
    }
    while(!isNumero(cantStr));
    cant=atoi(cantStr);
    j=0;
    for(j=0;j<cant;j++){
        system ("cls");
        printf("bienvenido\n");
        printf("Vota 1 por Maduro, 2 por Diosdado o 3 por Leopoldo\n");
        printf("votos\n");
        votos=0;
        scanf("%d",&votos);
        fflush(stdin);
        switch(votos){
            case 1:
            v1++;
            break;
            case 2:
            v2++;
            break;
            case 3:
            v3++;
            break;
            default :
            nulo++;
            break;
        }
    }
    system ("cls");
    printf("maduro %d votos a contabilizar\n",v1);
    printf("diosdado %d votos a contabilizar\n",v2);
    printf("leopoldo votos %d a contabiliar\n",v3);
    printf("nulo %d contabiliar\n",nulo);
    if(v1>v2 && v1>v3){
        printf("gana maduro\n");
    }
    else{
        if(v2>v1 && v2>v3){
            printf("gana maduro\n");
        }
        else{
            if(v3>v1 && v3>v2){
                printf("gana leopoldo\n");
            }
            else{
            }
        }
    }
    _getch();
    return 0;
}
int isNumero(char *num)
{
    int i=0;
    for(i;i<strlen(num);i++)
    {
        if(!isdigit(num[i])){
            return 0;
        }
    }
    return 1;
}
