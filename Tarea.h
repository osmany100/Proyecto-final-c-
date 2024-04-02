#ifndef PROYECTO_FINAL_C___TAREA_H
#define PROYECTO_FINAL_C___TAREA_H

#include <string>

class Tarea {

protected:
    int plazo;
    std::string id;
    std::string descripcion;

public:
    Tarea(int plazo, std::string id, std::string descripcion);

    bool expiro ();

    virtual double pago ();

    bool operator == (const Tarea& otra);

    bool operator < (const Tarea& otra);

    std::string getID ();

    std::string getDescripcion ();

};

#endif //PROYECTO_FINAL_C___TAREA_H