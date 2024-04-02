#include "Gestor_de_tareas.h"

void Gestor_de_tareas :: agregar_tarea (Tarea* t){

    bool x = false;

    for (auto & tarea : tareas)
        if (tarea == t)
            x = true;

    if (!x){
        tareas.push_back(t);
        std::cout<<"Se agnadio una tarea"<<std::endl;
    }else
        std::cout<<"Esta tarea ya existe"<<std::endl;

    ordenar();
}

void Gestor_de_tareas :: eliminar_tarea (std::string id_tarea){

    for (int i = 0; i < tareas.size(); i++){
        if (tareas[i]->getID() == id_tarea)
            tareas.erase(tareas.begin() + i);
    }

    std::cout<<"Se elimino la tarea "<<id_tarea<<std::endl;
}

void Gestor_de_tareas :: ganancia_total (){
    double x = 0;

    for (auto & tarea : tareas)
        x += tarea->pago();

    std::cout<<"Ganancia total: "<<x<<std::endl;
}

void Gestor_de_tareas :: eliminar_expiradas (){

    for (int i = 0; i < tareas.size(); i++)
        if (tareas[i]->expiro())
            tareas.erase(tareas.begin() + i);

    std::cout<<"Se eliminaron las tareas expiradas"<<std::endl;
}

void Gestor_de_tareas :: cant (){
    std::cout<<"Hay "<<tareas.size()<<" "<<"tareas en la lista"<<std::endl;
}

void Gestor_de_tareas :: mostrar_descripcion (int x){

    if (x < tareas.size() && x >= 0)
        std::cout<<tareas[x]->getID()<<" : "<<tareas[x]->getDescripcion()<<std::endl;
    else
        std::cout<<"No se encontro la tarea"<<std::endl;
}

void Gestor_de_tareas :: mostrar_todas (){

    std::cout<<"Lista de tareas:"<<std::endl;

    for (auto & tarea : tareas)
        std::cout<<tarea->getID()<<" : "<<tarea->getDescripcion()<<std::endl;
}

void Gestor_de_tareas :: Guardar_en_archivo(const std::string& fileName) {
    std::ofstream outputFile(fileName, std::ios::binary);
    if (outputFile.is_open()) {
        outputFile.write(reinterpret_cast<const char*>(&tareas[0]), tareas.size() * sizeof(Tarea));
        outputFile.close();
        std::cout << "Tareas guardadas exitosamente en el archivo: " << fileName << std::endl;
    } else
        std::cerr << "Error al abrir el archivo para guardar las tareas" << std::endl;
}

void Gestor_de_tareas :: ordenar (){

    std::sort(tareas.begin(), tareas.end());
    Guardar_en_archivo("Tareas.bin");
}