//
//  main.cpp
//  EmployeeInheritance
//
//  Created by Brett Hodges on 3/23/15.
//  Copyright (c) 2015 Brett Hodges. All rights reserved.
//

#include <iostream>
#include "Employee.h"
#include "Student.h"

using namespace std;

Employee::Employee(){
    
}

Employee::Employee(int initID, string initName){
    id = initID;
    name = initName;
}

SalariedEmployee::SalariedEmployee(){
    
}

SalariedEmployee::SalariedEmployee(int initID, string initName, double initSalary) : Employee(initID, initName){
    salary = initSalary;
}

HourlyEmployee::HourlyEmployee(){
    
}

HourlyEmployee::HourlyEmployee(int initID, string initName, double initPayRate) : Employee(initID, initName){
    payRate = initPayRate;
}

Student::Student(){
    
}

Student::Student(int initID, string initName, double initGPA){
    id = initID;
    name = initName;
    GPA = initGPA;
}

StudentEmployee::StudentEmployee(){
    
}

StudentEmployee::StudentEmployee(int initID, string initName, double initGPA, int initHourLimit, double initPayRate) : Student(initID, initName, initGPA), HourlyEmployee(initID, initName, initPayRate){
    hourLimit = initHourLimit;
    
}


int Employee::getID(){
    return id;
}

string Employee::getName(){
    return name;
}

void Employee::setName(string empName){
    name = empName;
}

double SalariedEmployee::getSalary(){
    return salary;
}

void SalariedEmployee::setSalary(double newSalary){
    salary = newSalary;
}

double HourlyEmployee::getPayRate(){
    return payRate;
}

void HourlyEmployee::setPayRate(double newPayRate){
    payRate = newPayRate;
}

int Student::getID(){
    return id;
}

void Student::setID(int newID){
    id = newID;
}

string Student::getName(){
    return name;
}

void Student::setName(string newName){
    name = newName;
}

double Student::getGPA(){
    return GPA;
}

void Student::setGPA(double newGPA){
    GPA = newGPA;
}

int StudentEmployee::getHourLimit(){
    return hourLimit;
}

void StudentEmployee::setHourLimit(int newHourLimit){
    hourLimit = newHourLimit;
}




int main(int argc, const char * argv[]) {
    
    SalariedEmployee emp1 (435600, "Bob", 25000);
    emp1.setSalary(35000);
    cout<<emp1.getSalary()<<endl;
    
    StudentEmployee semp1 (439980, "Bill", 4.0, 20, 10.50);
    semp1.setHourLimit(25);
    cout<<semp1.getHourLimit()<<endl;
    
    
    
    
    return 0;
}
