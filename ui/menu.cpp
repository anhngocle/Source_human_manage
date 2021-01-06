#include "menu.h"
#include <iostream>
using namespace std;

void DisplayMenu(){
    
    cout << endl;
    cout << "*********************** MENU HUMAN RESOURCE MANAGEMENT ************************" << endl << endl;
    cout << "     (EMPLOYEE - DEPARTMENT - DEPT_LOCATIONS - PROJECT - WORKS_ON - DEPENDENT)   " << endl << endl;
    cout << "   1. Chon bang de thao tac."<< endl;
    cout << "   2. Hien thi noi dung tat ca bang "<< endl;
    cout << "   3. Danh sach nhan vien theo Quan ly "<< endl;
    cout << "   4. Danh sach nhan vien co con (DS Khuyen hoc) "<< endl;
    cout << "   5. Danh sach Project number (DS Chi tra thu lao them gio) "<< endl;
    cout << "   6. Danh sach nhan vien khong tham gia Project "<< endl;
    cout << "   7. cau 6 "<< endl;
    cout << "   8. cau 7 "<< endl;
    cout << "   9. cau 8 "<< endl;
    cout << "   10. cau 9 "<< endl;
    cout << "   11. cau 10 "<< endl;
    cout << "===================================END=========================================" << endl << endl;
    int Choose;
    while (1){
    cout << "Nhap lua chon: ";
    cin >> Choose;
    switch(Choose){
        case 1: 
                if(_choosen_case1 == 0){
                    Choose = _choosen_case1;
                }
                int _choosen_case1;
                cout << "1. Chon bang: EMPLOYEE" << endl;
                cout << "2. Chon bang: DEPARTMENT" << endl;
                cout << "3. Chon bang: DEPT_LOCATIONS" << endl;
                cout << "4. Chon bang: PROJECT" << endl;
                cout << "5. Chon bang: WORKS_ON" << endl;
                cout << "6. Chon bang: DEPENDENT" << endl;
                cout << "0. Exit" << endl;
                cout << "==============================" << endl;
                while (_choosen_case1 != 0){
                    cout << "Nhap lua chon: ";
                    cin  >> _choosen_case1;
                    switch(_choosen_case1){
                        case 1: 
                            cout << "Ban da chon bang: EMPLOYEE" << endl;
                            break;
                        case 2: 
                            cout << "Ban da chon bang: DEPARMENT" << endl;
                            break;
                        case 3: 
                            cout << "Ban da chon bang: DEPT_LOCATIONS" << endl;
                            break;
                        case 4: 
                            cout << "Ban da chon bang: PROJECT" << endl;
                            break;
                        case 5: 
                            cout << "Ban da chon bang: WORKS_ON" << endl;
                            break;
                        case 6: 
                            cout << "Ban da chon bang: DEPENDENT" << endl;
                            break;
                        case 0: 
                            cout << "Ban da chon: Exit" << endl;
                            break;
                        default:
                            cout << "Lua chon khong ton tai! Vui long nhap lai" << endl;
                        
                    }
                }
                
                break;
        case 2: 
                cout << "Lenh 2" << endl;
                break;
        case 3: 
                cout << "Lenh 3" << endl;
                break;
        case 4: 
                cout << "Lenh 4" << endl;
                break;
        case 5: 
                cout << "Lenh 5" << endl;
                break;
        case 6: 
                cout << "Lenh 6" << endl;
                break;
        case 7: 
                cout << "Lenh 7" << endl;
                break;       
        case 8: 
                cout << "Lenh 8" << endl;
                break;
        case 9: 
                cout << "Lenh 9" << endl;
                break; 
        case 10: 
                cout << "Lenh 10" << endl;
                break;
        case 11: 
                cout << "Lenh 11" << endl;
                break;
        case 12: 
                cout << "Lenh 12" << endl;
                break;
        default:
                cout << "Lua chon khong ton tai! Vui long nhap lai" << endl;
                break;
    }
    
    }
};


