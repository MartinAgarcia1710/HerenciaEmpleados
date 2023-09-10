#include <iostream>
#include "assosiated.h"
void Associated::setSalary(){
    std::cout << "Ingrese salario fijo\n";
    std::cin >> _salary;
}

void Associated::setYear(){
    std::cout << "Ingrese antiguedad\n";
    std::cin >> _year;
}

float Associated::getSalary(){
    return _salary;
}

int Associated::getYear(){
    return _year;
}

float Associated::calcularSueldo(){
    if(_year > 5 && _year <= 15){
        _salary = _salary * 1.10;
    }else if(_year > 15 && _year <= 20){
        _salary = _salary * 1.20;
    }else if(_year > 20){
        _salary = _salary *1.50;
    }
    return _salary;
}
