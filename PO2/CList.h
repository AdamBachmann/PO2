#pragma once

struct T3D
{
	double x;
	double y;
	double z;
	T3D* next;
	T3D();
};

class CList
{
private:
	T3D* first;

public:
	CList();
	void addElement		(double a, double b, double c);
	void insertElement	(double a, double b, double c, int n);
	void deleteElement	(int n);
	int findElement	(double a, double b, double c);
};

