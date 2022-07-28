#include "CList.h"

T3D::T3D()
{
	next = 0;
}

CList::CList()
{
	first = 0;
}

void CList::addElement(double a ,double b, double c)
{
	T3D* newElement = new T3D;

	newElement->x = a;
	newElement->y = b;
	newElement->z = c;

	if (first == 0)
		first = newElement;
	else
	{
		T3D* temp = first;

		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = newElement;
		newElement->next = 0;
	}
}

void CList::deleteElement(int n)
{
	if (n == 1)
	{
		T3D* temp = first;
		first = temp->next;
		delete temp;
	}
	else if (n >= 2)
	{
		int counter = 1;
		T3D* temp = first;

		while (temp)
		{
			if ((counter + 1) == n) break;

			temp = temp->next;
			counter++;
		}

		if (temp->next->next == 0)
		{
			delete temp->next;
			temp->next = 0;
		}
		else
		{
			T3D* deleted = temp->next;
			temp->next = temp->next->next;
			delete deleted;
		}
	}
}

void CList::insertElement(double a, double b, double c, int n)
{
	T3D* newElement = new T3D;
	newElement->x = a;
	newElement->y = b;
	newElement->z = c;

	if (first == 0)
		first = newElement;
	else if (n == 1)
	{
		T3D* temp = first;
		newElement->next = temp;
		first = newElement;
	}
	else
	{
		int nextElementN = 0;
		int counter = 1;
		T3D* temp = first;
		T3D* previousElement = nullptr;

		while (temp)
		{
			if ((counter + 1) == n)
			{
				nextElementN = 1;
				break;
			}

			previousElement = temp;
			temp = temp->next;
			counter++;
		}

		if (nextElementN == 1)
		{
			newElement->next = temp->next;
			temp->next = newElement;
		}
		else
		{
			newElement->next = temp;
			previousElement->next = newElement;
		}
	}
}

int CList::findElement(double a, double b, double c)
{
	int counter = 1;
	int rightElement = 0;

	T3D* temp = first;

	while (temp)
	{
		if (temp->x == a && temp->y == b && temp->z == c)
		{
			rightElement = 1;
			break;
		}

		temp = temp->next;
		counter++;
	}

	if (rightElement == 1)
		return counter;
	else
		return 0;
}