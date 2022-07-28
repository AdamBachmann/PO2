#include <iostream>
#include "CList.h"
#include <ctime>
#include <vector>

using namespace std;

int main()
{
	CList List;
	clock_t start;
	double duration;
	start = clock();

	for (int i = 0; i < 100000; i++)
	{
		List.addElement(i, i, i);
	}
	for (int i = 0; i < 100000; i++)
	{
		List.deleteElement(1);
	}

	duration = (clock() - start)/(double)CLOCKS_PER_SEC;
	cout <<"List:\t" <<  duration << endl;

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
	cout <<"Vector:\t" << duration << endl;

	return 0;
}