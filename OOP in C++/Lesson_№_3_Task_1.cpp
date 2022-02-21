#include <iostream>
using namespace std;

class Figure
{
public:
    virtual double getArea() = 0;
    virtual void showFigureType() = 0;
    

};
class Parallelogram : public Figure {
protected:
    double width;
    double height;

public:
    Parallelogram(double w, double h): width(w), height(h) {}

    double getArea() override
    {
        return width * height;
    }
    void showFigureType() 
    {
        cout << "Parallelogram: ";
    }

};

class Rectangle : public Parallelogram
{

public:
    Rectangle(double w, double h) : Parallelogram(w,h) {}

    double getArea() override
    {
        return width * height;
    }
   
    void showFigureType()
    {
       cout << "Rectangle: ";
    }
};


class Square : public Parallelogram
{

public:
    Square(double w, double h) : Parallelogram(w, h) {}

    double getArea() override
    {
        return width * height;
    }

    void showFigureType()
    {
        cout << "Square: ";
    }
};


class Rhombus : public Parallelogram
{

public:
    Rhombus(double w, double h) : Parallelogram(w, h) {}

    double getArea() override
    {
        return width * height;
    }

    void showFigureType()
    {
        cout << "Rhombus: ";
    }
};




class Circle : public Figure
{
private:
    double radius;
public:
    Circle(double r) : radius(r)
    {
    }
    double getArea() override
    {
        return radius * radius * 3.14;
    }
   
    void showFigureType()
    {
       cout << "Circle: ";
    }
};

int main()
{
    Parallelogram par(10, 15);
    Rectangle rect(30, 50);
    Square square(40, 60);
    Rhombus rhomb(10, 10);
    Circle circle(30);

    par.showFigureType();
    cout << par.getArea() << endl;

    rect.showFigureType();
    cout <<rect.getArea() << endl;

    square.showFigureType();
    cout << square.getArea() << endl;

    rhomb.showFigureType();
    cout << rhomb.getArea() << endl;
    
    circle.showFigureType();
    cout <<circle.getArea() << endl;

    return 0;
}