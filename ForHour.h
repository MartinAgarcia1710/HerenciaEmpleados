#pragma once
#ifndef FORHOUR_H_INCLUDED
#define FORHOUR_H_INCLUDED
#include "employee.h"

class ForHour:public Employee{
    public:
        void setHourprice();
        float getHourPrice();
        float getSalary();
        float calcularSueldo(int horas);

    private:
        float _hourPrice;
        float _salary = 0;
};

#endif // FORHOUR_H_INCLUDED
