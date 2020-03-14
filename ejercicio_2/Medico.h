#ifndef MEDICO_H
#define MEDICO_H

#include <iostream>

using namespace std;

class Medico {
    private:
        string nombre;
        string especializacion;
    public:
        Medico();
        Medico(string,string);
        void setNombre(string);
        void setEspecializacion(string);
        string getNombre();
        string getEspecialidad();
};
#endif