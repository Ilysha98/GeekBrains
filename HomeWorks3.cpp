#include <iostream>
#include <cstdlib>
using namespace std;



int main()
{
	system("chcp 1251>nul");
	//////////////////////////////////////////////////////////////////////////////////////////////// Задание № 1
	
	int a, b;

	cout << "Введите два числа: " << endl;
	cin >> a;
	cin >> b;
	
	int sum = a + b;

	if (sum >= 10 && sum <= 20)
		cout << sum << " " << "true" << endl;


	else if (sum < 10 || sum > 20)
		cout << sum << " " << "false" << endl;
	
	////////////////////////////////////////////////////////////////////////////////////////// Задание № 2
	int oneNumber, twoNumber;
	cout << "Введите два числа: " << endl;
	cin >> oneNumber;
	cin >> twoNumber;

	int sumNamber = oneNumber + twoNumber;

	if (oneNumber == 10 && twoNumber == 10 || sumNamber == 10)
		cout << sumNamber << " " << "True" << endl;
	else
	{
		cout << "False" << endl; 
	}
	///////////////////////////////////////////////////////////////////////////////////////// Задание № 3
	cout <<endl;
	cout << "Все нечетные числа: " << endl;
	const size_t SIZE = 50;
	int arr[SIZE] = { 0 };
	
	for (size_t i = 1; i < 50; i = i + 2)
		cout << i << endl;
	/////////////////////////////////////////////////////////////////////////////////////// Задание № 4
	
	int Number;
	cout << "Введите любое число: " << endl;
	cin >> Number;
	if (Number % Number && Number % 1)
		cout << Number << "-" << "Good namber" << endl;
	else
	{
		cout << Number << "-" << "Not good namber" << endl;
	}


	system("pause>nul");

	return 0;

}
