#include <stdio.h>
#include <math.h>
#include "ponto.h"
#include "circulo.h"

int main()
{
    tCirculo circ;

    FILE *planta;

    planta = fopen("planta.txt", "r");

    lerCirculo(&circ,planta);

    apresentaCirculo(&circ);

    printf("\n\n");

    return 0;
}