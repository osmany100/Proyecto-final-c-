#ifndef PROYECTO_FINAL_C___TAREA_DE_PAGO_H
#define PROYECTO_FINAL_C___TAREA_DE_PAGO_H

#include "Tarea.h"

class Tarea_de_pago : public Tarea {

protected:
    int dificultad;
    std::string cliente;

public:
    Tarea_de_pago(int dificultad, std::string cliente, int plazo, std::string id, std::string descripcion);

    double pago ();
};

#endif //PROYECTO_FINAL_C___TAREA_DE_PAGO_H