//
//  Student.h
//  EmployeeInheritance
//
//  Created by Brett Hodges on 3/23/15.
//  Copyright (c) 2015 Brett Hodges. All rights reserved.
//

#ifndef EmployeeInheritance_Student_h
#define EmployeeInheritance_Student_h
using namespace std;

class Student{
    
private:
    int id;
    string name;
    double GPA;
    
public:
    Student();
    Student(const Student& orig);
    Student(int initID, string initName, double initGPA);
    int getID();
    void setID(int newID);
    string getName();
    void setName(string newName);
    double getGPA();
    void setGPA(double newGPA);
};

class StudentEmployee: public Student, public HourlyEmployee{
    
private:
    int hourLimit;
    
public:
    StudentEmployee();
    StudentEmployee(StudentEmployee& orig);
    StudentEmployee(int initID, string initName, double initGPA, int initHourLimit, double initPayRate);
    int getHourLimit();
    void setHourLimit(int newHourLimit);
    
};

#endif
