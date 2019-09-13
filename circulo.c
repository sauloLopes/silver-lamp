#include <stdio.h>
#include <math.h>
#include "ponto.h"
#include "circulo.h"
#define PI 3.1415

void lerCirculo(tCirculo *c, FILE *planta)
{
    lerPonto(&c->origem,planta);

    fscanf(planta,"%d%*c", &c->raio);
}

float areaCirculo(tCirculo *c)
{
    return (pow(c->raio,2)*PI);
}

float perimetroCirculo(tCirculo *c)
{
    return (2*PI*c->raio);
}

void apresentaCirculo(tCirculo *c)
{
    printf("Origem: ");

    apresentaPonto(&c->origem);

    printf(", Area: %.2f", areaCirculo(c));

    printf(", Perimetro: %.2f", perimetroCirculo(c));
}