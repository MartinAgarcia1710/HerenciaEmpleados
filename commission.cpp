#include <iostream>
#include "commission.h"

void Commission::setPorcentaje(){
    std::cout << "ingrese porcentaje de comision\n";
    std::cin >> _porcentaje;
}

float Commission::getPorcentaje(){
    return _porcentaje;
}

void Commission::setVentas(){
    std::cout << "ingrese ventas\n";
    std::cin >> _ventas;
}

float Commission::getVentas(){
    return _ventas;
}

float Commission::calcularSUeldo(){
    float sueldo;

    sueldo = _ventas * _porcentaje / 100;
    return sueldo;
}
