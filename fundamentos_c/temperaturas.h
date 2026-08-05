#ifndef TEMPERATURAS_H
#define TEMPERATURAS_H

typedef struct {
    float media;
    float maximo;
    float minimo;
} temperature_status;

temperature_status get_temperature_stats(float temps[5]);

#endif