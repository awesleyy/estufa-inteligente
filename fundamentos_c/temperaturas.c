#include <stdio.h>
#include "temperaturas.h"

temperature_status get_temperature_stats(float temps[5]){
    temperature_status temperaturas;
    temperaturas.media = 0;
    temperaturas.maximo = temps[0];
    temperaturas.minimo = temps[0];

    for(int i = 0; i < 5; i++){
        temperaturas.media += temps[i];
        if (temperaturas.maximo < temps[i]){
            temperaturas.maximo = temps[i];
        }
        if (temperaturas.minimo > temps[i])
        {
            temperaturas.minimo = temps[i];
        }
    }
    temperaturas.media = temperaturas.media / 5;

    return temperaturas;
}