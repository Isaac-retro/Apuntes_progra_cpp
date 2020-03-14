#ifndef HOSPITALIZACION_H
#define HOSPITALIZACION_H
#include <iostream>
#include "Medico.h"
#include "Paciente.h"
#include "Costes.h"

using namespace std;

class Hospitalizacion{
    private:
        int id;
        Paciente p;
        Medico m;
        Costes c;
    public:
        Hospitalizacion();
        Hospitalizacion(int, Paciente, Medico, Costes);
        void setId(int);
        void setPaciente(Paciente);
        void setMedico(Medico);
        void setCostes(Costes);
        int getId();
        Paciente getPaciente();
        Medico getMedico();
        Costes getCostes();
        void mostrarInfo();
        


};
#endif