#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H
#include "Cuenta.h"
class CuentaCorriente: public Cuenta{
    private:
        float limite_sobregiro;
    public:
        CuentaCorriente();
        CuentaCorriente(int, float, float);
        void deposito(float);
        void retiro(float );
        void estado();
        float getLimiteSobregiro();
        void setLimiteSobregiro();
};
#endif // CUENTACORRIENTE_H
