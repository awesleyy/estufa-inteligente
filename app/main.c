#include "fundamentos_c/revisao.h"
#include "fundamentos_c/temperaturas.h"
#include <stdio.h>


int main(){

    float lista_temperaturas[5];
    for(int i = 0; i < 5; i++){
        printf("Digite a temperatura para a posicao %d: ", i+1);
        scanf("%f", &lista_temperaturas[i]);
    }

    temperature_status matriz = get_temperature_stats(lista_temperaturas);
    
    printf("|| MEDIA || MINIMO || MAXIMO ||\n|| %.2f || %.2f || %.2f ||\n", 
            matriz.media, matriz.minimo, matriz.maximo );

    return 0;
}