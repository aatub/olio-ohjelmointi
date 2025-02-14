#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "student.h"


using namespace std;

int main ()
{

    int selection =0;
    vector<Student>studentList;

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
        case 0:{
            string name;
            int age;
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cout << "Anna uuden opiskelijan nimi ja ika: ";
            cin >> name >> age;
            // Lisää uusi student StudentList vektoriin.
            studentList.push_back(Student(name, age));
            break;
        }
        case 1:{
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            if(studentList.empty()){
                cout << "Opiskelijoita ei loytynyt" << endl;
            } else{
                for(const auto& student : studentList){
                    student.printStudentInfo();
                }
            }
            // nimet.
            break;
        }
        case 2: {
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b){
                return a.getName() < b.getName();
            });

            cout << "Opiskelijat järjestetty nimen mukaan: " << endl;
            for(const auto& student : studentList){
                student.printStudentInfo();
            }

            break;
        }
        case 3:{
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(), studentList.end(), [](const Student& a, const Student& b){
                return a.getAge() < b.getAge();
            });

            cout << "Opiskelijat järjestetty ian mukaan: " << endl;
            for(const auto& student : studentList){
                student.printStudentInfo();
            }

            break;
        }
        case 4:{
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            string searchName;
            cout << "Anna opiskelijan nimi jonka haluat etsiä: ";
            cin >> searchName;

            auto it = find_if(studentList.begin(), studentList.end(), [&searchName](const Student& student){
                return student.getName() == searchName;
            });

            break;
        }
    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
        }

}while(selection < 5);

return 0;
}
