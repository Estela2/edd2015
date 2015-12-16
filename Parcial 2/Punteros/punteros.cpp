#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int a;
	int * puntero;
	cout << "Introduce un numero" << endl;
	cin >> a;
	puntero = new int [a];
	for(int i = 0; i < a; i++) 
	{
		puntero[i] = i + 1;
	}
	for(int i = 0; i < a; i++)
	{
		cout << puntero[i] << endl;
	}

	delete[] puntero;
	return 0;
}
