#include "Tarea.h"

Tarea :: Tarea(int plazo, std::string id, std::string descripcion) {
    this->id = id;
    this->plazo = plazo;
    this->descripcion = descripcion;
}

bool Tarea ::  expiro (){
    return plazo <= 0;
}

double Tarea :: pago (){};

bool Tarea :: operator == (const Tarea& otra){
    return id == otra.id;
}

bool Tarea :: operator < (const Tarea& otra){
    return plazo < otra.plazo;
}

std::string Tarea :: getID (){
    return id;
}

std::string Tarea :: getDescripcion (){
    return descripcion;
}