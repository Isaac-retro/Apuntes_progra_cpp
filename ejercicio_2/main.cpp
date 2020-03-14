#include <iostream>
#include "Medico.h"
#include "Paciente.h"
#include "Costes.h"
#include "Hospitalizacion.h"    

using namespace std;

int main(){
    string nombre_p, nombre_m, nro_habitacion, especialidad;
    string motivo;
    string nro_dias;
    string tipo_habitacion;
    string valor_pagar;

    cout << "Ingrese el nombre de un nuevo paciente: ";
    cin >> nombre_p; 
    
    cout<<"Ingrese el numero de habitacion del nuevo paciente: ";
    cin >> nro_habitacion;
    Paciente p(nombre_p, std::stoi(nro_habitacion));
    cout<<"Ingrese el nombre del medico del nuevo paciente: " << nombre_p + " ";
    cin >> nombre_m; 
    cout<<"Ingrese la especializacion del medico: " << nombre_p + " ";
    cin >> especialidad;
    Medico m (nombre_p,especialidad);
    cout << "Ingrese el motivo de la consulta: ";
    cin >> motivo;
    cout << "Ingrese el numero de dias: ";
    cin >> nro_dias;
    cout << "Ingrese el tipo de habitacion: ";
    cin >> tipo_habitacion;
    cout << "Ingrese el valor a pagar: ";
    cin >> valor_pagar;
    Costes c(motivo, std::stoi(nro_dias), tipo_habitacion, std::stof(valor_pagar));

    Hospitalizacion h(1,p,m,c);

    h.mostrarInfo();
    

    
    
    return 0;
}