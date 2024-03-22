#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

class Fecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        Fecha(int d, int m, int a){
            this->dia = d;
            this->mes = m;
            this->anio = a;
        }
        void mostrarFecha(){
            cout << this->dia << "/" << this->mes << "/" << this->anio;
        }
};


#endif // FECHA_H_INCLUDED
