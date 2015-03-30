//
//  Employee.h
//  EmployeeInheritance
//
//  Created by Brett Hodges on 3/23/15.
//  Copyright (c) 2015 Brett Hodges. All rights reserved.
//

#ifndef EmployeeInheritance_Employee_h
#define EmployeeInheritance_Employee_h

using namespace std;

class Employee{
    
private:
    
    int id;
    string name;
    
public:
    
    Employee();
    Employee(const Employee& orig);
    Employee(int initID, string initName);
    int getID();
    string getName();
    void setName(string empName);
    
};

class SalariedEmployee: public Employee{
    
private:
    double salary;
    
public:
    SalariedEmployee();
    SalariedEmployee(const Employee& orig);
    SalariedEmployee(int initID, string initName, double initSalary);
    double getSalary();
    void setSalary(double newSalary);
    
};

class HourlyEmployee: public Employee{
    
private:
    double payRate;
    
public:
    HourlyEmployee();
    HourlyEmployee(const HourlyEmployee& orig);
    HourlyEmployee(int initID, string initName, double initPayRate);
    double getPayRate();
    void setPayRate(double newPayRate);
};

//friend ostream &operator<<(std::ostream &output, const Employee);

#endif
