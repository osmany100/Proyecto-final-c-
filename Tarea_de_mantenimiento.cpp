#include "Tarea_de_mantenimiento.h"

Tarea_de_mantenimiento :: Tarea_de_mantenimiento(std::string tipo_de_falla, int gravedad, std::string id, std::string descripcion, int plazo)
: Tarea(plazo, descripcion, id) {
this->gravedad = gravedad;
this->tipo_de_falla = tipo_de_falla;
}

double Tarea_de_mantenimiento :: pago (){
    if (!expiro())
        return (-100 * gravedad) / plazo;
    else
        return -2000;
}