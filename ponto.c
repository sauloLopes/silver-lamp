#include <stdio.h>
#include <math.h>
#include "ponto.h"

void lerPonto(tPonto *p, FILE *planta)
{
    fscanf(planta,"%d%d", &p->x, &p->y);
}

void apresentaPonto(tPonto *p)
{
    printf("[%d,%d]", p->x, p->y);
}

float distanciaPonto(tPonto *p, tPonto *k)
{
    return sqrt(pow(k->x-p->x,2)+pow(k->y-p->y,2));
}

float distY(tPonto *se, tPonto *id)
{
    return (se->y-id->y);
}

float distY(tPonto *se, tPonto *id)
{
    return (id->x-se->x);
}