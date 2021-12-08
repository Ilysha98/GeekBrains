#include <iostream>
#include <cstdlib>
using namespace std;
//														Задание № 1

 double mass (double *arr , double Size) //Объясните почему я не пользуюсь указателем на Size? потому что он используется в в цикле for, arr используется внутри цикла for и он его не видет?
{
	for (size_t i = 0; i < Size; i++) 
	{
		cout << arr[i] << endl;

	}
	return 0;
}


int main()
{
	system("chcp 1251 > nul");
	cout << ("А вот и наш массивчик: ") << endl;
	
	 const int mySize = 5;
	 double myarr[mySize] = {123.123, 234.234, 345.345, 456.456, 567.567}; // нужно вкладывать аргументы? можно и без них

	if (mass(myarr , mySize)) 
	{
		cout << myarr;
	}
	
	system("pause>nul");
	return 0;
}