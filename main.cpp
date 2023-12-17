#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
	srand(time(nullptr));

	int max_try = 6;
	int mystery_nb = rand() % 100;
	cout << "Entrez le premier nombre : ";

	for (int i = 0; i < max_try; i++)
	{
		int number = 0;
		cin >> number;
		cin.ignore();

		if (mystery_nb == number)
		{
			cout << " Gagne" << endl;
			break;
		}
		
		else if (number > mystery_nb)
		{
			cout << "Trop grand" << endl;
		}
		
		else
		{
			cout << "Trop petit" << endl;
		}
		
		if (i == max_try - 1)
		{
			cout << "Perdu" << endl;
		}
	}
	cin.ignore();
	return 0;
}