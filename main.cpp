/*
*/
#include <iostream>
#include "employee.h"
#include "assosiated.h"
#include "commission.h"
#include "Asalariado.h"
#include "ForHour.h"
#include "funciones.h"

int main(){
    int a = 1;
    int opcion;
    Employee vectorEmpleados[10];

    while(a != 0){
        std::cout << "CALCULO DE HONORARIOS DE EMPLEADOS\n\n";
        std::cout << "TIPOS DE EMPLEADOS.\n 1. ASALARIADOS.\n 2. POR HORA.\n 3. POR COMISION.\n 4. ASOCIADOS.\n 5. MENU NOMINA DE EMPLEADOS\n\n";
        std::cout << "Ingresar tipo de empleado: \n";
        std::cin >> opcion;

        system("cls");

        switch(opcion){
            case 1:
                menuAsalariados();
                break;
            case 2:
                menuPorHora();
                break;
            case 3:
                menuPorComision();
                break;
            case 4:
                menuAsociados();
                break;
            case 5:
                a = 0;
                break;
        }
    }

    system("cls");

    while(true){
        std::cout << "NOMINA DE EMPLEADOS ORDENADA POR LEGAJO\n\n";
        std::cout << "1. CARGAR EMPLEADOS.\n2. MOSTRAR EMPLEADOS ORDENADOS POR LEGAJOS.\n0. SALIR\n\n";
        std::cout << "Ingresar tipo de empleado: \n";
        std::cin >> opcion;

        switch(opcion){
            case 1:
                cargarEmpleados(vectorEmpleados);
                break;
            case 2:
                mostrarEmpleados(vectorEmpleados);
                break;
            case 0:
                return 0;
        }
    }
	return 0;
}
