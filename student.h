#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age) : name(name), age(age){}

    string getName() const { return name; }
    int getAge() const { return age; }

    void printInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    Student(string name, int age) : Person(name, age) {}

    void printStudentInfo() const {
        cout << "Student name: " << name << ", age: " << age << endl;
    }
};

#endif // STUDENT_H
