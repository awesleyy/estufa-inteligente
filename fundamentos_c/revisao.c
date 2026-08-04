#include <stdio.h>
#include "revisao.h"

float higher_temp(){
    float maior = 0.0;
    float temperatura1, temperatura2;
    printf("Digite a temperatura 1: ");
    scanf("%f", &temperatura1);
    printf("Digite a temperatura 2: ");
    scanf("%f", &temperatura2);

    if (temperatura1 > temperatura2){
        maior = temperatura1;
    }else if (temperatura2 > temperatura1){
        maior = temperatura2;
    }

    return maior;
}