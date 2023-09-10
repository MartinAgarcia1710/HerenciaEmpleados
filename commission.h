#pragma once
#ifndef COMMISSION_H_INCLUDED
#define COMMISSION_H_INCLUDED
#include "employee.h"

class Commission:public Employee{
    public:
        void setPorcentaje();
        float getPorcentaje();
        void setVentas();
        float getVentas();
        float calcularSUeldo();
    private:
        float _ventas;
        float _porcentaje;
};

#endif // COMMISSION_H_INCLUDED
