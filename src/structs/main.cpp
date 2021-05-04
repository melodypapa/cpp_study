#include <iostream>
#include "employee.h"

int main()
{
    Employee anEmployee;
    anEmployee.firstInitial = 'M';
    anEmployee.lastInitial = 'G';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 8000;

    std::cout << "Employee: " << anEmployee.firstInitial
              << anEmployee.lastInitial << std::endl;
}