
#include <iostream>
using namespace std;

int main()
{
	int rez;
	int nr1, nr2;
	cout << "Introduceti primul numar" << endl;
	cin >> nr1;
	cout << "Introduceti al doilea numar" << endl;
	cin >> nr2;
	
	rez = nr1 + nr2;
	cout <<"Rezultatul adunarii este:"<< rez << endl;
	if (nr1 > nr2)
	{
		cout << "Daca nr1>nr2, rezultatul scaderii este:" << nr1 - nr2 << endl;
	}
	else
		cout << "Daca nr2>nr1, rezultatul scaderii este:" << nr2 - nr1 << endl;
	
	cout << "Rezultatul inmultirii:" << nr1 * nr2 << endl;

	if (nr1 != 0 && nr2 != 0)
	{
		if (nr1 > nr2)
		{
			cout << "Daca nr1>nr2, rezultatul impartirii este:" << nr1 / nr2 << endl;
		}
		else
			cout << "Daca nr2>nr1,rezultatul impartirii este:" << nr2 / nr1 << endl;
	}  
}


