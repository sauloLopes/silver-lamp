#ifndef _CIRCULO
    #define _CIRCULO
        typedef struct{
            tPonto origem;
            int raio;
        }tCirculo;

        void lerCirculo(tCirculo*, FILE*);

        float areaCirculo(tCirculo*);

        float perimetroCirculo(tCirculo*);

        void apresentaCirculo(tCirculo*);
#endif