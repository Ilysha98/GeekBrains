#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Array(int* arr, size_t sizeArr) {
    cout << "Array: ";
    for (size_t i = 0; i < sizeArr; i++) 
    {
             cout << arr[i];
    }
    cout << endl;
      
    
}
void inicialArray(int * array, const size_t sizeArray) {
    array[0] = 1;
    for (size_t i = 1; i < sizeArray; i++)
    {
        array[i] = array[i - 1] << 1;

    }
}

void Task1()
{
    size_t Size;
    cin >> Size;
    int* arr = new(nothrow) int[Size];
    if (arr != nullptr)
    {
        Array(arr, Size);
        inicialArray(arr, Size);
        delete[] arr;
    }



}
//===========================================================================================================================================
//===========================================================================================================================================

void printMatrix(int** array, size_t size) 
{
    cout << "Matrix: " << endl;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void inicialMatrix(int** pMatrix, const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size; j++) 
        {
            pMatrix[i][j] = rand() % 100;
        }
    }

}

void Task2() 
{
    srand(time(NULL));
    const size_t size = 5;
    int** pMatrix = new int* [size];
    for (size_t i = 0; i < size; i++)
    {
        pMatrix[i] = new int[size];
    }
    inicialMatrix(pMatrix, size);
    cout << endl;
    printMatrix(pMatrix, size);
    for (size_t i = 0; i < size; i++)
    {
        delete[] pMatrix[i];
    }
    delete[] pMatrix;
}
//========================================================================================================================================
//========================================================================================================================================

void WriteToFile(const string& fn, const string& str)
{
    ofstream fout;
    fout.open(fn);
    if (fout.is_open())
    {
        fout << str;
        fout.close();

    }
}

void Task3() 
{
    cout << "Enter file name 1 for output: ";
    string fn1, fn2;
    cin >> fn1;
    cout << "Enter file name 2 for output: ";
    cin >> fn2;

    const string str1;
    WriteToFile(fn1, str1);
    const string str2;
    WriteToFile(fn2, str2);

}


int main()
{
   
    Task1();
    Task2();
    Task3();


    return 0;
}
