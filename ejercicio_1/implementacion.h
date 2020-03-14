#include <iostream>
#include "Cuenta.h"
#include "CuentaAhorros.h"
#include "CuentaCorriente.h"
#include "Cuenta.h"
#include "Banco.h"

#define NUM_CTAS 3

using namespace std;

//cuenta//
Cuenta::Cuenta(){}
Cuenta::Cuenta(int numeroCuenta , float saldo){
    this->numeroCuenta = numeroCuenta;
    this->saldo = saldo;
};
int Cuenta::getNumeroCuenta(){
        return numeroCuenta;
};
void Cuenta::setNumeroCuenta(int numeroCuenta){
    this->numeroCuenta = numeroCuenta;
};
float Cuenta::getSaldo(){
    return saldo;
};
void Cuenta::setSaldo(float saldo){
    this->saldo = saldo;
};
void Cuenta::deposito(float suma){
    this->saldo += suma;
};
void Cuenta::retiro(float resta){
    if(resta >= saldo ){
        cout<<"La cantidad a retirar excede el saldo actual"<<endl;
    }else{
        this->saldo -= resta;
    }
};
void Cuenta::estado(){
    cout<<"cuenta numero: "<<numeroCuenta<<" Saldo = "<<saldo<<" USD"<<endl;
};

//////cuenta ahorros////
CuentaAhorros::CuentaAhorros(){};
CuentaAhorros::CuentaAhorros(int numeroCuenta, float saldo, float interes): Cuenta(numeroCuenta, saldo){
    this->interes = interes;
};  
void CuentaAhorros::agregarInteres(float interes){
    cout<<" se agrega interes la cuenta de ahorros " << endl;
    Cuenta::setSaldo( Cuenta::getSaldo() + Cuenta::getSaldo()*interes);
    
};
void CuentaAhorros::deposito(float suma){
    cout<<" este es un deposito de la cuenta de ahorros: " << to_string(Cuenta::getNumeroCuenta()) <<" de: " + to_string(suma) << endl;
    Cuenta::setSaldo(Cuenta::getSaldo() + suma);
    cout<<"\n"<<endl;
};
void CuentaAhorros::retiro(float suma){
    cout<<" este es un retiro de la cuenta de ahorros "  << endl;
    if (Cuenta::getSaldo() - suma >= 0 ){
        Cuenta::setSaldo(Cuenta::getSaldo() - suma);
    } else {
        cout << "Saldo insuficiente" << endl;
    }
    cout<<"\n"<<endl;
};
void CuentaAhorros::estado(){
    cout << "este es el estado de la cuenta de ahorros "  << endl;
    Cuenta::estado();
    cout<<"\n"<<endl;
};

//////cuenta corriente/////
CuentaCorriente::CuentaCorriente(){};
CuentaCorriente::CuentaCorriente(int numeroCuenta, float saldo, float limite): Cuenta(numeroCuenta, saldo){
    this->limite_sobregiro = limite;
};

void CuentaCorriente::deposito(float suma){
    cout<<" este es un deposito de la cuenta corriente " << endl;
    Cuenta::setSaldo(Cuenta::getSaldo() + suma);
    cout<<"\n"<<endl;
};
void CuentaCorriente::retiro(float suma){
    cout<<" este es un retiro de la cuenta corriente "  <<endl;
    if(suma <= Cuenta::getSaldo()){
        Cuenta::setSaldo(Cuenta::getSaldo() - suma);
        cout << "retiro exitoso" << endl;
    }else if(suma > Cuenta::getSaldo() + limite_sobregiro){
        cout << "Saldo insuficiente y limite sobrepasadado" << endl;
    }else if(suma == Cuenta::getSaldo() + limite_sobregiro){
        Cuenta::setSaldo(0);
        limite_sobregiro =0;
    }else {
        limite_sobregiro += - Cuenta::getSaldo() + suma;
        Cuenta::setSaldo(0);
    }
    cout<<"\n"<<endl;
};
void CuentaCorriente::estado(){
    cout<<" este es el estado de la cuenta corriente " <<endl;
    Cuenta::estado();
    cout<<"\n"<<endl;    
};

///Banco
Banco::Banco(){}

CuentaAhorros Banco::getCuentaByNroA(int numeroCuentaB){
    unsigned int i = 0;
    for( i ; i < NUM_CTAS ; i++ ){
        if (cuentasA[i].getNumeroCuenta() ==  numeroCuentaB){
            break;
        }
    }
    return cuentasA[i];
}

void Banco::setCuentaA(CuentaAhorros cuenta, int index){
    cuentasA[index] = cuenta;
}

CuentaCorriente Banco::getCuentaByNroC(int numeroCuentaB){
    unsigned int i = 0;
    for( i ; i < NUM_CTAS ; i++ ){
        if (cuentasC[i].getNumeroCuenta() ==  numeroCuentaB){
            break;
        }
    }
    return cuentasC[i];
}

void Banco::setCuentaC(CuentaCorriente cuenta, int index){
    cuentasC[index] = cuenta;
}