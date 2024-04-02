#include <iostream>
#include "Gestor_de_tareas.h"
#include "Tarea_de_mantenimiento.h"
#include "Tarea_de_pago.h"
#include "Tarea.h"

int main() {

    Gestor_de_tareas *gestor = new Gestor_de_tareas ();

    Tarea *t1 = new Tarea_de_pago(7, "XETID", 30, "x20", "Pagina web sobre la universidad");
    Tarea *t2 = new Tarea_de_mantenimiento("Rotura del procesador", 9, "p15", "Se mojo el procesador", 6);
    Tarea *t3 = new Tarea_de_pago(4, "Centro de calculo", 50, "c45", "Ayuda en el desarrollo de IA");
    Tarea *t4 = new Tarea_de_mantenimiento("Antivirus desactualizado", 3, "o25", "Buscar la actualizacion", 30);
    Tarea *t5 = new Tarea_de_pago(8, "Sevillano", -10, "s40", "Confeccion de una pagina web con informacion y el menu");
    Tarea *t6 = new Tarea_de_mantenimiento("Averia en el disco duro", 10, "i23", "Comprar un nuevo disco duro interno", 2);
    Tarea *t7 = new Tarea_de_pago(10, "Corte real", 7, "r32", "Pagina web y aplicacion para reservar turnos");
    Tarea *t8 = new Tarea_de_mantenimiento("Rotura del teclado", 5, "k56", "Reparar las teclas W D y X", 2);
    Tarea *t9 = new Tarea_de_pago(3, "Guapachosa", -1, "x40", "Confeccion de una pagina web con informacion y el menu");
    Tarea *t10 = new Tarea_de_mantenimiento("Bateria defectuosa", 10, "l34", "Adquirir una nueva bateria", 1);

    gestor->agregar_tarea(t1);
    gestor->agregar_tarea(t2);
    gestor->agregar_tarea(t3);
    gestor->agregar_tarea(t4);
    gestor->agregar_tarea(t5);
    gestor->agregar_tarea(t6);
    gestor->agregar_tarea(t7);
    gestor->agregar_tarea(t8);
    gestor->agregar_tarea(t9);
    gestor->agregar_tarea(t10);

    gestor->Guardar_en_archivo("Tareas.bin");

    gestor->eliminar_expiradas();

    gestor->eliminar_tarea("s40");

    gestor->Guardar_en_archivo("Tareas.bin");

    gestor->mostrar_descripcion(3);

    gestor->mostrar_todas();

    gestor->ganancia_total();

    gestor->cant();

    return 0;
}
