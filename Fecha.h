#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <iostream>
class Fecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        Fecha(int d, int m, int a);
        void mostrarFecha();
};



#endif // FECHA_H_INCLUDED
