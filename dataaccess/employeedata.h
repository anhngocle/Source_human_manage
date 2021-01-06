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
    int PushBack(Employee e);                  //Them nhan vien
    int GetmaxID();
    Employee GetEmployeeData(int& i);
    int DeleteEmployeeData(int& i);           //Xoa nhan vien
    Employee EditEmployeeData(int& i);
};

#endif