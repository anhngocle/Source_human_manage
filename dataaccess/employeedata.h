#ifndef _Employee_Data_H_
#define _Employee_Data_H_
#include "..\businessobject\employee.h"
#include <vector>
using namespace std;

class EmployeeData
{
private:
    vector<Employee> _dataEmployee;
    int _maxID;
public:
    EmployeeData();
    int PushBack(Employee e);
    int GetmaxID();
    Employee GetEmployeeData(int i);
    Employee DeleteEmployeeData(int i);
};

#endif