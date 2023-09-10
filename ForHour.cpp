#include <iostream>
#include "ForHour.h"
#include "employee.h"
void ForHour::setHourprice(){
    std::cout << "Ingrese precio por hora\n";
    std::cin >>_hourPrice;
    std::cout << "\n";
}

float ForHour::getHourPrice(){
    return _hourPrice;
}

float ForHour::calcularSueldo(int horas){
    _salary = horas * _hourPrice;
    return _salary;

}

float ForHour::getSalary(){
    return _salary;
}
