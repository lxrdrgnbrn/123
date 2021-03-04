#include "Rectangle.h" 
Rectangle::Rectangle()
{
	a = 0;
	b = 0;
}
Rectangle::Rectangle(double a, double b)
{
	this->a = a;
	this->b = b;
}

void Rectangle::SetA(double a)
{
	this->a = a;
}

void Rectangle::SetB(double b)
{
	this->b = b;
}

double Rectangle::GetA()const
{
	return a;
}

double Rectangle::GetB()const
{
	return b;
}

double Rectangle::Square()const
{
	double s;
	s = a * b;
	return s;
}

double Rectangle::Perimeter()const
{
	double p;
	p = (a + b) * 2;
	return p;
}
