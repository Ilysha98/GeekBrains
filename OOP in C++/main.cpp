#include <iostream>
#include <sstream>

using namespace std;

class fruit
{
protected:
    string name;
    string color;
public:
    fruit(string n, string c): name(n), color(c){}
    
    string getName()const{
        return name; }
    
    string getColor()const{
        return color; }
    
};

class Apple : public fruit
{
public:
    Apple(string n, string c) : fruit(n,c){}
    
    string getName()const{
        return name;
        
    }
    string getColor()const{
        return color;
        
    }
    void print(){
        cout << color << endl;
        
    }
};
class Banana : public fruit
{
public:
    Banana(string n, string c) : fruit(n,c){}
    
    string getName()const{
        return name;
        
    }
    string getColor()const{
        return color;
        
    }
};
class GrannySmith : public Apple
{
public:
    GrannySmith(string n, string c): Apple(n,c){}
    string getName()const{
        return name;
    }
    
    string getColor()const{
        return color;
    }
   
};



int main ()
{
    Apple a("apple", "red");
    Banana b("banana", "yellow");
    GrannySmith c("GrannySmith apple","green");
    
    cout <<"My " << a.getName() << " is " << a.getColor() << endl;
    cout <<"My " << b.getName() << " is " << b.getColor() << endl;
    cout <<"My " << c.getName() << " is " << c.getColor() << endl;
    
}

