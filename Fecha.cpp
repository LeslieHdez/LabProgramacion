#include "Fecha.h"
#include <iostream>
using namespace std;

Fecha::Fecha(int diafecha, int mesfecha, int aniofecha){
    dia = diafecha;
    mes = mesfecha;
    anio = aniofecha;
}

void Fecha::mostrarFecha(){
    cout << this->dia << "/" << this->mes << "/" << this->anio;
}
