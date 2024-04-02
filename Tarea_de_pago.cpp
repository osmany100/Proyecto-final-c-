#include "Tarea_de_pago.h"

Tarea_de_pago :: Tarea_de_pago(int dificultad, std::string cliente, int plazo, std::string id, std::string descripcion)
        : Tarea(plazo, id, descripcion){
    this->cliente = cliente;
    this->dificultad = dificultad;
}

double Tarea_de_pago :: pago (){

    if (!expiro())
        return 1000 * dificultad / plazo;
    else
        return 0;
}