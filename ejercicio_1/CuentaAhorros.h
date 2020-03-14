#ifndef CUENTAAHORROS_H
#define CUENTAAHORROS_H
#include "Cuenta.h"
class CuentaAhorros: public Cuenta {
    private:
        float interes;
    public:
        CuentaAhorros();
        CuentaAhorros(int, float, float);
        float getInteres();
        void setInteres(float);
        void agregarInteres(float);
        void deposito(float);
        void retiro(float );
        void estado();
};

#endif // CUENTAAHORROS_H
