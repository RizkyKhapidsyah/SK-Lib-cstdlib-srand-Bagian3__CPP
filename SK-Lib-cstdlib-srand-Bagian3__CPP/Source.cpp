#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	int acak = rand();
	
	cout << "Seed = 1, Random number = " << acak << endl;

	srand(5);

	acak = rand();

	cout << "Seed = 5, Random number = " << acak << endl;

	_getch();
	return 0;
}