#ifndef CUENTA_H
#define CUENTA_H
//andres galvez
//200456 //
// deber 1 ejercicio 1
// 24 de enero de 2020

//librerias utilizadas
#include <iostream>
#include <math.h>

using namespace std;

//creacion clase cuenta
class Cuenta{
    private:
        int numeroCuenta;
        float saldo;
    public:
        //constructor - sobrecarga de constructores
        Cuenta();
        Cuenta(int, float);
        //funciones generales que se usaran en el menu
        int getNumeroCuenta();
        void setNumeroCuenta(int);
        float getSaldo();
        void setSaldo(float );
        // polimorfismo   
        virtual void deposito(float);
        virtual void retiro(float );
        virtual void estado();
};

#endif // CUENTA_H
