#include <iostream>
#include "funciones.h"
#include "Asalariado.h"
#include "employee.h"
#include "ForHour.h"
#include "commission.h"
#include "assosiated.h"

void menuAsalariados(){
    int opcion = 1;
    Asalariado persona;

    while(opcion != 0){
        std::cout << "MENU DE EMPLEADOS ASALARIADOS\n\n";
        std::cout << "\n 1. CARGAR DATOS.\n 2. CALCULO DE SUELDO\n 0. SALIR.\n\n";
        std::cout << "Ingresar opcion: \n";
        std::cin >> opcion;

        switch(opcion){
            case 1:
                persona.cargarDatos();
                break;
            case 2:
                if(persona.getSalary() > 0){
                    std::cout << persona.getSalary() << "\n";
                }else{
                    std::cout << "Ningun sueldo cargado\n";
                }
                break;
            case 0:
                opcion = 0;
                break;
        }
    }
}

void menuPorHora(){
    int opcion = 1;
    int horas;
    ForHour persona;

    while(opcion != 0){
        std::cout << "MENU DE EMPLEADOS POR HORA\n\n";
        std::cout << "\n 1. CARGAR DATOS.\n 2. CALCULO DE SUELDO\n 0. SALIR.\n\n";
        std::cout << "Ingresar opcion: \n";
        std::cin >> opcion;

        switch(opcion){
            case 1:
                persona.cargarDatos();
                break;
            case 2:
                persona.setHourprice();
                std::cout << "\n";
                std::cout << "Ingrese cantidad de horas trabajandas \n";
                std::cin >> horas;
                std::cout << persona.calcularSueldo(horas) << "\n";
                break;
            case 0:
                opcion = 0;
                break;
        }
    }
}

void menuPorComision(){
    int opcion = 1;
//    int horas;
    Commission persona;

    while(opcion != 0){
        std::cout << "MENU DE EMPLEADOS POR COMISION\n\n";
        std::cout << "\n 1. CARGAR DATOS.\n 2. CALCULO DE SUELDO\n 0. SALIR.\n\n";
        std::cout << "Ingresar opcion: \n";
        std::cin >> opcion;

        switch(opcion){
            case 1:
                persona.cargarDatos();
                break;
            case 2:
                persona.setPorcentaje();
                persona.setVentas();
                std::cout << persona.calcularSUeldo() << "\n";

                break;
            case 0:
                opcion = 0;
                break;
        }
    }
}

void menuAsociados(){
    int opcion = 1;
    //int horas;
    Associated persona;

    while(opcion != 0){
        std::cout << "MENU DE EMPLEADOS ASOCIADOS\n\n";
        std::cout << "\n 1. CARGAR DATOS.\n 2. CALCULO DE SUELDO\n 0. SALIR.\n\n";
        std::cout << "Ingresar opcion: \n";
        std::cin >> opcion;

        switch(opcion){
            case 1:
                persona.cargarDatos();
                break;
            case 2:
                persona.setSalary();
                persona.setYear();
                std::cout << persona.calcularSueldo() << "\n";
                break;
            case 0:
                opcion = 0;
                break;
        }
    }
}

void cargarEmpleados(Employee vectorEmpleados[]){
    int canti;

    std::cout << "Cuantos empleados quiere registrar?\n";
    std::cin >> canti;

    for(int x = 0; x < canti ; x++){
        vectorEmpleados[x].cargarDatos();
    }

}

void mostrarEmpleados(Employee vectorEmpleados[]){

}
