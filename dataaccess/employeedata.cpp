#include "employeedata.h"
#include <iostream>
using namespace std;

EmployeeData::EmployeeData(){
    _maxID = 0;
    _dataEmployee.resize(0);
};
int EmployeeData::PushBack(Employee e){
    _dataEmployee.push_back(e);
    _maxID = _maxID + 1;
    return _maxID;
};
int EmployeeData::GetmaxID(){
    return _maxID;
};
Employee EmployeeData::GetEmployeeData(int i){
        return _dataEmployee[i];
};
Employee EmployeeData::DeleteEmployeeData(int i){
        _dataEmployee[i];
        return _dataEmployee[i];
};
