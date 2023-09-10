#include <iostream>
#include "employee.h"
#include <string>
#include "string.h"
char *Employee::getFirstName(){
    return _firstName;
}

char *Employee::getLastName(){
    return _lastName;
}

char *Employee::getEmail(){
    return _eMail;
}

int Employee::getFile(){
    return _file;
}

void Employee::setFirstName(char *firstName){
    strcpy(_firstName, firstName);
}

void Employee::setLastName(char *lastName){
    strcpy(_lastName, lastName);
}

void Employee::setEmail(char *eMail){
    strcpy(_eMail, eMail);
}

void Employee::setFile(int file){
    _file = file;
}
void Employee::cargarDatos(){
 std::cout << "Ingrese Nombre:\n ";
    std::cin >> _firstName;
    std::cout << "Ingrese Apellido\n";
    std::cin >> _lastName;
    std::cout << "Ingrese legajo\n";
    std::cin >> _file;
    std::cout << "Ingrese e-mail\n";
    std::cin >> _eMail;
}

void Employee::mostrar(Employee empleado){
    std::cout << "NOMBRE Y APELLIDO: \n" << empleado.getFirstName() << " " << empleado.getLastName() << "\n";
    std::cout << "e-Mail: \n" << empleado.getEmail() << "\n";
    std::cout << "LEGAJO: \n" << empleado.getFile() << "\n";
}
