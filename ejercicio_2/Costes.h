#ifndef COSTES_H
#define COSTES_H
#include <iostream>

using namespace std;

class Costes{
    private:
            string motivo;
            int nro_dias;
            string tipo_habitacion;
            float valor_pagar;
    public:
        Costes();
        Costes(string, int, string, float);
        void setMotivo(string);
        void setNro_dias(int);
        void setTipo_habitacion(string);
        void setValor_pagar(float);
        string getMotivo();
        int getNro_dias();
        string getTipo_habitacion();
        float getValor_pagar();
};

#endif