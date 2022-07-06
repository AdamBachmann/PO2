#include "CLista.h"

CLista::T3D::T3D()
{
	next = 0;
}

CLista::CLista()
{
	first = 0;
}

void CLista::dodaj(double a ,double b, double c)
{
	T3D* nowa = new T3D;

	nowa->x = a;
	nowa->y = b;
	nowa->z = c;

	if (first == 0)
	{
		first = nowa;
	}
	else
	{
		T3D* temp = first;

		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = nowa;
		nowa->next = 0;
	}
}

void CLista::usun(int a)
{
	T3D* temp = first;
	int licznik = 1;
	if (a == 1)
	{
		first = temp->next;
		delete temp;
	}
	else if (a > 1)
	{
		while (temp)
		{
			if ((licznik + 1) == a) 
				break;
			temp = temp->next;
			licznik++;
		}

		if (temp->next->next == 0)
		{
			delete temp->next;
			temp->next = 0;
		}
		else
		{
			T3D* usuwany = temp->next;
			temp->next = temp->next->next;
			delete usuwany;
		}
	}
}