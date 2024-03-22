#include "Prestamo.h"
#include "Cliente.h"
#include "Pago.h"
#include "Fecha.h"
#define DIMP 5

Prestamo::Prestamo(){
    numeroPrestamo = 0;
    montoAprobado = 0;
    saldoPendiente = 0;
    contadorPagos = 0;
}
Prestamo::Prestamo(int np, Cliente *cli, Fecha *f1, float ma){
    numeroPrestamo = np;
    cliente = cli;
    fechaAprobacion = f1;
    montoAprobado = ma;
    saldoPendiente = ma;
    contadorPagos = 0;
}
int Prestamo::getNumeroPrestamo(){
    return this->numeroPrestamo;
}
void Prestamo::setNumeroPrestamo(int np){
    this->numeroPrestamo = np;
}
Cliente *Prestamo::getCliente(){
    return this->cliente;
}
void Prestamo::setCliente(Cliente *cli){
    cliente = cli;
}
void Prestamo::setFechaAprobacion(Fecha *f1){
    fechaAprobacion =  f1;
}
Fecha *Prestamo::getFechaAprobacion(){
    return this->fechaAprobacion;
}
void Prestamo::setMontoAprobado(float ma){
    montoAprobado = ma;
}
float Prestamo::getMontoAprobado(){
    return this->montoAprobado;
}
bool Prestamo::hacerPago(Pago *pg){
    bool retorno = false;
    if (this->contadorPagos < DIMP){
        this->lstPagos[this->contadorPagos] = pg,
        this->contadorPagos++;
        this->saldoPendiente -= pg->getMontoPago();
        retorno = true;
    }
    return retorno;
}
Pago** Prestamo::getLstPago(){
    return this->lstPagos;
}
float Prestamo::getSaldoPendiente(){
    return this->saldoPendiente;
}
int Prestamo::getContadorPagos(){
    return this->contadorPagos;
}
