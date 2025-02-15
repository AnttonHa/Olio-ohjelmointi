#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>


using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    string Name;
    int Age;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout<<"Anna opiskelijan nimi"<<endl;
            cin>>Name;
            cout<<"Anna opskelijan ika"<<endl;
            cin>>Age;
            // Lisää uusi student StudentList vektoriin.
            studentList.emplace_back(Name,Age);
            break;
        }
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden nimet
            cout << "Opiskelijat:" << endl;
            for (auto& student : studentList)
            {
                student.printStudentInfo(); // Tulostaa kunkin opiskelijan tiedot
            }
            break;


        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(), [](Student& a,Student& b) {
                return a.getName() < b.getName();
            });
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            for (auto& student : studentList)
            {
                student.printStudentInfo(); // Tulostaa kunkin opiskelijan tiedot
            }

            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            sort(studentList.begin(), studentList.end(), [](Student& a,Student& b) {
                return a.getAge() < b.getAge();
            });
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            for (auto& student : studentList)
            {
                student.printStudentInfo(); // Tulostaa kunkin opiskelijan tiedot
            }
            break;
        case 4:
            {
            // Kysy käyttäjältä opiskelijan nimi
            cout << "Anna opiskelijan nimi: "<<endl;
            cin>>Name;
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            auto it = find_if(studentList.begin(), studentList.end(),[Name](Student student) {
                return student.getName() == Name;
            });
            if(it!=studentList.end())
            {
                cout<<"Opiskelija loytyi "<<it->getName()<<endl;
            }
            else
            {
                cout<<"Opiskelijaa ei löytynyt"<<endl;
            }

            break;
            }
    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
        }
}while(selection < 5);

return 0;
}
