#pragma once
#ifndef ASSOSIATED_H_INCLUDED
#define ASSOSIATED_H_INCLUDED
#include "employee.h"

class Associated:public Employee{
    public:
        void setSalary();
        void setYear();
        float getSalary();
        int getYear();
        float calcularSueldo();

    private:
        float _salary;
        int _year;
};


#endif // ASSOSIATED_H_INCLUDED
