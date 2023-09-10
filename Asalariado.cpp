#include <iostream>
#include "Asalariado.h"
#include "employee.h"

void Asalariado::setSalary(float salary){
    _salary = salary;
}

float Asalariado::getSalary(){
    return _salary;
}

Asalariado::asalariado(){
    _salary = 0;
}
