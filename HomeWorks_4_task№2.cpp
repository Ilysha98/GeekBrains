#include <iostream>
using namespace std;

int main()
{

	const size_t Size = 6;
	int mass[Size] = { 0, 1, 1, 0, 1, 0 };

	for (size_t i = 0; i < Size; i++)
	{
		cout << ("Array befor: ") << mass[i] << endl;
	}

	for (size_t i = 0; i < Size; i++) {
		if (mass[0] == 0)
		{
			mass[0]++;
		}

		if (mass[1] == 1)
		{
			mass[1]--;
		}

		if (mass[2] == 1)
		{
			mass[2]--;
		}

		if (mass[3] == 0)
		{
			mass[3]++;
		}

		if (mass[4] == 1)
		{
			mass[4]--;
		}

		if (mass[5] == 0)
		{
			mass[5]++;
		}

		cout << ("Array after: ") << mass[i] << endl;
	}

		
		
	
	
	
	return 0;
 }