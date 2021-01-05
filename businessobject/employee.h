#ifndef _Employee_Object_H_
#define _Employee_Object_H_
#include <string>

using namespace std;

class Employee
{ //declare type: Employee
private:
    int Id;
    string FName;
    char MInit;
    string LName;
    long SSN;
    string BDate;
    string Address;
    char Sex;
    long Salary;
    string SuperSSN;
    int DNO;
public:
    Employee();
    Employee(int id, string fName, char mInit, string lName, long sSN, string bDate, string address, char sex, long salary, string superSSN, int dNO);
    void PrintEmployee();
};

#endif