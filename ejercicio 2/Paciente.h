#ifndef PACIENTE_H
#define PACIENTE_H
#include <iostream>

using namespace std;

class Paciente{
    private:
        string nombre;
        int nro_cuarto;
    public:
        Paciente();
        Paciente(string, int);
        void setNombre(string);
        void setNroC(int);
        string getNombre();
        int getNroC();
};
#endif