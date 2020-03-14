#include <iostream>
#include "Medico.h"
#include "Paciente.h"
#include "Costes.h"
#include "Hospitalizacion.h"

using namespace std;

//Paciente
Paciente::Paciente(){};
Paciente::Paciente(string nombre, int nro_cuarto){
    this->nombre = nombre;
    this->nro_cuarto = nro_cuarto;
}

string Paciente::getNombre(){
    return nombre;
}
int Paciente::getNroC(){
    return  nro_cuarto;
}

void Paciente::setNombre(string nombre){
    this->nombre = nombre;
    this->nro_cuarto = nro_cuarto;
}
void Paciente::setNroC(int nro_cuarto){
    this->nro_cuarto = nro_cuarto;
}

//Medico
Medico::Medico(){};
Medico::Medico(string nombre, string especializacion){
    this->nombre = nombre;
    this->especializacion = especializacion;
}

string Medico::getNombre(){
    return nombre;
}
string Medico::getEspecialidad(){
    return  especializacion;
}

void Medico::setNombre(string nombre){
    this->nombre = nombre;
}
void Medico::setEspecializacion(string nro_cuarto){
    this->especializacion = especializacion;
}

//Costes
Costes::Costes(){};
Costes::Costes(string motivo, int nro_dias, string tipo_habitacion, float valor_pagar){
    this->motivo = motivo;
    this->nro_dias = nro_dias;
    this->tipo_habitacion = tipo_habitacion;
    this->valor_pagar = valor_pagar;
}

void Costes::setMotivo(string motivo){
    this->motivo = motivo;
}

void Costes::setNro_dias(int nro_dias){
    this->nro_dias = nro_dias;
}

void Costes::setTipo_habitacion(string tipo_habitacion){
    this->tipo_habitacion = tipo_habitacion;
}

void Costes::setValor_pagar(float valor_pagar){
    this->valor_pagar = valor_pagar;
}


string Costes::getMotivo(){
    return motivo;
}

int Costes::getNro_dias(){
    return nro_dias;
}

string Costes::getTipo_habitacion(){
    return tipo_habitacion;
}

float Costes::getValor_pagar(){
    return valor_pagar;
}


//Hospitalizacion
Hospitalizacion::Hospitalizacion(){}
Hospitalizacion::Hospitalizacion(int id, Paciente p, Medico m, Costes c){
    this->id =id;
    this->p = p;
    this->m = m;
    this->c = c;
}


void Hospitalizacion::setId (int id){   
    this->id =id;
}
void Hospitalizacion::setPaciente (Paciente p){
    this->p = p;
}
void Hospitalizacion::setMedico (Medico m){
    this->m = m;
}
void Hospitalizacion::setCostes (Costes c){
    this->c = c;
}

int Hospitalizacion::getId (){
    return id;
}
Paciente Hospitalizacion::getPaciente (){
    return p;
}
Medico Hospitalizacion::getMedico (){
    return m;
}
Costes Hospitalizacion::getCostes (){
    return c;
}

void Hospitalizacion::mostrarInfo(){
    cout << "Hospitalizacion Nro: " + to_string(id);
    cout << "\nPaciente: " + p.getNombre() + " Habitacion: " +   to_string(p.getNroC()) ;
    cout << "\nMedico: " + m.getNombre() + " Especialidad: " + m.getEspecialidad();
    cout << "\nMotivo: " + c.getMotivo()  + " Nro_dias: " + to_string(c.getNro_dias());
    cout << "\nTipo Habitacion: " + c.getTipo_habitacion() + " Valor a pagar:" + to_string(c.getValor_pagar);
}
