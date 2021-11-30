#include <iostream>
#include <cmath>

using namespace std;

class Power
{
private:
    int oneNumber;
    int twoNumber;

public:

    void set(int one, int two) {
        
        oneNumber = one;
        twoNumber = two;
        cout << "Your numbers: ";
        cout << one << " " << "and" << " " << two << endl;
        
    }
    double Calculate(int one, int two) {
        int sum;
        oneNumber = one;
        twoNumber = two;
       
        sum = pow(one, two);
        cout << "Result: " << sum;

        return sum;
    }
    

};

int main()
{
    Power task;
    task.set(2,10);
    task.Calculate(2,10);
    
}