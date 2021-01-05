#include "employee.h"
#include <iostream>

using namespace std;

Employee::Employee(){};
Employee::Employee(int id, string fName, char mInit, string lName, long sSN, string bDate, string address, char sex, long salary, string superSSN, int dNO){
    Id = id;
    FName = fName;
    MInit = mInit;
    LName = lName;
    SSN = sSN;
    BDate = bDate;
    Address = address;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dNO;
};
void Employee::PrintEmployee(){
    cout << Id << " | " << FName << " | " << MInit << " | " << LName << " | " << SSN << " | " << BDate << " | " << Address << " | " << Sex << " | " << Salary << " | " << SuperSSN << " | " << DNO << endl;
};