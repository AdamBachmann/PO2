#include <iostream>
#include "CLista.h"
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	CLista Lista;
	clock_t start;
	double duration;
	start = clock();
	//while (1)
	//{
		for (int i = 0; i < 100000; i++)
		{
			Lista.dodaj(i, i, i);
		}
		for (int i = 0; i < 100000; i++)
		{
			Lista.usun(1);
		}
	//}

		duration = (clock() - start)/(double)CLOCKS_PER_SEC;
		cout <<"Lista wskaznikowa: " <<  duration << endl;

		start = clock();

		vector <int> Wektor;
		for (int i = 0; i < 100000; i++)
		{
			Wektor.push_back(i);
		}
		for (int i = 0; i < 100000; i++)
		{
			Wektor.erase(Wektor.begin());
		}

		duration = (clock() - start) / (double)CLOCKS_PER_SEC;
		cout <<"Wektor: " << duration << endl;

	return 0;
}