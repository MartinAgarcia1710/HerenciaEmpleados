#pragma once
#ifndef ASALARIADO_H_INCLUDED
#define ASALARIADO_H_INCLUDED
#include "employee.h"

class Asalariado:public Employee{
    public:
        void setSalary(float salary);
        float getSalary();
       /// void cargarDatos();
        void mostrarDatos();
        asalariado();

    private:
        float _salary = 0;
};

#endif // ASALARIADO_H_INCLUDED
