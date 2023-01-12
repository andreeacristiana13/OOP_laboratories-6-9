// lab7 7.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
using namespace std;

class Group {
private: 
    class Student {
    public:
        int age;
        string name;
        Student(int age, string name) {
            this->age = age;
            this->name = name;
        }
    };
    list<Student*> students;
public:
    string groupName;
    Group(string name) {
        this->groupName = name;
    }
    void addStudent(int age, string name) {
        Student* student1 = new Student(age, name);
        this->students.push_back(student1);
    }
    void displayStudents() {
        cout << "\n Numele grupei: " << endl <<  this->groupName << endl;
        cout << "\n Studentii inscrisi:" << endl;
        for (Student* student : this->students) {
            cout << student->name << " " << student->age << endl;
        }
    }
};

int main()
{
    Group* group1 = new Group("Romana");
    Group* group2 = new Group("Matematica");

    group1->addStudent(20, "Mihaela");
    group1->addStudent(20, "Maria");
    group2->addStudent(21, "Deea");
    group2->addStudent(19, "David");

    group1->displayStudents();
    group2->displayStudents();
}


