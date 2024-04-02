#ifndef PROYECTO_FINAL_C___TAREA_DE_MANTENIMIENTO_H
#define PROYECTO_FINAL_C___TAREA_DE_MANTENIMIENTO_H

#include "Tarea.h"

class Tarea_de_mantenimiento : public Tarea {

protected:
    std::string tipo_de_falla;
    int gravedad;

public:
    Tarea_de_mantenimiento(std::string tipo_de_falla, int gravedad, std::string id, std::string descripcion, int plazo);

    double pago ();
};

#endif //PROYECTO_FINAL_C___TAREA_DE_MANTENIMIENTO_H