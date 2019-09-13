#include <stdio.h>
#include <math.h>
#include "ponto.h"
#include "retangulo.h"

void lerRetangulo(tRetangulo *r, FILE *planta)
{
    lerPonto(&r->se,planta);

    lerPonto(&r->id,planta);
}

float baseRetangulo(tRetangulo *r)
{
    
}