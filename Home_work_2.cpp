﻿#include <iostream>
#include <cstdlib>
using namespace std;
/// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Задание № 4
extern int a;
extern int b;
extern int c;
extern int d;
extern float sum;
/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float sum =  a * (b + (float (c) / d)); // Задание № 2


    sum = (sum <= 21) ? sum - 21 : (sum - 21)*2 ;

    cout << sum << endl;
    /// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    int  Array[3][3][3] = {

        { {1,2,3},{4,5,6},{7,8,9} },
        { {1,2,3},{4,5,6},{7,8,9} },
        { {1,2,3},{4,5,6},{7,8,9} }

        };
       int *ptr = nullptr;
       ptr = &Array[1][1][1];
    cout << Array[0][0][0] << "," << Array[1][1][1] << "," << Array[2][2][2]<< endl << *ptr;

    return 0;
     
}
