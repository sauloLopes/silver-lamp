#ifndef _RETANGULO
    #define _RETANGULO
        typedef struct{
            tPonto se;
            tPonto id;            
        }tRetangulo;

        void lerRetangulo(tRetangulo*, FILE*);

        float baseRetangulo(tRetangulo*);

        float alturaRetangulo(tRetangulo*);

        float areaRetangulo(tRetangulo*);

        float perimetroRetangulo(tRetangulo*);
#endif