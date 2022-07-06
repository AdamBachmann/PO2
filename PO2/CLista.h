#pragma once
class CLista
{
public:
	struct T3D
	{
		double x;
		double y;
		double z;
		T3D* next;
		T3D();
	};

	T3D* first;

	CLista();
	//~CLista();
	void dodaj(double, double, double);
	void wstaw(double, double, double);
	void usun(int);
	void wyszukaj(double, double, double);
};

