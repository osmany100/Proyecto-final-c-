#ifndef PROYECTO_FINAL_C___GESTOR_DE_TAREAS_H
#define PROYECTO_FINAL_C___GESTOR_DE_TAREAS_H

#include "Tarea_de_pago.h"
#include "Tarea_de_mantenimiento.h"

#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>

class Gestor_de_tareas {

private:

    std::vector<Tarea*> tareas;

public:

    void Guardar_en_archivo(const std::string& fileName);

    void ordenar ();

    void Cargar_desde_arcivo(const std::string& fileName);

    void agregar_tarea (Tarea* t);

    void eliminar_tarea (std::string id_tarea);

    void ganancia_total ();

    void eliminar_expiradas ();

    void cant ();

    void mostrar_descripcion (int x);

    void mostrar_todas ();

};

#endif //PROYECTO_FINAL_C___GESTOR_DE_TAREAS_H
