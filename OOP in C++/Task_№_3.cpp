#include <iostream>
#include <sstream>
using namespace std;
class Person {
protected:
    string name;
    int age;
    string gender;
    double weight;
public:
    Person(string n, int a, string g, double w) : name(n), age(a), gender(g), weight(w){}
    string getName()const {
        return name;
    }
    int getAge()const {
        return age;
    }
    double getWeight()const {
        return weight;
    }

};
class Student : public Person {
private:
    int yearStudy;
    static int count;
public:
    static int getCount() {
        return count;
    }
    Student(string n, int a, string g, double w, int y) : yearStudy(y), Person(n, a, g, w) { count++; }
    int getYearStudy()const {
        return yearStudy;
    }
    void print()const {
        cout << name << "-" << age << " " << gender << " " << weight << " " << yearStudy << endl;
    }
};

int Student::count = 0;

    int main()
{
        Student pupil_1("Dima", 17, "Male", 80.7, 2006);
        Student pupil_2("Dina", 17, "Female", 55.5, 2006);
        Student pupil_3("Rudik", 18, "Male", 74, 2003);
        pupil_1.print();
        pupil_2.print();
        pupil_3.print();

        cout <<"Number students: "<< Student::getCount() << endl;

}

