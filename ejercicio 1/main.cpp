#include <iostream>
#include "Cuenta.h"
#include "CuentaAhorros.h"
#include "CuentaCorriente.h"
#include "Banco.h"
#include "implementacion.h"

using namespace std;

int main(){
    Banco bank = Banco();
    //El codigo comprensido aqui puede cambiar segun sea el caso requrido
    // el tamaño definido del arreglo por cuestiones practicas es de 3
    CuentaAhorros cta1 = CuentaAhorros(1001, 1000.0, 0.06);
    CuentaCorriente cta2 = CuentaCorriente(1002, 20000.0, 200.0);
    CuentaAhorros cta3 = CuentaAhorros(1003, 3000.0, 0.1);
    
    // las cuentas se agregan al banco
    bank.setCuentaA(cta1,0);
    bank.setCuentaC(cta2,0);
    bank.setCuentaA(cta3,1);

    // se realizan operaciones de las cuentas desde la clase Banco
    bank.getCuentaByNroA(1001).estado();
    cta1.deposito(500.0);
    bank.setCuentaA(cta1,0);    
    bank.getCuentaByNroA(1001).estado();

    return 0;
}
