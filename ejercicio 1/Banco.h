#ifndef BANCO_H
#define BANCO_H
#include "Cuenta.h"
#include "CuentaAhorros.h"
#include "CuentaCorriente.h"

#define NUM_CTAS 3

class Banco{
    private:
        CuentaAhorros cuentasA[NUM_CTAS];
        CuentaCorriente cuentasC[NUM_CTAS];
    public:
        Banco();
        CuentaAhorros getCuentaByNroA(int);
        void setCuentaA(CuentaAhorros,int);
        CuentaCorriente getCuentaByNroC(int);
        void setCuentaC(CuentaCorriente,int);
};

#endif // BANCO_H
