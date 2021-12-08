#include <iostream>
using namespace std;
char h[9] = { '-', '-', '-', '-', '-', '-', '-', '-', '-' };
void cleanboard()
{
	for (int i = 0; i < 50; i++)
	{
		cout << "\n";
	}
}
void board1()
{
	cout << "\t\t\t***********" << endl;
	cout << "\t\t\t-7-|-8-|-9-" << endl;
	cout << "\t\t\t-4-|-5-|-6-" << endl;
	cout << "\t\t\t-1-|-2-|-3-" << endl;
	cout << "\t\t\t***********" << endl;
}
void board()
{
	cout << "\n";
	cout << "\t\t\t***********" << endl;
	cout << "\t\t\t-" << h[6] << "-|-" << h[7] << "-|-" << h[8] << "-" << endl;
	cout << "\t\t\t-" << h[3] << "-|-" << h[4] << "-|-" << h[5] << "-" << endl;
	cout << "\t\t\t-" << h[0] << "-|-" << h[1] << "-|-" << h[2] << "-" << endl;
	cout << "\t\t\t***********" << endl;
}
int get_move()
{
	int move;
	cin >> move;
	while (move > 9 || move < 1 || h[move - 1] != '-')
	{
		cout << "ERROR!!!!" << endl;
		cin >> move;
	}
	return move;
}
int main()
{
	board1();
	for (int i = 0; i < 9; i++)
	{
		cleanboard();
		board1();
		board();
		int move = get_move();
		cout <<  "Moves: " <<  move << endl;
		if (i % 2 == 0)
		{
			h[move - 1] = 'X';
		}
		else h[move - 1] = 'O';
	}

	return 0;
}
