#pragma once
#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

class Employee{
    public:
        char * getFirstName();
        char * getLastName();
        char * getEmail();
        int getFile();
        void setFirstName(char *firstName);
        void setLastName(char *lastName);
        void setEmail(char *eMail);
        void setFile(int file);
        void cargarDatos();
        void mostrar(Employee empleado);
        employee();

    protected:
        char _firstName[50];
        char _lastName[50];
        char _eMail[50];
        int _file;

};

#endif // EMPLOYEE_H_INCLUDED
