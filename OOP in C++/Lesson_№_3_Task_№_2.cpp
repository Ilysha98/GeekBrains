#include <iostream>
#include <sstream>
using namespace std;

class Car

{
protected:
    string company;
    string model;
public:
    Car(string c, string m) : company(c), model(m) {}
    
    string getCompany()const{
        return company;}
    
    string getModel()const{
        return model;}
    
    void print(){
        cout << company << " " << model << endl;}
};


class PassengerCar : public Car

{
public:
    PassengerCar(string c, string m): Car(c,m){}
    
    string getCompany()const{
        return company;
    }
    
    string getModel()const{
        return model;
    }
    
    void print(){
        cout << company << " " << model << endl;
    }
};


class Bus : public Car
{
public:
    Bus(string c, string m) : Car(c,m){}
    
    string getCompany()const{
        return company;
    }
    
    string getModel()const{
        return model;
    }
    
    void print(){
        cout << company << " " << model << endl;
    }
};

class Minivan : public PassengerCar, public Bus

{
private:
    string company;
    string model;
public:
    Minivan(string c, string m): Bus(c,m), PassengerCar(c,m){}
    
    string getCompany()const{
        return company;
    }
    
    string getModel()const{
        return model;
    }
    void print(){
        cout << company << " " << model << endl;
    }
};

int main() {
    Bus bus("porshe","cayman");
    Minivan minivan("dsd","dfsf");
    minivan.print();
    bus.print();
    
    return 0;
}
