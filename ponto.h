#ifndef _PONTO
    #define _PONTO
        typedef struct{
            int x;
            int y;
        }tPonto;

        void lerPonto(tPonto*, FILE*);

        void apresentaPonto(tPonto*);

        float distanciaPonto(tPonto*, tPonto*);

        float distY(tPonto*, tPonto*);

        float distX(tPonto*, tPonto*);
#endif