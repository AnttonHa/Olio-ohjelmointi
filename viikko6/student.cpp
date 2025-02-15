#include "student.h"

Student::Student(string n, int a)
{
    Age = a;
    Name = n;
}
void Student::setAge(int a)
{
    Age = a;
}

void Student::setName(string n)
{
    Name = n;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << "Name: " << Name << ", Age: " << Age << endl;
}
