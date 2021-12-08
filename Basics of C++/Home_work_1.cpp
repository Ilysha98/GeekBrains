#include <iostream>
#include <cstdlib>
using namespace std;

enum TicTacToe {Cross, Zero, EmptyCage}; // создать перечисление; Задание № 2.
	 
	int main()

{
		system("chcp 1251>nul");
//////////////////////////////////////////////////////////////////////////////////////////////////// Задание № 1.
		int a = 1;
		short int b = -1;
		long long c = 1'000'000'000;
			char well = 'H';
		bool dad = false;
		float d = 6.53f;
		double e = 37.68765685;
//////////////////////////////////////////////////////////////////////////////////////////////////// Задание № 3.
	
		TicTacToe game [3] = { Cross, Zero, EmptyCage};
		cout << "Крестики :" << game[0] << endl;
		cout << "Нолики :" <<  game[1] << endl;
		cout << "Пустая клетка :" << game[2] << endl;
		system("pause>nul");

		return 0;

}