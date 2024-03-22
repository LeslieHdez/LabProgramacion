#include "Cliente.h"

Cliente::Cliente(int idCl, string nombreCl, string apellidoCl){
    idCliente = idCl;
    nombre = nombreCl;
    apellido = apellidoCl;
}

int Cliente::getIdCliente(){
    return this->idCliente;
}
string Cliente::getNombre(){
    return this->nombre;
}
string Cliente::getApellido(){
    return this->apellido;
}
