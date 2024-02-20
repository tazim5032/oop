#include<bits/stdc++.h>
#include<dos.h>
using namespace std;

class Employee{
    private:
        char* emp_name;
        int emp_join_year;
        int emp_salary;

    public:
        Employee(char* name, int year, double salary);

    private:
        int workedYear();
        void printInfo();
};

Employee::Employee(char* name, int year, double salary){
    emp_name = name;
    emp_join_year = year;
    emp_salary = salary;
    printInfo();
}
int Employee::workedYear(){
    int yearDiff = 2024 - emp_join_year;
    return yearDiff;
}
void Employee::printInfo(){
    cout<<"Name :"<<emp_name<<endl;
    cout<<"Join Date : "<<emp_join_year<<endl;
    cout<<"Salary : "<<emp_salary<<endl;
    cout<<"Worked : "<<workedYear()<<endl;
    cout<<endl;
}
int main(){
    Employee RAM("RAM", 1997, 12500);
    Employee SAM("SAM", 1986,10000);
    Employee JADU("JADU", 2001,87000);
    Employee MADHU("MADHU", 2002, 90000);
}
