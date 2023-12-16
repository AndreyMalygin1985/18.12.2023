#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

// Создайте класс Student, который будет содержать информацию о студенте.
// С помощью механизма наследования, реализуйте класс Aspirant(аспирант —
// студент, который готовится к защите кандидатской работы) производный от Student.

class Student 
{
protected:
    string fio;
    int age;

public:
    Student(const string& fio, int age) : fio(fio), age(age) {}
    
    void displayInfo() const 
    {
        cout << "ФИО - " << fio << ", Возраст: " << age;
    }
};

class Aspirant : public Student 
{
    string researchTopic;
public:

    Aspirant(const string& fio, int age, const string& topic)
        : Student(fio, age), researchTopic(topic) {}
   
    void displayInfo() const 
    {
        Student::displayInfo();
        cout << ", Тема исследования: " << researchTopic << endl;
    }
};

int main() 
{
    SetConsoleOutputCP(1251);

    Student student("Иванов Иван Иванович", 19);
    Aspirant aspirant("Петров Пётр Петрович", 26, "Исследование алгоритмов");

    cout << "Студент:" << endl;
    student.displayInfo();
    cout << "\nАспирант: " << endl;
    aspirant.displayInfo();

    return 0;
}